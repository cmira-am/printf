/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 07:59:12 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/16 11:45:01 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned long p, char *hex)
{
	int	len;

	len = 0;
	if (p == 0)
		return (ft_printchar('0'));
	if (p > 15)
	{
		len += ft_printhex(p / 16, hex);
		len += ft_printhex(p % 16, hex);
	}
	else
		len += ft_printchar(hex[p % 16]);
	return (len);
}
