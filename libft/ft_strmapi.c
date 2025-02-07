/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:30:16 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/24 20:21:41 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	slen;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	i = 0;
	slen = ft_strlen(s);
	new_str = (char *)malloc((slen + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (i < slen)
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[slen] = '\0';
	return (new_str);
}
