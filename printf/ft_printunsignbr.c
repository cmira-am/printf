/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsignbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 08:06:04 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/17 08:20:46 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsignbr(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_printchar('-');
		nb = -nb;
	}
	else if (nb > 9)
	{
		len += ft_printunsignbr(nb / 10);
		len += ft_printunsignbr(nb % 10);
	}
	else
		len += ft_printchar(nb + 48);
	return (len);
}
