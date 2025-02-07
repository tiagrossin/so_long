/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:27:00 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/24 20:55:58 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	while (i < slen)
	{
		(*f)(i, &s[i]);
		i++;
	}
}
