/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:42:02 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:49:16 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *len)
{
	if (n < 10 && n >= 0)
		ft_putchar(48 + n, len);
	else if (n == -2147483648)
	{
		ft_putnbr(n / 10, len);
		ft_putchar('8', len);
	}
	else if (n < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-n, len);
	}
	else
	{
		ft_putnbr(n / 10, len);
		ft_putnbr(n % 10, len);
	}
}
