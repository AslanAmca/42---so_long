/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 07:37:50 by aaslan            #+#    #+#             */
/*   Updated: 2023/02/13 18:57:15 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_create_window(t_data *data)
{
	int	col;
	int	row;

	col = data->map_col_count * ASSET_SIZE;
	row = data->map_row_count * ASSET_SIZE;
	data->mlx = mlx_init();
	if (data->mlx == NULL)
		ft_print_error(data, "mlx_init error.");
	data->mlx_window = mlx_new_window(data->mlx, col, row, GAME_NAME);
	if (data->mlx_window == NULL)
		ft_print_error(data, "mlx_new_window error.");
}
