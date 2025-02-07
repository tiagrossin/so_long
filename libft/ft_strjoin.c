/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:10:52 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/14 17:10:54 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_s;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = NULL;
	if (s1 != 0 && s2 != 0)
	{
		new_s = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (new_s)
		{
			ft_strlcpy(new_s, s1, s1_len + 1);
			ft_strlcpy(&new_s[s1_len], s2, s1_len + (s2_len + 1));
		}
	}
	return (new_s);
}
