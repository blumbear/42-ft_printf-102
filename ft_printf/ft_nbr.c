/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:00:12 by ttaquet           #+#    #+#             */
/*   Updated: 2023/11/20 16:39:30 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(signed int n)
{
	int	sign;

	sign = n > 0;
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", 1);
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar_fd(n % 10 + '0', 1);
}

int	ft_printnbr(int n)
{
	int			i;
	long int	num;

	i = (n < 0) + 1;
	ft_putnbr(n);
	num = (long int)n;
	num *= (((n > 0) * 2) - 1);
	while (num >= 10)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static void	ft_putnbr_base(size_t n, char *base)
{
	if (n >= ft_strlen(base))
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar_fd(base[n % ft_strlen(base)], 1);
}

int	ft_printnbr_base(size_t n, char	*base)
{
	int	i;

	i = 0;
	ft_putnbr_base(n, base);
	while (n >= ft_strlen(base))
	{
		n /= ft_strlen(base);
		i++;
	}
	return (i + 1);
}

int	ft_print_ptr(void	*ptr)
{
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	ft_putstr_fd("0x", 1);
	return (2 + ft_printnbr_base (*(size_t *)& ptr, "0123456789abcdef"));
}
