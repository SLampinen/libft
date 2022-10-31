#include <stdio.h>
char *ft_strchr(char str, int c);
char *ft_strrchr(char str, int c);

int main(int argc, char **argv)
{
    char *str = argv[1];
    int f = argv[2][0];
    ft_strchr(*str, f);
    ft_strrchr(*str, f);
return(0);
}