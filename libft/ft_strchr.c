/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:13:59 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/06 21:14:01 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	slen;
	char	*s_ptr;

	slen = ft_strlen(s) + 1;
	s_ptr = ((char *)s);
	while (slen--)
	{
		if (*s_ptr == (char)c)
			return (&*s_ptr);
		s_ptr++;
	}
	return (NULL);
}
