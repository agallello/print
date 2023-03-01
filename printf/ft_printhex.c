/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:56:56 by agallell          #+#    #+#             */
/*   Updated: 2023/02/06 11:47:51 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getlen(unsigned int nb)
{
	int	numb;

	numb = 0;
	while (nb != 0)
	{
		numb++;
		nb = nb / 16;
	}
	return (numb);
}

static void	ft_puthex(unsigned int nb, char format)
{
	if (nb >= 16)
	{
		ft_puthex(nb / 16, format);
		ft_puthex(nb % 16, format);
	}
	else if (nb > 9)
	{
		if (format == 'x')
			ft_putchar_fd((nb - 10 + 'a'), 1);
		if (format == 'X')
			ft_putchar_fd((nb - 10 + 'A'), 1);
	}
	else
		ft_putchar_fd((nb + '0'), 1);
}

int	ft_printhex(unsigned int nb, char format)
{
	if (nb == 0)
		return (write(1, "0", 1));
	else
		ft_puthex(nb, format);
	return (ft_getlen(nb));
}
