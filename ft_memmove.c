/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:52:59 by wzei              #+#    #+#             */
/*   Updated: 2018/12/07 11:33:01 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define UINTPTR unsigned long *
#define INTPTR long *
#define UINT unsigned long

static void	*long_move(long *dst, const long *src, size_t l_len)
{
	while (l_len-- > 0)
		dst[l_len - 1] = src[l_len - 1];
	return ((void*)dst);
}

static void	*move(char *dst, const char *src, size_t len)
{
	while (len-- > 0)
		dst[len - 1] = src[len - 1];
	return ((void*)dst);
}

static int	chck_lng_cnd(void *dst, const void *src, size_t len)
{
	if ((UINT)dst % sizeof(long) == 0 &&
			(UINT)src % sizeof(long) == 0 &&
			len % sizeof(long) == 0)
		return (1);
	return (0);
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((UINTPTR)dst < (UINTPTR)src)
		return (ft_memcpy(dst, src, len));
	if (chck_lng_cnd(dst, src, len))
		return (long_move((INTPTR)dst, (INTPTR)src, len / sizeof(long)));
	return (move((char *)dst, (char *)src, len));
}
