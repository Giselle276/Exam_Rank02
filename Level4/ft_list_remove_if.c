/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-29 09:05:50 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-29 09:05:50 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if(begin_list==NULL || *begin_list==NULL)
		return;
	t_list *cur=*begin_list;

	if(cmp(cur->data,data_ref)==0)
	{
		*begin_list=cur->next;
		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	else
	{
		cur=*begin_list;
		ft_list_remove_if(&cur->next, data_ref,cmp);
	}
}
