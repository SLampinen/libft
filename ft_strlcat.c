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
int ft_strlen(char *s);
unsigned int ft_strlcat(char *dst, const char *src, unsigned int dstsize)
    {
        char *s;
        int srclen;
        unsigned int inds;
        unsigned int indd;

        inds = 0;
        indd = 0;
        s = (char *) src;
        srclen = ft_strlen((char *)src);
        if(dstsize == 0)
            return(srclen);
        while (dst[indd] && indd < dstsize)
            indd++;
        while (s[inds] && (indd + inds + 1) < dstsize)
        {
            dst[indd + inds] = s[inds];
            inds++;
        }
        if(indd < dstsize)
            dst[indd + inds] = '\0';
        return(srclen + indd);
    }
