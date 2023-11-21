#include <stdio.h>

int main()
{

    //    int dizi [5] = {1,3,5,7,10};

    //     printf("Dizinin Elemanları : \n");
    //     for(int i = 0; i < 5 ; i++){
    //         printf("%d \n",dizi[i]);
    //     }

    int ogrenci_tablosu[5][8];
    int i, j; 

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%d no'lu ogrencinin", (i + 1));
            printf("%d no'lu sinavi : ", (j + 1));
            scanf("%d", &ogrenci_tablosu[i][j]);
        }
    }

    return 0;
}