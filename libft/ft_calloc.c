/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:41:49 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/09 18:41:51 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*memchunk;

	memchunk = malloc(nmemb * size);
	if (memchunk)
	{
		ft_bzero(memchunk, (nmemb * size));
		return (memchunk);
	}
	return (NULL);
}
