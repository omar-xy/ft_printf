/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 22:21:46 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/14 17:07:07 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_checkcheck(char c, void *ptr, int *len)
{
	if (c == 'c')
		ft_putchar((char)ptr, len);
	else if (c == 's')
		ft_pustr((char *)ptr, len);
	else if (c == 'd' || c == 'i')
		ft_putnbr((int)ptr, len);
	else if (c == 'u')
		ft_putunsnbr((unsigned int)ptr, len);
	else if (c == 'x')
		ft_puthexl((unsigned int)ptr, len);
	else if (c == 'X')
		ft_puthexu((unsigned int)ptr, len);
	else if (c == 'p')
	{
		ft_pustr("0x", len);
		ft_putadd((unsigned long)ptr, len);
	}
}
