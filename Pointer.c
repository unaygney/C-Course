#include <stdio.h>

int main()
{
    int can = 10;
    int *p;

    p = &can;

    printf("%d", p);

    return 0;
    
}