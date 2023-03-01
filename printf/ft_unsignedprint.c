/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedprint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:07:19 by agallell          #+#    #+#             */
/*   Updated: 2023/02/10 10:07:26 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_getunsigned(unsigned int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static char	*ft_getitoa_unsigned(unsigned int nb)
{
	char	*str;
	int		i;

	str = NULL;
	i = ft_getunsigned(nb);
	str = malloc (sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	while (nb > 0)
	{
		str[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

int	ft_unsignedprint(unsigned int n)
{
	int		len;
	char	*numb;

	if (n == 0)
		return (write(1, "0", 1));
	numb = ft_getitoa_unsigned(n);
	len = ft_printstr(numb);
	free(numb);
	return (len);
}
