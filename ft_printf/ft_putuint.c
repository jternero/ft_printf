/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:49:07 by jternero          #+#    #+#             */
/*   Updated: 2022/10/20 19:59:52 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint(unsigned int digit, int *ptr)
{
	if (digit > 9)
		ft_putnbr((digit / 10), ptr);
	ft_putchar('0' + digit % 10, ptr);
}
