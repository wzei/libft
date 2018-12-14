/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 01:48:02 by wzei              #+#    #+#             */
/*   Updated: 2018/12/13 01:53:01 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

/* inline static void	gen_bolter(unsigned long int *m, unsigned char c)
{
	unsigned long int	u_c;
	size_t				acc;

	*m = 0;
	u_c = 0 + c;
	acc = sizeof(unsigned long int) / sizeof(char);
	while (acc--)
	{
		*m |= u_c;
		u_c <<= 8;
	}
} */

/* inline static void	init_lkup(unsigned char *arr)
{
	int iter;

	iter = 2;
	arr[0] = 32U;
	arr[1] = 31U;
	while (iter < 4)
		arr[iter++] = 30U;
	while (iter < 8)
		arr[iter++] = 29U;
	while (iter < 16)
		arr[iter++] = 28U;
	while (iter < 32)
		arr[iter++] = 27U;
	while (iter < 64)
		arr[iter++] = 26U;
	while (iter < 128)
		arr[iter++] = 25U;
	while (iter < 256)
		arr[iter++] = 24U;
} */

/* inline static void	init_lkup_64(unsigned char *arr)
{
	int iter;

	iter = 2;
	arr[0] = 64U;
	arr[1] = 63U;
	while (iter < 4)
		arr[iter++] = 62U;
	while (iter < 8)
		arr[iter++] = 61U;
	while (iter < 16)
		arr[iter++] = 60U;
	while (iter < 32)
		arr[iter++] = 59U;
	while (iter < 64)
		arr[iter++] = 58U;
	while (iter < 128)
		arr[iter++] = 57U;
	while (iter < 256)
		arr[iter++] = 56U;
	while (iter < 512)
		arr[iter++] = 55U;
} */

/* static inline unsigned int	nlz(unsigned int x)
{
	static unsigned char	clz_lkup[256];
	unsigned int			n;

	if (clz_lkup[0] != 32U)
		init_lkup(clz_lkup);
	if (x >= (1U << 16))
	{
		if (x >= (1U << 24))
			n = 24U;
		else
			n = 16U;
	}
	else
	{
		if (x >= (1U << 8))
			n = 8U;
		else
			n = 0U;
	}
	return (unsigned int)clz_lkup[x >> n] - n;
} */

/* static inline unsigned int	nlz_64(unsigned int x)
{
	static unsigned char	clz_lkup[512];
	unsigned int			n;

	if (clz_lkup[0] != 64U)
		init_lkup_64(clz_lkup);
	if (x >= (1U << 32))
	{
		if (x >= (1U << 55))
			n = 55U;
		else
			n = 32U;
	}
	else
	{
		if (x >= (1U << 16))
			n = 16U;
		else
			n = 0U;
	}
	return (unsigned int)clz_lkup[x >> n] - n;
} */

/* inline static int	nlz(unsigned long int x)
{
	unsigned long int	z;
	unsigned long int	mask_1;
	unsigned long int	mask_2;
	int					i;

	z = 0;
	i = 32;
	mask_1 = 0x00000000FFFFFFFF;
	mask_2 = 0x000000000000FFFF;
	if (x == 0)
		return (64);
	while (i > 1)
	{
		if (x <= mask_1)
		{
			z += i;
			x <<= i;
		}
		mask_1 <<= i;
		mask_1 |= mask_2;
		i /= 2;
		mask_2 >>= i;
	}
	return (z);
} */

/* inline static int	nlz(uint64_t x)
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

inline static int	zbytel(uint64_t tst)
{
	uint64_t	y;
	int			n;

	y = ((tst - 0x0101010101010101) & ~(tst) & 0x8080808080808080);
	n = nlz(y) >> 3;
	if (n < 8)
		return (7 - n);
	return (8);
} */

/* inline static int	chk_char(unsigned long int tst, unsigned long int blt)
{
	return (zbytel(tst & blt));
} */

/* int					ft_strlen(char *str)
{
	uint64_t	*ulp_s;
	int			iter;
	int			acc;

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
}*/

int	ft_strlen(char *str)
{
	const char *s;

	s = str;
	while (*s)
		++s;
	return (s - str);
}
