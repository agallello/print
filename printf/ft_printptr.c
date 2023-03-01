/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:31:01 by agallell          #+#    #+#             */
/*   Updated: 2023/02/10 10:08:27 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlen(unsigned long long nb)
{
	int	count;

	count = 0;
	while (nb != 0)
	{
		count++;
		nb = nb / 16;
	}
	return (count);
}

static void	ft_putptr(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_putptr(nb / 16);
		ft_putptr(nb % 16);
	}
	else if (nb > 9)
		ft_putchar_fd((nb - 10 + 'a'), 1);
	else
		ft_putchar_fd((nb + '0'), 1);
}

int	ft_printptr(void *ptr)
{
	int					i;
	unsigned long long	j;

	i = 0;
	j = (unsigned long long) ptr;
	i += write(1, "0x", 2);
	if (ptr == 0)
		i += write(1, "0", 1);
	else
	{
		ft_putptr(j);
		i += ft_ptrlen(j);
	}
	return (i);
}
