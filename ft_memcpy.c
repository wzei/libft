/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:40:40 by wzei              #+#    #+#             */
/*   Updated: 2018/11/29 20:56:27 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*uptr_dst;
	unsigned char	*uptr_src;
	size_t			iter;

	uptr_dst = (unsigned char*)dst;
	uptr_src = (unsigned char*)src;
	iter = 0;
	while (iter < n)
	{
		uptr_dst[iter] = uptr_src[iter];
		iter++;
	}
	return (dst);
}
