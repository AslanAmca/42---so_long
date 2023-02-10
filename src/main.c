/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:09:42 by aaslan            #+#    #+#             */
/*   Updated: 2023/02/10 05:56:56 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	if (data == NULL)
		ft_print_error("Game Data -> Malloc Error");
	data->argument_count = argc;
	data->map_name = argv[1];
	ft_validate_map(data);
	ft_create_window(data);
	ft_render_assets(data);
	ft_event_handler(data);
	return (0);
}
