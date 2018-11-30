/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzei <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:35:09 by wzei              #+#    #+#             */
/*   Updated: 2018/11/29 20:58:50 by wzei             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int					iter;
	const unsigned char	*up_s1;
	const unsigned char	*up_s2;

	iter = 0;
	up_s1 = (const unsigned char *)s1;
	up_s2 = (const unsigned char *)s2;
	while (iter < n)
	{
		if (up_s1[iter] != up_s2[iter])
			return (up_s1[iter] - up_s2[iter]);
	}
	return (0);
}
