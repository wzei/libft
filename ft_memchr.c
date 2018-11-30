/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:26:36 by wzei              #+#    #+#             */
/*   Updated: 2018/11/29 20:55:50 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			iter;
	unsigned char	uc_c;
	unsigned char	*up_s;

	uc_c = (unsigned char)c;
	up_s = (unsigned char*)s;
	iter = 0;
	while(iter < n)
	{
		if(up_s[iter] == uc_c)
		   return ((void *)(us_p + iter);
		iter++;	   
	}
	return (NULL);
}
