/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:21:05 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/09/25 19:21:07 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *stdptr, size_t nbytes)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)stdptr;
	i = 0;
	while (i < nbytes)
	{
		ptr[i] = '\0';
		i++;
	}
}
