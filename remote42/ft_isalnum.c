int ft_alnum(int c)
{
    if ((48 <= c) && (c <= 57) ||
    (65 <= c) && (c <= 90) ||
    (97 <= c) && (c <= 121))
        return 1;
    return 0;
}

/*
#include <stdio.h>
int main(void)
{
    int c;
    int x;

    c = 86;
    x = ft_alnum(c);
    printf("%d", x);
}
*/
