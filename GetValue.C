#include <stdio.h>

int main()
{
    int ilksayim;
    float ikincisayim;
    char basharf;

    printf("Lütfen ilk sayiyi giriniz\n");
    scanf("%d", &ilksayim);

    printf("Lütfen Ikinci sayiyi giriniz.");
    scanf("%f", &ikincisayim);

    printf("Lütfen Isminizin bas harfini giriniz.");
    scanf(" %c", &basharf);

    printf("Ilk Sayi : %d Ikinci Sayi : %f Isminizin Bas Harfi : %c", ilksayim, ikincisayim, basharf);

    return 0;
}