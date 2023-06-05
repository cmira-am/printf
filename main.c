/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 07:56:55 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/30 13:04:12 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "ft_printf.h"

int	main()
{
	int i;
	char *str;
	int *j;
	int a;
	int b;
	int c;
	int hexa;
	int lowest;

	str = "";
	i = 0;
	lowest = -2147483648;
	j = &i;
	c = 'c';
	hexa = 255;

	a = ft_printf("%d es hexadecimal, %d es numero, %s puntero, %% \n", lowest, i, str);
	b = printf("%d es hexadecimal, %d es numero, %s puntero, %% \n", lowest, i, str);
	printf("Real %d, Mio %d", b, a);
}
