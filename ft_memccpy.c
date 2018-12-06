/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:57:41 by wzei              #+#    #+#             */
/*   Updated: 2018/12/06 21:15:15 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tp;
	const unsigned char	*fp;

	tp = dst;
	fp = src;
	if (n)
	{
		while (--n != 0)
		{
			if ((*tp++ = *fp++) == c)
				return (dst);
		}
	}
	return (NULL);
}
