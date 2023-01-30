/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:22:38 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:53:32 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexl(unsigned int hex, int *len)
{
	if (hex >= 16)
	{
		ft_puthexl((hex / 16), len);
		ft_puthexl((hex % 16), len);
	}
	else if (hex <= 15 && hex >= 10)
		ft_putchar(hex - 10 + 97, len);
	else
		ft_putchar(hex + 48, len);
}
