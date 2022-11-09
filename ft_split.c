#include "libft.h"
int get_word_len(char *str, int i, char c)
{
    int res;

    res = 0;
    while (str[i] != '\0' && str[i] != c)
    {
        i++;
        res++;
    }
    return(res);
}
char **ft_split(char const *s, char c)
{
    char **array;
    char *temp;
    char *src;
    int count;
    int ind;

    temp = (char *)s;
    src = (char *)s;
    count = 1;
    ind = 0;
    if(!s)
        return(NULL);
    while (*temp != '\0')
    {
        if(*temp == c)
            count++;
        temp++;
    }
	array = ft_calloc(count + 1, sizeof(char *));
    if(!array)
        return(NULL);
    count = 0;
	while (*src == c)
		src++;
	array[count] = ft_substr(src, ind, get_word_len(src, ind, c));
	count++;
    while (src[ind] != '\0')
    {
        if (src[ind] == c && src[ind + 1] != c)
        {
			ind++;
            array[count] = ft_substr(src, ind, get_word_len(src, ind, c));
            count++;
        }
        ind++;
    }
    return(array);
}