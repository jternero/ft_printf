/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:44:02 by jternero          #+#    #+#             */
/*   Updated: 2022/10/20 19:48:01 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char	*str, int *ptr)
{
	if (str == NULL)
	{
		write (1, "(null)", 6);
		*ptr = *ptr + 6;
	}
	else
	{
		while (*str != '\0')
		{
			ft_putchar(*str, ptr);
			str++;
		}
	}	
}
