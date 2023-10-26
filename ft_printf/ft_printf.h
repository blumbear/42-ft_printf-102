/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:43 by ttaquet           #+#    #+#             */
/*   Updated: 2023/10/26 18:09:50 by ttaquet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdlib.h>


/**
 * @brief print character in the str
 * 
 * @param str an 'char *' when we have '%' the next charactere call the other params
 * @param ... number of variables that vary
 * @return int the numbers of the character who are print
 */
int		ft_printf(const char *str, ...);

/**
 * @brief print the number 'n' traducted in the base 'base'
 * 
 * @param n A integer
 * @param base A base like 2, 8, 10 or 16
 * @param len the size of the number who will printed be the fonction
 * @return the size of the number after the conversion
 */
char	*ft_nbr_base(int n, char	*base);

/**
 * @brief return the address of a pointer
 * 
 * @param ptr a pointer
 * @return char* who contain pointer's address
 */
char	*ft_ptr_address(void	*ptr);

#endif