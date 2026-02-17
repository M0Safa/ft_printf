/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosafa <mosafa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:38:36 by mosafa            #+#    #+#             */
/*   Updated: 2025/11/18 10:54:42 by mosafa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int nb, int r)
{
	if (nb >= 10)
		r = ft_putint(nb / 10, r + 1);
	ft_putchar1((nb % 10) + '0');
	return (r);
}

int	ft_puthex(unsigned int nb, int r)
{
	char	*a;

	a = "0123456789abcdef";
	if (nb >= 16)
		r = ft_puthex(nb / 16, r + 1);
	write (1, &a[nb % 16], 1);
	return (r);
}

int	ft_puthexx(unsigned int nb, int r)
{
	char	*a;

	a = "0123456789ABCDEF";
	if (nb >= 16)
		r = ft_puthexx(nb / 16, r + 1);
	write (1, &a[nb % 16], 1);
	return (r);
}

int	ft_putaddr(void *c, int r)
{
	if (c == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write (1, "0x", 2);
	return (ft_putadd((unsigned long)c, r));
}
