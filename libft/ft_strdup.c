/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:05 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/09 20:45:07 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*new_s;
	size_t	slen;

	slen = ft_strlen(s);
	new_s = malloc(slen + 1);
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s, slen + 1);
	return ((char *)new_s);
}
