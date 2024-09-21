/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 03:47:08 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 04:06:11 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

# include <unistd.h>

typedef struct s_conversion_data
{
	double	temp;
	char	unit_from;
	char	unit_to;
}			t_conversion_data;

double		celsius_to_fahrenheit(double c);
double		fahrenheit_to_celsius(double f);
double		celsius_to_kelvin(double c);
double		kelvin_to_celsius(double k);

int			ft_atoi(const char *str);
int			ft_isspace(int c);
void		ft_putstr_fd(const char *s, int fd);
void		ft_putnbr_fd(double n, int fd);
void		ft_putchar_fd(char c, int fd);
size_t		ft_strlen(const char *str);

#endif
