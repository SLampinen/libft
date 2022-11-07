/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:28:30 by slampine          #+#    #+#             */
/*   Updated: 2022/11/01 10:28:31 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
void  ft_bzero(void *str, int len);

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    if (count == 0 || size == 0)
        return(NULL);
    ptr = malloc(count * size);
    if(ptr)
        ft_bzero(ptr, count);
    return(ptr);
}