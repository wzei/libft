/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:27:08 by wzei              #+#    #+#             */
/*   Updated: 2018/12/07 11:43:27 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*ret;

	ret = dest;
	while ((*dest = *src))
	{
		dest++;
		src++;
		if (n == 0)
			return (ret);
		n--;
	}
	while (n != 0)
		*dest++ = 0;
	return (ret);
}
