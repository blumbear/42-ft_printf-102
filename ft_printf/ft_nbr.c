/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:00:12 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/26 17:49:51 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_num_size(int n, char	*base)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= ft_strlen(base);
		i++;
	}
	return (i);
}

char	*ft_nbr_base(int n, char	*base)
{
	int		sign;
	int		len;
	char	*res;

	sign = (n < 0);
	n *= (((n > 0) * 2) - 1);
	len = sign + ft_num_size(n, base);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len--] = '\0';
	while ((size_t)n > ft_strlen(base))
	{
		res[len--] = base[n % ft_strlen(base)];
		n /= ft_strlen(base);
	}
	res[len--] = base[n % ft_strlen(base)];
	if (sign)
		res[len] = '-';
	return (res);
}

char	*ft_ptr_address(void	*ptr)
{
	long long int	address;
	char			*addresshex;
	int				i;
	int				valeur;

	address = (long long int)ptr;
	valeur = 0;
	i = 0;
	addresshex = malloc(sizeof(char) * 18);
	while (i < 16)
	{
		valeur = address % 16;
		if (valeur < 10)
			addresshex[13 - i] = (char)(valeur + '0');
		else
			addresshex[13 - i] = (char)(valeur - 10 + 'a');
		address /= 16;
		i++;
	}
	addresshex[0] = '0';
	addresshex[1] = 'x';
	return (addresshex);
}
