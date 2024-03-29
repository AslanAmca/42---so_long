/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_enemy_animation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 00:07:54 by aaslan            #+#    #+#             */
/*   Updated: 2023/02/10 18:16:48 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_enemy_asset(t_data *data, t_enemy *temp, int counter)
{
	if (counter == 1 && temp->enemy_direction == keycode_d)
		ft_put_image(data, ENEMY_RIGHT_1, temp->enemy_row, temp->enemy_col);
	else if (counter == 8000 && temp->enemy_direction == keycode_d)
		ft_put_image(data, ENEMY_RIGHT_2, temp->enemy_row, temp->enemy_col);
	else if (counter == 1 && temp->enemy_direction == keycode_a)
		ft_put_image(data, ENEMY_LEFT_1, temp->enemy_row, temp->enemy_col);
	else if (counter == 8000 && temp->enemy_direction == keycode_a)
		ft_put_image(data, ENEMY_LEFT_2, temp->enemy_row, temp->enemy_col);
	else if (counter == 1 && data->player_col < temp->enemy_col)
		ft_put_image(data, ENEMY_LEFT_1, temp->enemy_row, temp->enemy_col);
	else if (counter == 8000 && data->player_col < temp->enemy_col)
		ft_put_image(data, ENEMY_LEFT_2, temp->enemy_row, temp->enemy_col);
	else if (counter == 1 && data->player_col >= temp->enemy_col)
		ft_put_image(data, ENEMY_RIGHT_1, temp->enemy_row, temp->enemy_col);
	else if (counter == 8000 && data->player_col >= temp->enemy_col)
		ft_put_image(data, ENEMY_RIGHT_2, temp->enemy_row, temp->enemy_col);
}

void	ft_enemy_animation(t_data *data)
{
	static int	counter = 0;
	t_enemy		*temp;

	temp = data->enemy;
	counter++;
	while (temp != NULL)
	{
		ft_enemy_asset(data, temp, counter);
		temp = temp->next;
	}
	if (counter == 16000)
		counter = 0;
}
