#include <stdio.h>
#include <string.h>
void ft_bzero(void *str, int len);

int main(void)
{
char text[] = "Testtext that will be changed later";
char newtext[] = "Testtext that will be changed later";

puts(text);
bzero(text, 2);
puts(text);

puts(newtext);
ft_bzero(newtext, 2);
puts(newtext);
}