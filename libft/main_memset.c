#include <stdio.h>
#include <string.h>
void *ft_memset(void *str, int val, int len);

int main(void)
{
char text[] = "Testtext that will be changed later";
char newtext[] = "Testtext that will be changed later";

puts(text);
memset(text, '?', 6);
puts(text);

puts(newtext);
ft_memset(newtext, '?', 6);
puts(newtext);
}