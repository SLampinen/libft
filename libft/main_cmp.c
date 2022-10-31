#include <stdio.h>
#include <stdlib.h>
int ft_strncmp(const char *str1, const char *str2, int n);

int main(int argc, char **argv)
{
    int c = ft_strncmp(argv[1],argv[2],atoi(argv[3]));
    printf("%i",c);
    return(0);
}