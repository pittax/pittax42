#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    char    *p;

    p = (char *)b;
    while (len > 0)
    {
        p[len - 1] = c;
        len--;
    }
    return b;
}



int main(void)
{
    char str[] = "Hola planeta tierra";
    printf("str: %s\n", str);

    int c = 49;
    size_t len = 3;
    char *str2;

    str2 = ft_memset(str, c, len);
    printf("str2: %s\n", str2);

    return 0;
}
