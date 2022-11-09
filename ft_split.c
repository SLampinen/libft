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

#include "libft.h"
void  array_zero(char **str, int len)
{
    char **c = str;

    while(len-- > 0)
        {
            *c = 0;
            c++;
        }
}
int get_word_len(char *str, int i, char c)
{
    int res;

    res = 0;
    while (str[i] != '\0' && str[i] != c)
    {
        i++;
        res++;
    }
    return(res);
}
char **ft_split(char const *s, char c)
{
    char **array;
    char *temp;
    char *src;
    int count;
    int ind;

    temp = (char *)s;
    src = (char *)s;
    count = 1;
    ind = 0;
    if(!s)
        return(NULL);
    while (*temp != '\0')
    {
        if(*temp == c)
            count++;
        temp++;
    }
    array = ft_calloc(count + 1, sizeof(char *));
    if(!array)
        return(NULL);
    array_zero(array, count + 1);
    count = 0;
    array[count] = ft_substr(src, ind, get_word_len(src, ind, c));
    count++;
    while (src[ind] != '\0')
    {
        if (src[ind] == c)
        {
            array[count] = ft_substr(src, ind, get_word_len(src, ind, c));
            count++;
        }
        ind++;
    }
    return(array);
}