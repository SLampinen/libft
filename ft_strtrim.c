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
int ft_strlen(char *s);
int is_in_set(char c, char *set)
{
    int i;

    i = 0;
    while (!set)
    {
        if(c == set[i])
            return(1);
        i++;
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
    if(!s1 || !set)
        return(NULL);
    while(s1[start] && is_in_set(s1[start], (char *)set))
        start++;
    while(end > start && is_in_set(s1[end - 1], (char *) set))
        end--;
    str = malloc(end - start + 1);
    if(str == NULL)
        return(NULL);
    while (start < end)
    {
        str[i] = s1[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return(str);
}