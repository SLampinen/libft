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
#define size_t int 

size_t strlcat(char *dst, const char *src, size_t dstsize)
    {
        char *d;
        char *s;
        char temp[dstsize];
        int rv;

        rv = 0;
        d = dst;
        s = src;
        while (d != '\0')
        {
            d++;
            rv++;
        }
        
        while (rv < dstsize && d != '\0')
        {
            *d = *s;
            d++;
            s++;
            rv++; 
        }
        *d++ = '\0';
        rv++;
        return(rv);
    }
