/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaccha- <gmaccha-@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-15 13:06:07 by gmaccha-          #+#    #+#             */
/*   Updated: 2024-11-15 13:06:07 by gmaccha-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int result = 0;
    int digit = 0;
    int i = 0;
    if (str_base < 2 || str_base > 16)
        return 0;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'z')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            digit = str[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        result = result * str_base + digit;
        i++;
    }
    return (result * sign);
}
