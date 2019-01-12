/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:21:06 by wzei              #+#    #+#             */
/*   Updated: 2019/01/12 21:16:10 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	u_mask;
	unsigned long int	*ulp_s;
	unsigned char		*ucp_s;
	unsigned char		u_z;
	size_t				iter;

	iter = n / sizeof(long int);
	ulp_s = (unsigned long int *)s;
	ucp_s = (unsigned char *)s;
	u_mask = 0;
	u_z = 0;
	while (iter--)
		*ulp_s++ = u_mask;
	iter = n % sizeof(long int);
	while (iter--)
		ucp_s[n - iter - 1] = u_z;
}
