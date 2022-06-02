
int jugar(int* n)
{
    int y = *n;
    y = (y + 2) / 2 + 2 - (3 * y);
    *n = y;
    printf("jugar*: %d\n", *n);
    printf("jugar: %d\n", n);
}

int main()
{
    int x = 10;
    jugar(&x);
    printf("main: %d\n\n", x);
    
    int a = 100;
    int* b = &a;
    int b2 = &a;
    int* c = b;
    int* c2 = b2;
    int d = *c;
    //int d2 = *c2;

    printf("a: %d\n", a);
    printf("*b: %d\n", b);
    printf("b2: %d\n", b2);
    printf("*c: %d\n", c);
    printf("*c2: %d\n", c2);
    printf("d: %d\n", d);
    //printf("d2: %d\n", d2);

    printf("\n");

    int i = 42;
    printf("i: %d\n", i);
    int* j = &i;
    *j = 84;
    printf("i: %d\n", i);

    return 0;
}