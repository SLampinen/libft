#include <stdio.h>
void *ft_memchr(const void *str, int c, int n);

int main(int argc, char **argv)
{
    char *str = argv[1];
    int f = argv[2][0];
    ft_memchr(*str, f, sizeof(f));
return(0);
}