/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 14:38:38 by agallell          #+#    #+#             */
/*   Updated: 2023/01/30 15:43:36 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)src;
	if (!dst && !size)
		return (size);
	i = ft_strlen(dst);
	if (size <= i)
		return (size + ft_strlen(str));
	j = 0;
	while (str[j] && i < size - 1)
	{
		dst[i] = str[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (i + ft_strlen(&str[j]));
}
