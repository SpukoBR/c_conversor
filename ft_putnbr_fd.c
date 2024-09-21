/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:23:56 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 04:04:48 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.h"

void	ft_putnbr_fd(double n, int fd)
{
	long	int_part;
	double	decimal_part;

	int_part = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		int_part = -int_part;
	}
	if (int_part >= 10)
		ft_putnbr_fd(int_part / 10, fd);
	ft_putchar_fd((int_part % 10) + '0', fd);
	decimal_part = n - (long)n;
	if (decimal_part != 0)
	{
		ft_putchar_fd('.', fd);
		decimal_part = decimal_part * 1000000;
		if (decimal_part < 0)
			decimal_part = -decimal_part;
		ft_putnbr_fd(decimal_part, fd);
	}
}
