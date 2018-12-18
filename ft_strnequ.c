/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 19:55:09 by wzei              #+#    #+#             */
/*   Updated: 2018/12/18 05:44:10 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned char	*u_s1;
	unsigned char	*u_s2;
	int				iter;

	if (n == 0)
		return (0);
	iter = 0;
	u_s1 = (unsigned char *)s1;
	u_s2 = (unsigned char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (u_s1[iter] != '\0' && u_s2[iter] != '\0' && n > 1)
	{
		if (u_s1[iter] != u_s2[iter])
			break ;
		iter++;
		n--;
	}
	return ((u_s1[iter] - u_s2[iter]) == 0 ? 1 : 0);
}
