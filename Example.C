#include <stdio.h>

int main()
{

    int x;
    int y;
    int z;

    printf("Lutfen ilk sayiyi giriniz.\n");
    scanf("%d", &x);

    printf("Lutfen ilk sayiyi giriniz.\n");
    scanf("%d", &y);

    printf("Lutfen ilk sayiyi giriniz.\n");
    scanf("%d", &z);

    if ((x > y && x > z))
    {
        printf("%d", x);
    }
    else if (y > x && y > z)
    {
        printf("%d", y);
    }
    else
    {
        printf("%d", z)
    }

    return 0;
}