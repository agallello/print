/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 09:18:57 by agallell          #+#    #+#             */
/*   Updated: 2023/01/27 14:55:24 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*str;

	str = (void *)malloc(size * count);
	if (!str || (SIZE_MAX == size && SIZE_MAX == count))
		return (NULL);
	ft_bzero(str, size * count);
	return (str);
}
