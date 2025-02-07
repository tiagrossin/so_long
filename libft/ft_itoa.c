/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:41:46 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/23 17:49:52 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int num)
{
	unsigned int	numlen;

	numlen = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		numlen++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	unsigned int	numlen;
	char			*prntbl_num;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	numlen = ft_numlen(n);
	prntbl_num = (char *)malloc((numlen + 1) * sizeof(char));
	if (!prntbl_num)
		return (NULL);
	prntbl_num[numlen] = '\0';
	if (n == 0)
		prntbl_num[0] = '0';
	if (n < 0)
	{
		prntbl_num[0] = '-';
		n = -n;
	}
	while (n)
	{
		prntbl_num[--numlen] = (n % 10) + '0';
		n /= 10;
	}
	return (prntbl_num);
}
