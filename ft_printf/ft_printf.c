/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:12:57 by jternero          #+#    #+#             */
/*   Updated: 2022/10/30 20:13:42 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_form(va_list args, char *str, int *ptr)
{
	if (*str == 'c')
		ft_putchar(va_arg(args, int), ptr);
	if (*str == 's')
		ft_putstr(va_arg(args, char *), ptr);
	if (*str == 'i' || *str == 'd')
		ft_putnbr(va_arg(args, int), ptr);
	if (*str == 'u')
		ft_putuint(va_arg(args, unsigned int), ptr);
	if (*str == '%')
		ft_putchar(*str, ptr);
	if (*str == 'x')
		ft_puthexnbr(va_arg(args, unsigned int), ptr, HEX_LOW_BASE);
	if (*str == 'X')
		ft_puthexnbr(va_arg(args, unsigned int), ptr, HEX_UPP_BASE);
	if (*str == 'p')
	{
		ft_putstr("0x", ptr);
		ft_puthexnbr(va_arg(args, unsigned long long), ptr, HEX_LOW_BASE);
	}
}

int	ft_printf(char const *str, ...)
{
	va_list		args;
	int			ptr;

	ptr = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_form(args, (char *)str, &ptr);
		}
		else
			ft_putchar(*str, &ptr);
		str++;
	}
	va_end(args);
	return (ptr);
}
