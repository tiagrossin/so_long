/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:29:04 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/08 22:29:06 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		sign;
	int		num;
	char	*mptr;

	sign = 1;
	num = 0;
	mptr = (char *)nptr;
	while (*mptr == ' ' || (*mptr >= 9 && *mptr <= 13))
		mptr++;
	if (*mptr == '+' || *mptr == '-')
	{
		if (*mptr == '-')
			sign *= -1;
		mptr++;
	}
	while (*mptr >= '0' && *mptr <= '9')
	{
		num = num * 10 + (*mptr - '0');
		mptr++;
	}
	return (num * sign);
}
