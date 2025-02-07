/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:44:33 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/11 14:44:34 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*new_s;

	new_s = NULL;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && s1[i])
			i++;
		while (ft_strchr(set, s1[j - 1]) && s1[j - 1] && j > i)
			j--;
		new_s = (char *)malloc(sizeof(char) * (j - i + 1));
		if (new_s)
			ft_strlcpy(new_s, &s1[i], (j - i + 1));
	}
	return (new_s);
}
