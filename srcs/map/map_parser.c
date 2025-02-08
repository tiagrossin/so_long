/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:45:45 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/02/08 13:41:06 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "so_long.h"
#include "../../libft/libft.h"

static bool	check_file_extension(const char *str)
{
	int	len;

	len = ft_strlen(str);
	if (len < 4 || ft_strncmp(str + len - 4, ".ber", 4))
		return (true);
	return (false);
}

/*int	main(int argc, char **argv)
{
	if (argc != 2)
	{
        	printf("Uso: %s <nombre_del_archivo>\n", argv[0]);
        	return (1);
	}
	ft_printf("%d", check_file_extension(argv[1]));
}*/
