int ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

/*
#include <stdio.h>
int main(void)
{
    char *s = "Hola";
    int x;

    x = ft_strlen(s);
    printf("%d", x);
    printf("\n-> test");
}
*/