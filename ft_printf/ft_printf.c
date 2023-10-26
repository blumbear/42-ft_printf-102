/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:16 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/26 18:04:40 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_args(char *str, char c )
{
	int	tmp;

	tmp = ft_strlen(str);
	ft_putstr_fd(str, 1);
	if (c != 's')
		free(str);
	return (tmp);
}

int	print_char(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	get_args(va_list args, char c)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_args(va_arg(args, char *), c));
	else if (c == 'p')
		return (print_args(ft_ptr_address(va_arg(args, void *)), c));
	else if (c == 'd' || c == 'i' || c == 'u')
		return (print_args(ft_nbr_base(va_arg(args, int), "0123456789"), c));
	else if (c == 'x')
		return (print_args(ft_nbr_base(va_arg(args, int),
					"0123456789abcdef"), c));
	else if (c == 'X')
		return (print_args(ft_nbr_base(va_arg(args, int),
					"0123456789ABCEDF"), c));
	else if (c == '%')
		return (print_char(c));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += get_args(args, str[i + 1]);
			i += 2;
		}
		if (str[i])
		{
			ft_putchar_fd(str[i], 1);
			len++;
			i++;
		}
	}
	return (len);
}
// int main(){
// // printf("size -> %d\n",ft_printf(" NULL %s NULL ", NULL));
// printf("--------------\n");
// printf("size -> %d",printf(" NULL %s NULL ", NULL));
// }