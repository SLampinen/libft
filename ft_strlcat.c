/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:50:04 by slampine          #+#    #+#             */
/*   Updated: 2022/10/28 10:50:07 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define size_t unsigned int 
int ft_strlen(char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
    {
        char *d;
        char *s;
        unsigned int rv;
        int srclen;
        int dstlen;

        rv = 0;
        d = dst;
        s = (char *) src;
        srclen = ft_strlen((char *)src);
        if(dstsize == 0)
            return(srclen);
        while (d != '\0' && rv < dstsize)
        {
            d++;
            rv++;
        }
        dstlen = rv;
        while (rv < dstsize && s != '\0')
        {
            *d = *s;
            d++;
            s++;
            rv++; 
        }
        *d++ = '\0';
        return(dstlen + srclen);
    }
