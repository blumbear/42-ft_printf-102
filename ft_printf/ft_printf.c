/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:16 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/25 16:21:10 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_strs_size(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if(*str == '%')
			i += 2;
	}
	return (i);
}

char	*char_to_str(char c)
{
	char *res;

	res = malloc(sizeof(char) * 2);
	res[0] = c;
	res[1] = '\0';
	return (res);
}

char	*get_args(va_list args, char c)
{
	if (c == 'c')
		return (char_to_str(va_arg(args, int)));
	else if (c == 's')
		return (va_arg(args, char *));
	// else if (c == 'p')
	// 	return (ft_ptr_address(va_arg(args, void *)));
	else if (c == 'd')
		return (ft_nbr_base(va_arg(args, int), "0123456789"));
	else if (c == 'i')
		return (ft_nbr_base(va_arg(args, int), "0123456789"));
	else if (c == 'u')
		return (ft_nbr_base(va_arg(args, int), "0123456789"));
	else if (c == 'x')
		return (ft_nbr_base(va_arg(args, int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_nbr_base(va_arg(args, int), "0123456789ABCDEF"));
	else if (c == '%')
		return ("%");
	return (NULL);
}

char	**get_strs(const char *str, va_list args)
{
	int		i;
	int		j;
	char	**strs;

	i = 0;
	j = 0;
	strs = (char **)malloc(sizeof(char *) * (get_strs_size(str) + 1));
	while (str[i])
	{
		if (str[i] == '%')
		{
			strs[j++] = ft_substr(str, 0, i);
			strs[j++] = get_args(args, str[i + 1]);
			str += i + 2;
		}
		i++;
	}
	strs[j++] = ft_substr(str + i, 0, i);
	strs[j] = NULL;
	return (strs);
}

int	ft_printf(const char *str, ...)
{
	char	**strs;
	va_list	args;
	int		len;
	int		i;

	va_start(args, str);
	len = 0;
	i = 0;
	strs = get_strs(str, args);
	while (strs[i])
	{
		ft_putstr_fd(strs[i], 1);
		len += ft_strlen(strs[i]);
		free(strs[i++]);
	}
	return (len);
}
