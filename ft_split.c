/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:32:39 by slampine          #+#    #+#             */
/*   Updated: 2022/11/03 14:32:41 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*char **ft_split(char const *s, char c)
{
    char **array;
    int count;
    char *temp;
    int ind;

    temp = s;
    count = 1;
    ind = 0;
    while (temp != '\0')
    {
        if (temp == c)
            count++;
        temp++;
    }
    if(count > 1)
        array = malloc(sizeof(char *) * count);
    count = 0;
    while (s != '\0')
    {
        if (s == c)
        {
            count++;
            ind = 0;
        }
        else
        {
            array[count][ind] = s;
            ind++;
        }
        s++;
    }
    array[count + 1][0] = '\0';
    return(array);
}*/