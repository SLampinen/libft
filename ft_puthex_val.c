/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_val.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 10:16:17 by slampine          #+#    #+#             */
/*   Updated: 2022/12/12 10:47:48 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_puthex_val(int n, int caps)
{
	int				ret;
	int				rem;
	unsigned int	abs;

	rem = 0;
	ret = 0;
	abs = n;
	if (n < 0)
		abs = UINT_MAX + n + 1;
	if (abs >= 16)
	{
		ret += ft_puthex_val(abs / 16, caps);
		ret += ft_puthex_val(abs % 16, caps);
	}
	else if (abs > 9)
	{
		if (caps)
			ret += ft_putchar_val(abs + '7');
		else
			ret += ft_putchar_val(abs + 'W');
	}
	else
		ret += ft_putchar_val(abs + '0');
	return (ret);
}
