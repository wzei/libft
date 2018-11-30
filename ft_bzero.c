/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 01:21:06 by wzei              #+#    #+#             */
/*   Updated: 2018/11/29 20:54:50 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*uptr_s;
	size_t			iter;

	uptr_s = (unsigned char*)s;
	while (iter < n)
	{
		uptr_s[iter] = 0;
		iter++;
	}
}
