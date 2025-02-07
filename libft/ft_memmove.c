/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:37:07 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/26 19:37:09 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t nbytes)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	i = 0;
	if (ptr2 > ptr1)
		while (nbytes-- > 0)
			ptr2[nbytes] = ptr1[nbytes];
	else
	{
		while (i < nbytes)
		{
			ptr2[i] = ptr1[i];
			i++;
		}
	}
	return (dest);
}
