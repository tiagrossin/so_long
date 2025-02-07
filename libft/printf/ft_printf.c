/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:27:54 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/01/31 20:36:03 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_assign_format(va_list *args, char c, int *char_count)
{
	int	outcome;

	outcome = 0;
	if (c == 'c')
		outcome = ft_putchar_pf(va_arg(*args, int), char_count);
	else if (c == 's')
		outcome = ft_putstr_pf(va_arg(*args, char *), char_count);
	else if (c == 'i' || c == 'd')
		outcome = ft_putnbr_pf(va_arg(*args, int), char_count);
	else if (c == 'u')
		outcome = ft_unsigned_int_pf(va_arg(*args, unsigned int), char_count);
	else if (c == 'p')
		outcome = ft_pointer_pf(va_arg(*args, size_t), char_count);
	else if (c == 'x' || c == 'X')
		outcome = ft_hexadecimal_pf(va_arg(*args, unsigned int), char_count, c);
	else if (c == '%')
		outcome = ft_putchar_pf('%', char_count);
	else
		return (-1);
	if (outcome == -1)
		return (-1);
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		char_count;
	int		i;

	va_start(args, str);
	char_count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (ft_assign_format(&args, str[i], &char_count) == -1)
				return (-1);
			i++;
		}
		else
		{
			if (ft_putchar_pf((char)str[i], &char_count) == -1)
				return (-1);
			i++;
		}
	}
	va_end(args);
	return (char_count);
}
