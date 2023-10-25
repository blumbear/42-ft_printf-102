/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:43 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/25 15:39:26 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include "libft/libft.h"
# include <stdarg.h>


int		ft_printf(const char *, ...);

/**
 * @brief return a (char *) where the number 'n' are traducted in the base 'base'
 * 
 * @param n A integer 
 * @param base A base like 2, 8, 10 or 16
 * @return char* who contain 'n' in base 'base'
 */
char	*ft_nbr_base(int	n, char	*base);

# endif