/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:34:46 by slampine          #+#    #+#             */
/*   Updated: 2022/10/28 12:34:48 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define size_t unsigned int

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned int max;
    unsigned char *s;
    unsigned char *d;

    max = 0;
    s = (unsigned char *) str1;
    d = (unsigned char *) str2;
    if (n == 0)
    return(0);
    
    while (*s == *d && max < (n - 1))
    {
        s++;
        d++;
        max++;
    }
    return(*s - *d);
}
