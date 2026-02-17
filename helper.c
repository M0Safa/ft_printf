/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosafa <mosafa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:15:18 by mosafa            #+#    #+#             */
/*   Updated: 2025/11/18 10:51:56 by mosafa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *c)
{
	int	i;

	i = 0;
	if (!c)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (c[i])
	{
		write (1, &c[i], 1);
		i++;
	}
	return (i);
}

int	ft_putadd(unsigned long n, int r)
{
	char	*a;

	a = "0123456789abcdef";
	if (n >= 16)
		r = ft_putadd(n / 16, r + 1);
	write (1, &a[n % 16], 1);
	return (r);
}

void	ft_putchar1(char c)
{
	write(1, &c, 1);
}

int	ft_putint(int nb, int r)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar1('-');
			nb = -nb;
			r++;
		}
		if (nb >= 10)
			r = ft_putint(nb / 10, r + 1);
		ft_putchar1((nb % 10) + '0');
	}
	return (r);
}
