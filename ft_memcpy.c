/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:43:29 by slampine          #+#    #+#             */
/*   Updated: 2022/10/26 14:36:56 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *source, int n)
    {
        unsigned char *d;
        unsigned char *s;

        d = dest;
        s = (unsigned char *) source;
        while(n--)
        {
            *d = *s;
            d++;
            s++;
        }
        return (dest);
    }
