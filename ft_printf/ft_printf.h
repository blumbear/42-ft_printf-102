/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttaquet <ttaquet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:48:43 by ttaquet           #+#    #+#             */
/*   Updated: 2023/11/20 16:34:30 by ttaquet          ###   ########.fr       */
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
 * @param str an 'char *' when we have '%' the next charactere 
 * call the other params
 * @param ... number of variables that vary
 * @return int the numbers of the character who are printed
 */
int		ft_printf(const char *str, ...);

// /**
//  * @brief print the number 'n' traducted in the base 'base'
//  * 
//  * @param n A integer
//  * @param base A base like 2, 8, 10 or 16
//  * @param len the size of the number who will printed be the fonction
//  * @return the size of the number after the conversion
//  */
// char	*ft_nbr_base(unsigned int n, char	*base);

/**
 * @brief print an int and give his length
 * 
 * @param n number who need to be printed
 * @return int the number of caractere who are printed
 */
int		ft_printnbr(int n);

/**
 * @brief print an int and give his length in base 'base'
 * 
 * @param base an number base
 * @param n number who need to be printed in base 'base'
 * @return int the number of caractere who are printed
 */
int		ft_printnbr_base(size_t n, char	*base);

/**
 * @brief print an pointer address and give his length in base 'base'
 * 
 * @param ptr a pointer
 * @return int the number of caracter in the address
 */
int		ft_print_ptr(void	*ptr);
#endif