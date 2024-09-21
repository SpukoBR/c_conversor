/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:50:29 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 04:03:11 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.h"

int	validate_args(int argc, char **argv, t_conversion_data *data)
{
	if (argc != 4)
	{
		ft_putstr_fd("Usage: ./converter <temperature> <unit_from> <unit_to>\n",
			1);
		return (1);
	}
	data->temp = ft_atoi(argv[1]);
	data->unit_from = argv[2][0];
	data->unit_to = argv[3][0];
	return (0);
}

double	process_conversion(t_conversion_data *data)
{
	if (data->unit_from == 'C' && data->unit_to == 'F')
		return (celsius_to_fahrenheit(data->temp));
	else if (data->unit_from == 'F' && data->unit_to == 'C')
		return (fahrenheit_to_celsius(data->temp));
	else if (data->unit_from == 'C' && data->unit_to == 'K')
		return (celsius_to_kelvin(data->temp));
	else if (data->unit_from == 'K' && data->unit_to == 'C')
		return (kelvin_to_celsius(data->temp));
	else
	{
		ft_putstr_fd("Invalid conversion\n", 1);
		return (-1);
	}
}

int	main(int argc, char **argv)
{
	t_conversion_data	data;
	double				result;

	if (validate_args(argc, argv, &data))
		return (1);
	result = process_conversion(&data);
	if (result == -1)
		return (1);
	ft_putnbr_fd(result, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
