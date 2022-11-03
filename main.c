#include <stdio.h>
#include <stdlib.h>
//#include "libft.h"
#include <ctype.h>
#include <string.h>
int ft_strlen(char *s);
char *ft_strnstr(const char *haystack, const char *needle, unsigned int len);
int main(int argc, char **argv)
{
    if (argc == 1)
        return(0);
    char *ptr1 = ft_strnstr(argv[1],argv[2],atoi(argv[3]));
    printf("%s\n", ptr1);
    char *ptr2 = strnstr(argv[1],argv[2],atoi(argv[3]));
    printf("%s\n", ptr2);
    return(0);
}