/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:46:17 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 03:46:56 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.h"

double	celsius_to_fahrenheit(double c)
{
	return ((c * 9.0 / 5.0) + 32.0);
}

double	fahrenheit_to_celsius(double f)
{
	return ((f - 32.0) * 5.0 / 9.0);
}

double	celsius_to_kelvin(double c)
{
	return (c + 273.15);
}

double	kelvin_to_celsius(double k)
{
	return (k - 273.15);
}
