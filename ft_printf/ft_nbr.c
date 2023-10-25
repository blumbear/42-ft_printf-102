/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 14:00:12 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/25 15:42:43 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_num_size(int	n, char	*base)
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

char	*ft_nbr_base(int	n, char	*base)
{
	int		sign;
	int		len;
	char	*res;

	sign = (n < 0);
	n *= (((n > 0) * 2) - 1);
	len = sign + ft_num_size(n, base);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if(!res)
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
	
}