#include <stdio.h>
#include <string.h>
#include <unistd.h>
 void *ft_memmove(void *restrict dest, const void *restrict source, int n);
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
int main ()
{
  char nl = '\n';
  char str1[] = "abcdefghij"; 
  char str2[] = "ABCDEFGHIJ";
  int dspot = 3;
  int sspot = 2;
  int len = 8;
  ft_putstr("str1 before memmove ");
  ft_putchar(nl);
  ft_putstr(str1);
  ft_putchar(nl);
  ft_putstr("str2 before memmove ");
  ft_putchar(nl);
  ft_putstr(str2);
  memmove (str1 + dspot, str1 + sspot , len);
  ft_memmove (str2 + dspot, str2 + sspot , len);
  ft_putchar(nl);
  ft_putstr("str1 after ft_memmove ");
  ft_putchar(nl);
  ft_putstr(str1);
  ft_putchar(nl);
  ft_putstr("str2 after memmove ");
  ft_putchar(nl);
  ft_putstr(str2);
  ft_putchar(nl);
  return 0;
}