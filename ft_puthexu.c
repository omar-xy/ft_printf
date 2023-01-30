/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:26:16 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:48:25 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexu(unsigned int hex, int *len)
{
	if (hex >= 16)
	{
		ft_puthexu((hex / 16), len);
		ft_puthexu((hex % 16), len);
	}
	else if (hex <= 15 && hex >= 10)
		ft_putchar(hex - 10 + 65, len);
	else
		ft_putchar(hex + 48, len);
}
