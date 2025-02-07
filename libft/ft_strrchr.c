/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:22:55 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/07 15:22:57 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	char	*rs;

	slen = ft_strlen(s) + 1;
	rs = (char *)s;
	while (slen--)
	{
		if (rs[slen] == (char)c)
			return (&rs[slen]);
	}
	return (NULL);
}
