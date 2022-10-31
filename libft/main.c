#include <unistd.h>
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_strlen(char *s);
int ft_toupper(int c);
int ft_tolower(int c);

int main(int argc, char **argv)
{
    int c = argv[1][0];
    char *str = argv[2];
    int len = ft_strlen(str);
    if(ft_isalpha(c))
        write(1,"Is alpha\n",9);
    if(ft_isdigit(c))
        write(1,"Is digit\n",9);
    if(ft_isalnum(c))
        write(1,"Is alnum\n",9);
    if(ft_isascii(c))
        write(1,"Is ascii\n",9);
    if(ft_isprint(c))
        write(1,"Is print\n",9);
    if(len > 0)
        write(1,"Strlen is \n",11);
    int d = ft_toupper(c);    
    write(1,&d,1);
    write(1,"\n",1);
    d = ft_tolower(c);
    write(1,&d,1);
    write(1,"\n",1);
    return(0);
}
