/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdor <mdor@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:52:56 by mdor              #+#    #+#             */
/*   Updated: 2022/12/14 21:31:57 by mdor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	j;

	i = 0;
	j = c;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			return ((char *)s + i);
		i++;
	}
	if (j == '\0')
		return ((char *)s + i);
	return (NULL);
}
