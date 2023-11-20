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

    isOdd(5);

    return 0;
}