/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:27:53 by slampine          #+#    #+#             */
/*   Updated: 2022/11/09 12:01:04 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*s;
	char	*rv;
	char	nd;

	nd = (char )c;
	s = (char *)str;
	rv = (char *)0;
	while (*s != nd)
	{
		if (!*s)
			return (rv);
		s++;
	}
	return (s);
}
