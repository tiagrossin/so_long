/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:48:24 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/01/31 20:36:19 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnbr_pf(int nbr, int *char_count)
{
	int	outcome;

	if (nbr == -2147483648)
	{
		outcome = write(1, "-2147483648", 11);
		if (outcome == -1)
			return (-1);
		(*char_count) += 11;
		return (0);
	}
	if (nbr < 0)
	{
		outcome = ft_putchar_pf('-', char_count);
		if (outcome == -1)
			return (-1);
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		if ((ft_putnbr_pf(nbr / 10, char_count)) == -1)
			return (-1);
	}
	outcome = ft_putchar_pf((nbr % 10) + '0', char_count);
	return (outcome);
}

int	ft_unsigned_int_pf(unsigned int u, int *char_count)
{
	if (u > 9)
		if (ft_unsigned_int_pf(u / 10, char_count) == -1)
			return (-1);
	if (ft_putchar_pf((u % 10) + '0', char_count) == -1)
		return (-1);
	return (0);
}

int	ft_pointer_pf(size_t ptr, int *char_count)
{
	if (!ptr)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		(*char_count) += 5;
		return (0);
	}
	if (ptr < 16)
	{
		if (write(1, "0x", 2) == -1)
			return (-1);
		(*char_count) += 2;
	}
	if (ptr >= 16)
	{
		if (ft_pointer_pf(ptr / 16, char_count) == -1)
			return (-1);
	}
	if (ft_putchar_pf(HEX_BASE[ptr % 16], char_count) == -1)
		return (-1);
	return (0);
}

int	ft_hexadecimal_pf(unsigned int nbr, int *char_count, char x_type)
{
	char	*base;

	if (x_type == 'x')
		base = HEX_BASE;
	else
		base = UPP_HEX_BASE;
	if (nbr >= 16)
	{
		if (ft_hexadecimal_pf(nbr / 16, char_count, x_type) == -1)
			return (-1);
	}
	if (ft_putchar_pf(base[nbr % 16], char_count) == -1)
		return (-1);
	return (0);
}
