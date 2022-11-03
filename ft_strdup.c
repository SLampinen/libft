/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:38:41 by slampine          #+#    #+#             */
/*   Updated: 2022/11/01 10:38:42 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *strdup(const char *str)
{
    char *ptr;

    ptr = malloc(sizeof(str));
    while (str != '\0')
    {
        *ptr = *str;
        ptr++;
        str++;
    }
    return(ptr);
}