/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_length_of_ray.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihykim2 <jihykim2@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 21:39:19 by jihykim2          #+#    #+#             */
/*   Updated: 2023/11/22 16:18:52 by jihykim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void	calculate_length_of_ray(t_game *game)
{
	t_raycast	*ray;

	ray = &game->ray_info;
	if (ray->side = W_OR_E)
	{
		ray->perp_wall_dist = (ray->map_pos.x - game->player.x + \
			(1 - ray->step_dir.x) / 2) / ray->ray_dir.x;
		ray->wall_hit_point = game->player.y + \
			ray->perp_wall_dist * ray->ray_dir.y;
	}
	else
	{
		ray->perp_wall_dist = (ray->map_pos.y - game->player.x + \
			(1 - ray->step_dir.x) / 2) / ray->ray_dir.x;
		ray->wall_hit_point = game->player.x + \
			ray->perp_wall_dist * ray->ray_dir.x;
	}
	ray->wall_hit_point -= floor(ray->wall_hit_point);
}