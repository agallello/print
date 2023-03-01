/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:07:51 by agallell          #+#    #+#             */
/*   Updated: 2023/02/10 10:08:00 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[i])
		i += write(1, &s[i], 1);
	return (i);
}

int	ft_printnbr(int n)
{
	int		i;
	char	*numb;

	numb = ft_itoa(n);
	i = ft_printstr(numb);
	free(numb);
	return (i);
}

int	ft_printpercent(void)
{
	return (write(1, "%", 1));
}

int	ft_printchar(int c)
{
	return (write(1, &c, 1));
}
