/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 13:10:34 by wzei              #+#    #+#             */
/*   Updated: 2018/12/18 02:32:28 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	unsigned char			ch;
	static unsigned char	buf[2];

	ch = (unsigned char)c;
	if ((ch & 0x80) != 0)
	{
		if (((ch & 0xC0) != 0) && ((~ch) & 0x20) != 0)
		{
			buf[0] = ch;
			return ;
		}
		if (((~ch) & 0x70) != 0)
		{
			buf[1] = ch;
			write(1, &buf, 2);
			return ;
		}
	}
	write(1, &ch, 1);
}
