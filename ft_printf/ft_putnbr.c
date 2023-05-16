/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:17:10 by jternero          #+#    #+#             */
/*   Updated: 2022/10/30 17:05:01 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int digit, int *ptr)
{
	if (digit == -2147483648)
	{
		ft_putnbr((digit / 10), ptr);
		ft_putchar('8', ptr);
	}
	else if (digit < 0)
	{
		ft_putchar('-', ptr);
		ft_putnbr(-digit, ptr);
	}
	else
	{
		if (digit > 9)
			ft_putnbr((digit / 10), ptr);
		ft_putchar('0' + digit % 10, ptr);
	}
}
