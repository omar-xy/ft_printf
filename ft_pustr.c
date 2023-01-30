/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:45:02 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/13 12:46:18 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pustr(char *str, int *len)
{
	int	i;

	if (!str)
		return (ft_pustr("(null)", len));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i], len);
		i++;
	}
}
