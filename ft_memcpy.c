/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:40:40 by wzei              #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/12/27 17:41:31 by wzei             ###   ########.fr       */
=======
/*   Updated: 2018/12/11 08:19:59 by wzei             ###   ########.fr       */
>>>>>>> fast ft_memcpy implementation
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int	*upl_dst;
	unsigned long int	*upl_src;
	unsigned char		*upc_dst;
	unsigned char		*upc_src;
	size_t				iter;

<<<<<<< HEAD
	uptr_dst = (unsigned char*)dst;
	uptr_src = (unsigned char*)src;
	iter = 0;
	if (!dst && !src)
	{
		return (NULL);
	}
	while (iter < n)
	{
		uptr_dst[iter] = uptr_src[iter];
		iter++;
	}
=======
	upl_dst = (unsigned long int*)dst;
	upl_src = (unsigned long int*)src;
	upc_dst = (unsigned char*)dst;
	upc_src = (unsigned char*)src;
	iter = n / sizeof(unsigned long int);
	while (iter--)
		*upl_dst++ = *upl_src++;
	iter = n % sizeof(unsigned long int);
	while (iter--)
		upc_dst[n - iter - 1] = upc_src[n - iter - 1];
>>>>>>> fast ft_memcpy implementation
	return (dst);
}
