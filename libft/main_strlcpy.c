#include <stdio.h>
#include <string.h>
size_t ft_strlcpy(char *dst, char *src, size_t dstsize);

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";
    char str3[] = "Geeks";
    int n = 6;

    puts("str1 before strlcpy ");
    puts(str1);
    puts("str3 before strlcpy ");
    puts(str3);
    ft_strlcpy(str1, str2, n);
    strlcpy(str3, str2, n);

    puts("str1 after ft_strlcpy ");
    puts(str1);
    puts("str3 after strlcpy ");
    puts(str3);
    return 0;
}