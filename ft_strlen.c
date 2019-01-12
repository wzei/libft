/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 01:48:02 by wzei              #+#    #+#             */
/*   Updated: 2019/01/12 21:14:11 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

inline static size_t	nlz(uint64_t x)
{
	uint64_t	y;
	int			n;
	int			c;

	n = 64;
	c = 32;
	while (c != 0)
	{
		y = x >> c;
		if (y != 0)
		{
			n -= c;
			x = y;
		}
		c >>= 1;
	}
	return (n - x);
}

inline static size_t	zbytel(uint64_t tst)
{
	uint64_t	y;
	int			n;

	y = ((tst - 0x0101010101010101) & ~(tst) & 0x8080808080808080);
	n = nlz(y) >> 3;
	if (n < 8)
		return (7 - n);
	return (8);
}

size_t					ft_strlen(const char *str)
{
	uint64_t	*ulp_s;
	size_t		iter;
	size_t		acc;

	iter = 0;
	acc = 0;
	ulp_s = (uint64_t *)str;
	while ((acc = zbytel(*ulp_s)) == 8)
	{
		iter += 8;
		ulp_s++;
	}
	while (str[iter] != '\0')
		iter++;
	return (iter);
}
