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
    unsigned int sl;

    i = 0;
    sl = (unsigned int)ft_strlen((char *)s);
    if(!s)
        return(NULL);
    if(sl < start)
    {   if(!(new = malloc(1)))
            return(NULL);
        new[0] = '\0';
        return(new);
    }
    if(!(new = malloc(len + 1)))
        return(NULL);
    while (i < len && s[start] != '\0' && start < sl)
    {
        new[i] = s[start];
        start++;
        i++;
    }
    new[i] = '\0';
    return(new);
}
