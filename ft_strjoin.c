/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 21:03:17 by wzei              #+#    #+#             */
/*   Updated: 2018/12/18 02:32:28 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	int		iter;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	iter = 0;
	if (!(ret = (char *)malloc((len1 + len2 + 1) * sizeof(char))))
		return (NULL);
	ret[len1 + len2] = '\0';
	while (len1)
	{
		ret[iter] = s1[iter];
		iter++;
		len1--;
	}
	while (len2)
	{
		ret[iter++] = s2[len1++];
		len2--;
	}
	return (ret);
}
