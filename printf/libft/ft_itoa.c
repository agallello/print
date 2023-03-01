/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 09:45:35 by agallell          #+#    #+#             */
/*   Updated: 2023/01/30 09:37:11 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		count;
	long int	num;

	num = n;
	count = ft_count(n);
	if (n < 0)
	{
		num *= -1;
		count++;
	}
	str_num = (char *)malloc(sizeof(char) * (count + 1));
	if (!(str_num))
		return (NULL);
	*(str_num + count) = 0;
	while (count--)
	{
		*(str_num + count) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
