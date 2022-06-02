int ft_isdigit(int c)
{
    if ((48 <= c) && (c <= 57))
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
    x = ft_isdigit(c);
    printf("%d", x);
}
*/