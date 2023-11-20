#include <stdio.h>

void isOdd(int sayi)
{
    if (sayi % 2 == 0)
    {
        printf("%d çifttir.", sayi);
    }
    else
    {
        printf("%d tektir", sayi);
    }
}

int main()
{

    int i;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d", &i);

    isOdd(i);

    return 0;
}