/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:42:13 by slampine          #+#    #+#             */
/*   Updated: 2022/10/31 10:42:14 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.a"
int ft_strlen(char *s);
int magnet(const char *haystack, const char *needle)
{
    while (needle != '\0')
    {
        if(*haystack != *needle)
            return(0);
         haystack++;
         needle++;
    }
    return(1);
}
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
    int found;
    if(ft_strlen((char *)needle) == 0)
        return((char *)haystack);
    while (*haystack != '\0' && len > (unsigned int)ft_strlen((char *)needle))
    {
        if (*haystack == *needle)
            found = magnet(haystack, needle);
        if (found)
            return((char *)haystack);
        haystack++;
        len--;
    }
    return(0);
}