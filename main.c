#include "libft.h"
#include <string.h>
#include <stdio.h>
int main(void)
{
   int i =0;
   char **array = ft_split("text1that1has1no11spaces", '1');
   while(i < 7 && **array != '\0')
   {
      printf("%s ",array[i]);
      i++;
   }
   printf("\n");
}