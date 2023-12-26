/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <dnieto-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 08:11:05 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/05/16 17:29:42 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H                                                   
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_get_format(va_list args, const char format);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int nbr);
int		ft_puthex(unsigned int hex, char format);
int		ft_len_unsigned(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		ft_put_unsigned(unsigned int n);
int		ft_len_ptr(unsigned long long int_pointer);
void	ft_put_ptr(unsigned long long int_pointer);
int		ft_print_ptr(unsigned long long int_pointer);

#endif
