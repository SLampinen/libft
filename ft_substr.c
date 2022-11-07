/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:15:50 by slampine          #+#    #+#             */
/*   Updated: 2022/11/07 12:50:58 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Fails test 2
#include <stdlib.h>
int ft_strlen(char *s);
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    unsigned int i;

    i = 0;
    if(!s)
        return(NULL);
    if((unsigned int)ft_strlen((char *)s) < start)
    {   if(!(new = malloc(1)))
            return(NULL);
        new[0] = '\0';
        return(new);
    }
    if(!(new = malloc(len + 1)))
        return(NULL);
    while (i < len)
    {
        new[i] = s[start];
        start++;
        i++;
    }
    new[i] = '\0';
    return(new);
}
