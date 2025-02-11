/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 12:52:52 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/02/10 22:11:08 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_game(t_game *game)
{
	game->mlx = NULL;
	game->map = NULL;
	game->player = NULL;
	game->exit = NULL;
	game->coins = 0;
	game->moves = 0;
	game->img = NULL;
	game->tx = NULL;
	game->win_height = 0;
	game->win_len = 0;
	game->is_facing_left = 0;
}

int	main(int argc, char **argv)
{
	t_game game;

	if (argc != 2)
		ft_error("Uso: ./so_long [nombre_archivo.ber]");
}
