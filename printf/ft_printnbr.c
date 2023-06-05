/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 08:08:36 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/17 08:17:06 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
	{
		ft_printstr("-2147483648");
		return (11);
	}
	else if (nb < 0)
	{
		len += ft_printchar('-');
		len += ft_printnbr(-nb);
	}
	else if (nb > 9)
	{
		len += ft_printnbr(nb / 10);
		len += ft_printnbr(nb % 10);
	}
	else
		len += ft_printchar(nb + 48);
	return (len);
}
