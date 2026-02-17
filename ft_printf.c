/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosafa <mosafa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:14:17 by mosafa            #+#    #+#             */
/*   Updated: 2025/11/18 11:16:00 by mosafa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>

static int	helper(char c, va_list *ar)
{
	if (c == 'c')
		return (ft_putchar(va_arg(*ar, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ar, char *)));
	else if (c == 'p')
		return (ft_putaddr(va_arg(*ar, void *), 3));
	else if (c == 'i' || c == 'd')
		return (ft_putint(va_arg(*ar, int), 1));
	else if (c == 'u')
		return (ft_putuint(va_arg(*ar, unsigned int), 1));
	else if (c == 'x')
		return (ft_puthex(va_arg(*ar, unsigned int), 1));
	else if (c == 'X')
		return (ft_puthexx(va_arg(*ar, unsigned int), 1));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	ar;

	i = 0;
	count = 0;
	va_start(ar, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count = count + helper (str[i + 1], &ar) - 1;
			i++;
		}
		else
			write (1, &str[i], 1);
		count ++;
		i++;
	}
	va_end(ar);
	return (count);
}

// int main(void)
// {
// 	int i = ft_printf("hhh%dhhh%ivvv%sjjj%%fff%p\n",111,-123,"L","22222222222");
// 	int v = printf("hhh%dhhh%ivvv%sjjj%%fff%p\n",111,-123,"L","22222222222");
// 	printf("\n%d",i - v);
// 	return (0);
// }