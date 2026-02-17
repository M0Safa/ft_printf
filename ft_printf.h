/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosafa <mosafa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:16:08 by mosafa            #+#    #+#             */
/*   Updated: 2025/11/18 11:14:56 by mosafa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_putadd(unsigned long n, int r);
int		ft_putint(int nb, int r);
void	ft_putchar1(char c);
int		ft_putuint(unsigned int nb, int r);
int		ft_puthex(unsigned int nb, int r);
int		ft_puthexx(unsigned int nb, int r);
int		ft_printf(const char *str, ...);
int		ft_putaddr(void *c, int r);

#endif