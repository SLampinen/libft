/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:04:51 by slampine          #+#    #+#             */
/*   Updated: 2022/10/27 14:24:33 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define size_t int

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    char *d;
    char *s;
    size_t rv;
     
    d = dst;
    s = (char *)src;
    while(dstsize > 1)
    {
        *d = *s;
        d++;
        s++;
        dstsize--;
    }
    if (dstsize != 0)
    {
        *d = '\0';
    }
    rv = sizeof(*src);
    return(rv);
}
