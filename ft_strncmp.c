/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:58:12 by slampine          #+#    #+#             */
/*   Updated: 2022/10/26 14:37:04 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, unsigned int n)
{
    unsigned int max;

    max = 1;
    if (n == 0)
        return(0);
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0' && max < n)
    {
        str1++;
        str2++;
        max++;
    }
    if (*str1 > *str2)
        return(1);
    if (*str1 < *str2)
        return(-1);
    return(0);
}
