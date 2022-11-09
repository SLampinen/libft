#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;
	unsigned int	sl;

	i = 0;
	sl = (unsigned int)ft_strlen((char *)s);
	if (!s)
		return (NULL);
	if (sl < start)
	{
		new = malloc(1);
		new[0] = '\0';
		return (new);
	}
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	while (i < len && s[start] != '\0' && start < sl)
	{
		new[i] = s[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}