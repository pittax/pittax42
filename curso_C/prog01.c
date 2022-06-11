#include <stdio.h>

int main(void)
{
    int r, x, y;
    float rf;

    x = 20;
    y = 6;

    //r = (float)r;

    rf = x / y;
    printf("respuesta: %.1f\n", rf);

    return (0);
}


int	main1(void)
{
    char	varA;
    int		varB;
    float	varC;
    char	c;

    varA = 10;
    varB = 150;
    varC = 1.25;
    c = 'a';

    printf("el valor es: %d\n", varA);
    printf("el valor es: %d\n", varB);
    printf("el valor es: %.10f\n", varC);
    printf("c %%d: %d - c %%c: %c\n", c, c);
    return (0);
}
