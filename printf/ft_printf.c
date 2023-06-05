/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:47:37 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/19 08:29:22 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_variable(va_list args, const char str)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (str == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (str == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (str == 'p')
	{
		len += ft_printstr("0x");
		len += ft_printhex(va_arg(args, unsigned long), hex);
	}
	else if (str == 'd' || str == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		len += ft_printunsignbr(va_arg(args, unsigned int));
	else if (str == 'x')
		len += ft_printhex(va_arg(args, unsigned int), hex);
	else if (str == 'X')
		len += ft_printhex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (str == '%')
		len += ft_printchar('%');
	return (len);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	args;
	int		len;

	len = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_variable(args, str[i]);
		}
		else
		{
			len += ft_printchar(str[i]);
		}
		i++;
	}
	va_end (args);
	return (len);
}
