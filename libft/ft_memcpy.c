/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:55:13 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/26 13:55:14 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t nbytes)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < nbytes)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dest);
}
