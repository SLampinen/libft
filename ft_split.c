/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:32:39 by slampine          #+#    #+#             */
/*   Updated: 2022/11/03 14:32:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int get_word_len(char *str, char c)
{
    int res;

    res = 0;
    while (*str == '\0' && *str != c)
    {
        str++;
        res++;
    }
    return(res);
}
char **ft_split(char const *s, char c)
{
    char **array;
    int count;
    char *temp;
    int ind;

    temp = (char *)s;
    count = 1;
    ind = 0;
    while (temp != '\0')
    {
        if (*temp == c)
            count++;
        temp++;
    }
    if(count > 1)
        if(!(array = malloc(count)))
            return(NULL);
    count = 0;
    while (*s != '\0')
    {
        if(!array[count])
            array[count] = malloc(get_word_len((char *)s, c) + 1);
        if (*s == c)
        {
            count++;
            ind = 0;
        }
        else
        {
            array[count][ind] = *s;
            ind++;
        }
        s++;
    }
    array[count + 1][0] = '\0';
    return(array);
}