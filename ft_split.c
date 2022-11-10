/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slampine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 14:32:39 by slampine          #+#    #+#             */
/*   Updated: 2022/11/10 12:22:31 by slampine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*dupl_word(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static int	count_words(char *str, char c)
{
	int	res;
	int	i;

	i = 1;
	res = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c && !(str[i + 1] == c || str[1] == '\0'))
			res++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		wordnum;
	int		indstr;
	int		iend;

	indstr = -1;
	iend = 0;
	wordnum = 0;
	array = malloc((count_words((char *)s, c) + 1) * sizeof(char *));
	if (!s || !array)
		return (0);
	while (iend <= ft_strlen((char *)s))
	{
		if (s[iend] != c && indstr == -1)
			indstr = iend;
		else if ((s[iend] == c || iend == ft_strlen((char *)s)) && indstr >= 0)
		{
			array[wordnum++] = dupl_word(s, indstr, iend);
			indstr = -1;
		}
		iend++;
	}
	array[wordnum] = 0;
	return (array);
}
