/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:28:45 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 18:37:50 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define    FT_PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *format, ...);
void	ft_checkcheck(char c, void *ptr, int *len);
void	ft_pustr(char *str, int *len);
void	ft_putchar(char c, int *len);
void	ft_putunsnbr(unsigned int n, int *len);
void	ft_putnbr(int n, int *len);
void	ft_puthexl(unsigned int hex, int *len);
void	ft_puthexu(unsigned int hex, int *len);
void	ft_putadd(unsigned long n, int *len);	
int		ft_check_arg(char c);

#endif