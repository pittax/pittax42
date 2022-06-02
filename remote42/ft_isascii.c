int ft_isascii(int c)
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
    x = ft_isascii(c);
    printf("%d", x);
}
*/