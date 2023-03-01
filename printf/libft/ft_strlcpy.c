/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 09:49:13 by agallell          #+#    #+#             */
/*   Updated: 2023/01/28 17:15:27 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	numb;

	numb = 0;
	count = ft_strlen(src);
	if (size != 0)
	{
		while (src[numb] != '\0' && numb < (size - 1))
		{
			dest[numb] = src[numb];
			numb++;
		}
		dest[numb] = '\0';
	}
	return (count);
}
