#include <stdio.h>

int totalNumber(int sayi1 , int sayi2){
    return sayi1 + sayi2;
}

int main()
{
int sayi1,sayi2;
printf("Lutfen birinci sayiyi giriniz.");
scanf("%d" , &sayi1);
printf("Lutfen ikinci sayiyi giriniz.");
scanf("%d", &sayi2);
totalNumber(sayi1 , sayi2);
printf("Sayilarin toplami %d" , totalNumber(sayi1 , sayi2));
    return 0;
}