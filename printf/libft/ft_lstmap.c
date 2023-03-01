/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:09:15 by agallell          #+#    #+#             */
/*   Updated: 2023/01/30 14:38:35 by agallell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*lst1;
	t_list	*lst2;

	if (lst == NULL || f == NULL)
		return (NULL);
	lst1 = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	while (lst)
	{
		lst2 = ft_lstnew((*f)(lst->content));
		if (lst2 == NULL)
		{
			ft_lstclear(&lst1, del);
			break ;
		}
		if (lst1 != NULL)
			ft_lstadd_back(&lst1, lst2);
		lst = lst->next;
	}
	return (lst1);
}
