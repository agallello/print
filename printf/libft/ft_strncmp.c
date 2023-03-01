/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:06:27 by agallell          #+#    #+#             */
/*   Updated: 2023/01/26 11:48:14 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t			i;
	unsigned char	*j;
	unsigned char	*k;

	j = (unsigned char *)s1;
	k = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (j[i] != k[i] || j[i] == 0 || k[i] == 0)
			return (j[i] - k[i]);
		i++;
	}
	return (0);
}
