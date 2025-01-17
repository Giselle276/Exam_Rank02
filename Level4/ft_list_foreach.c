/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-29 09:03:49 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-29 09:03:49 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list=begin_list->next;
	}

}
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list=begin_list->next;
	}
}
