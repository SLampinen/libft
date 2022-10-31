#include <stdio.h>
#include <string.h>
 void *ft_memcpy(void *restrict dest, const void *restrict source, int n);

int main ()
{
  char str1[] = "Geeks"; 
  char str2[] = "Quiz"; 
  char str3[] = "Geeks"; 
  
  puts("str1 before memcpy ");
  puts(str1);
  puts("str3 before memcpy ");
  puts(str3);
  ft_memcpy (str1, str2, sizeof(str2));
  memcpy (str3, str2, sizeof(str2));
 
  puts("\nstr1 after ft_memcpy ");
  puts(str1);
  puts("\nstr3 after memcpy ");
  puts(str3);
  return 0;
}