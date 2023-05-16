/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:55:31 by jternero          #+#    #+#             */
/*   Updated: 2022/10/30 20:04:32 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexnbr(unsigned long long digit, int *ptr, char *base)
{
	if (digit > 15)
		ft_puthexnbr((digit / 16), ptr, base);
	ft_putchar(base[digit % 16], ptr);
}
