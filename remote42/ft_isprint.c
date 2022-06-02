int ft_isprint(int c)
{
    if ((32 <= c) && (c <= 126))
        return 1;
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
    int c;
    int x;

    c = 53;
    x = ft_isprint(c);
    printf("%d", x);
    printf("\n-> test");
}
*/