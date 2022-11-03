/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:31:12 by slampine          #+#    #+#             */
/*   Updated: 2022/11/02 15:31:14 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char *ft_itoa(int n)
{
    char str[33];
    int sign;
    int index;
    int iend;
    char temp;
    
    sign = 1;
    index = 33;
    iend = 33;
    if(n < 0)
        sign = -1;
    while(n != 0)
    {
        str[index] = (n % 10 - '0');
        index--;
        n = (n - (n % 10)) / 10;
    }
    index = 0;
    if(sign == -1)
        index = 1;
    while(index < iend)
    {
        temp = str[index];
        str[index] = str[iend];
        str[iend] = temp;
        index++;
        iend--;
    }
    return(str);
}*/