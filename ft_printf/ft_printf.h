/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jternero <jternero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:28:17 by jternero          #+#    #+#             */
/*   Updated: 2022/10/30 20:06:58 by jternero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

//main function
int		ft_printf(const char *str, ...);
//evaluate the type of argument
void	ft_form(va_list args, char *str, int *ptr);
// write a character
void	ft_putchar(char c, int *ptr);
// write a string using a loop of ft_putchar
void	ft_putstr(char	*str, int *ptr);
// put a number 
void	ft_putnbr(int digit, int *ptr);
// put a unsigned number
void	ft_putuint(unsigned int digit, int *ptr);
//
void	ft_puthexnbr(unsigned long long digit, int *ptr, char *base);

#endif 
