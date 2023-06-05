/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmira-am <cmira-am@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:02:53 by cmira-am          #+#    #+#             */
/*   Updated: 2023/05/17 08:18:08 by cmira-am         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int			ft_printf(char const *str, ...);
int			ft_printchar(char c);
int			ft_printhex(unsigned long p, char *hex);
int			ft_printnbr(int n);
int			ft_printunsignbr(unsigned int nb);
int			ft_printstr(char *str);

#endif
