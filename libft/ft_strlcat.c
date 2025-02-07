/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:41:19 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/01 17:41:21 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
		return (size + srclen);
	if (srclen == 0)
		return (destlen);
	if (srclen < size - destlen - 1)
		ft_memcpy(dest + destlen, src, srclen + 1);
	else
	{
		ft_memcpy(dest + destlen, src, size - destlen - 1);
		dest[size - 1] = '\0';
	}
	return (destlen + srclen);
}
