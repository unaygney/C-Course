#include <stdio.h>

int main()
{
    // int c = 23;
    // int *p;

    // p = &c;

    // printf("%d", &c);

    int *ad1, *ad2, *ad;
    int n = 10, p = 20;

    ad1 = &n;
    ad2 = &p;

    printf("Atamadan önce ad1 degeri %d \n", *ad1);
    printf("Atamadan önce ad1 pointer degeri: %d \n", ad1);

    *ad1 = *ad2 + 2;

    printf("Atamadan önce ad1 degeri %d \n", *ad1);
    printf("Atamadan önce ad1 pointer degeri: %d \n", ad1);

    return 0;
}