/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 00:51:18 by wzei              #+#    #+#             */
/*   Updated: 2018/12/02 01:32:04 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	len0;
	unsigned int	len1;

	len0 = ft_strlen(s1);
	len1 = ft_strlen(s2);
	if (len1 < n)
		ft_strcpy(&s1[len0], s2);
	else
	{
		strncpy(&s1[len0], s2, n);
		s1[len0 + n] = '\0';
	}
	return (s1);
}
