/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otaraki <otaraki@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:27:58 by otaraki           #+#    #+#             */
/*   Updated: 2022/11/14 17:31:22 by otaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ptr;
	int			i;
	int			len;

	len = 0;
	i = -1;
	va_start(ptr, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_check_arg(format[i]))
				ft_checkcheck(format[i], va_arg(ptr, void *), &len);
			else if (!ft_check_arg(format[i]) && format[i])
				ft_putchar(format[i], &len);
			else
				return (len);
		}
		else
			ft_putchar(format[i], &len);
	}
	va_end(ptr);
	return (len);
}
