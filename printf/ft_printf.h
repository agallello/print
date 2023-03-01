/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 10:38:43 by agallell          #+#    #+#             */
/*   Updated: 2023/02/10 10:06:15 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_printpercent(void);
int		ft_printchar(int c);
int		ft_printnbr(int n);
int		ft_printstr(char *s);
int		ft_printhex(unsigned int nb, char format);
int		ft_printptr(void *ptr);
int		ft_unsignedprint(unsigned int n);
#endif
