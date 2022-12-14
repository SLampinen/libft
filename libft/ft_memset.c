/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:16:20 by slampine          #+#    #+#             */
/*   Updated: 2022/10/25 10:16:22 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_memset(void *str, int val, int len)
{
    char *c = str;

    while(len-- > 0)
        {
            *c++ = val;
        }
    return(str);
}