/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:48:14 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:49:35 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int n, int *len)
{
	if (n >= 10)
	{
		ft_putunsnbr((n / 10), len);
		ft_putunsnbr((n % 10), len);
	}
	else
	{
		ft_putchar(n + 48, len);
	}
}
