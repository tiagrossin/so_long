/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structures.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <sarosa-b@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:47:53 by sarosa-b          #+#    #+#             */
/*   Updated: 2025/02/03 20:00:13 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURES_H
# define STRUCTURES_H

typedef struct s_point
{
	int		x;
	int		y;
	char	c;
}	t_point;

typedef struct s_map
{
	char	**map;
	int		with;
	int		height;
}	t_map;

typedef struct s_texture
{
	mlx_texture_t	*wall;
	mlx_texture_t	*floor;
	mlx_texture_t	*coins;
	mlx_texture_t	*exit;
	mlx_texture_t	*player;
}	t_texture;

typedef struct s_img
{
	mlx_image_t	*wall;
	mlx_image_t	*floor;
	mlx_image_t	*coins;
	mlx_image_t	*exit;
	mlx_image_t	*player;
}	t_img;

typedef struct s_game
{
	t_map		*map;
	t_point		*player;
	t_point		*exit;
	t_img		*img;
	t_texture	*texture;
	int			coins;
	int			moves;
	int			is_facing_left; // 0 no mira / 1 = si
	void		*mlx;
	long		win_lenght;
	long		win_height;
}	t_game;

#endif
