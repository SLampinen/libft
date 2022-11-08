/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:16:34 by slampine          #+#    #+#             */
/*   Updated: 2022/11/02 14:16:36 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
int is_in_set(char c, char *set)
{
    while (*set != '\0')
    {
        if(c == *set)
            return(1);
        set++;
    }
    return(0);
}
char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int start;
    int end;
    int i;

    i = 0;
    start = 0;
    end = ft_strlen((char *)s1);
    if(!s1)
        return(NULL);
    while(s1[start] != '\0' && is_in_set(s1[start], (char *)set))
        start++;
    while(end > start && is_in_set(s1[end - 1], (char *) set))
        end--;
    str = malloc(end - start + 1);
    if(str == NULL)
        return(NULL);
    while (start < end)
        str[i++] = s1[start++];
    str[i] = '\0';
    return(str);
}