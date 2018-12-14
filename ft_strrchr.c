/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <wzei@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 03:04:38 by wzei              #+#    #+#             */
/*   Updated: 2018/12/10 21:11:07 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;
	char chr;

	save = NULL;
	while ((chr = *s))
	{
		if (chr == c)
			save = (char *)s;
		s++;
	}
	return (save);
}
