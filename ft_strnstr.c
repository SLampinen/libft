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
int magnet(char *haystack, char *needle)
{
    while (*needle != '\0')
    {
        if(*haystack != *needle)
            return(0);
        needle++;
    }
    return(1);
}
char *ft_strnstr(const char *haystack, const char *needle, unsigned int num)
{
    int indhs;
    char *hs;
    char *nd;
    unsigned int nlen;

    indhs = 0;
    hs = (char *)haystack;
    nd = (char *)needle;
    nlen = (unsigned int)ft_strlen((char *)needle);
    if(ft_strlen((char *)needle) == 0)
        return((char *)haystack);
    while (*hs != '\0' && num >= nlen)
    {
        if (*hs == nd[0])
            if (magnet(hs, nd))
                return((char *)hs);
        hs++;
        num--;
    }
    return(0);
}