/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 00:46:33 by wzei              #+#    #+#             */
/*   Updated: 2018/12/11 05:44:01 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

inline static void	gen_mask(unsigned long int *m, int c)
{
	unsigned long int	u_c;
	size_t				acc;

	*m = 0;
	u_c = 0 + (unsigned char)c;
	acc = sizeof(unsigned long int) / sizeof(char);
	while (acc--)
	{
		*m |= u_c;
		u_c <<= 8;
	}
}

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned long int	u_mask;
	unsigned long int	*ulp_s;
	unsigned char		*ucp_s;
	unsigned char		u_c;
	size_t				iter;

	iter = n / sizeof(long int);
	ulp_s = (unsigned long int *)s;
	ucp_s = (unsigned char *)s;
	u_mask = 0;
	u_c = (unsigned char)c;
	gen_mask(&u_mask, c);
	while (iter-- > 0)
		*ulp_s++ = u_mask;
	iter = n % sizeof(long int);
	while (iter-- > 0)
		ucp_s[n - iter - 1] = u_c;
	return (s);
}
