/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 19:09:39 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/09 19:09:53 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *stdptr, int value, size_t nbytes)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)stdptr;
	i = 0;
	while (i < nbytes)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (stdptr);
}
