#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ft_memcmp(const void *str1, const void *str2, size_t n);

int main(int argc, char **argv)
{
    if(argc == 1)
        return(0);
    int c = ft_memcmp(argv[1],argv[2],atoi(argv[3]));
    printf("%i\n",c);
    c = memcmp(argv[1],argv[2],atoi(argv[3]));
    printf("%i",c);
    return(0);
}