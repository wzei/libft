/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 03:04:38 by wzei              #+#    #+#             */
/*   Updated: 2018/12/02 03:14:52 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchar(const char *s, int c)
{
	char *save;
	char chr;

	save = NULL;
	while (chr = *s)
	{
		if (chr == ch)
			save = (char *)s;
		s++;
	}
	return (save);
}
