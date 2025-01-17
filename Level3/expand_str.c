/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-14 12:12:56 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-14 12:12:56 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main (int argc, char *argv[])
{
	int	i;
	int	flag;
	char	*str;

	i = 0;
	flag = 0;
	str = argv[1];
	if (argc == 2)
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
				flag = 1;
			else
			{
				if (flag)
					write (1, "   ",3);
				flag = 0;
				write (1, &str[i], 1);
			}
			i++;
		}
	}
	write (1,"\n",1);
	return (0);
}
