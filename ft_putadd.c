/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:44:25 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:46:49 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(unsigned long n, int *len)
{
	if (n >= 16)
	{
		ft_putadd((n / 16), len);
		ft_putadd((n % 16), len);
	}
	else
		ft_putchar("0123456789abcdef"[n], len);
}
