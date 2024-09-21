/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 03:55:21 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/21 03:48:21 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
