/* 
uygulama 3 : 

print function bicimlendirmeli yazdirma

                                   (conversion specifier)
                         |-------> donusum tanimlayicisi
                         | 
                    % m.pX
                      | | 
minimum alan  <-------| |-------> hassasiyet
 genisligi                        (precision)
(minimum area field)               

minimum alan genisligi: siyah ekrana yazdirilacak olan veri icin ayrilan asgari kutucuk sayisi
hassasiyet: ondalikli ifadeler icin ayrilacak ondalik kisim
donusum tanimlayicisi: print function icerisindeki bicim ifadesi icinde bulunan, yazdirilacak verinin tipini belirten kisim
  %d ==> int
  %c ==> char
  %f ==> float
  %s ==> string

*/


#include <stdio.h>

int main()
{
	int x = 123;
	float y = 12.3456789; // tam kisim 2 basamak, ondalik kisim 7 basamak 
	float z = 5.13;       // tam kisim 1 basamak, ondalik kisim 2 basamak
	
	// ornek 1 : minimum alan genisligi basinda isaret olmama ve eksi olma durumu (int)
	printf("ornek 1: \n");
	printf("%c%c%c%c%c\n",31,31,31,31,31);  // ASCII standartlarinda char 31 : Unit Separator (ters ucgen ?)
	printf("%4d\n",x);      // 4 kutucuk alan ayirarak int degisken x i saga dogru 123 seklinde yazar
	printf("%-4d\n",x);     // 4 kutucuk alan ayirarak int degisken x i sola dogru 123 seklinde yazar
	printf("%c%c%c%c%c\n",30,30,30,30,30);  // ASCII standartlarinda char 30 : Record Separator (duz ucgen ?)
	
	// ornek 2 : minimum alan genisligi onunde 0 olma durumu
	printf("ornek 2: \n");
	printf("%c%c%c%c%c%c%c%c%c%c\n",31,31,31,31,31,31,31,31,31,31);
	printf("%04d\n",x);  // 4 kutucuk alan ayir, x i saga dogru 123 seklinde yaz, soldan itibaren bos kalan kutucuklara 0 yaz : 0123 
	printf("%05d\n",x);  // 5 kutucuk alan ayir, x i saga dogru 123 seklinde yaz, soldan itibaren bos kalan kutucuklara 0 yaz : 00123
	printf("%06d\n",x);  // 6 kutucuk alan ayir, x i saga dogru 123 seklinde yaz, soldan itibaren bos kalan kutucuklara 0 yaz : 000123
	printf("%07d\n",x);  // 7 kutucuk alan ayir, x i saga dogru 123 seklinde yaz, soldan itibaren bos kalan kutucuklara 0 yaz : 0000123
	printf("%c%c%c%c%c%c%c%c%c%c\n",30,30,30,30,30,30,30,30,30,30);
	
	// ornek 3 : minimum alan genisligi basinda isaret olmama ve eksi olma durumu (string)
	printf("ornek 3: \n");
	printf("%c%c%c%c%c%c%c%c%c%c\n",31,31,31,31,31,31,31,31,31,31);
	printf("%5s\n","ISU");	     // 5 kutucuk alan ayir, saga dogru ISU seklinde yaz
	printf("%-5s\n","ISU");      // 5 kutucuk alan ayir, sola dogru ISU seklinde yaz
	printf("%10s\n", "ISU C");   // 10 kutucuk alan ayir, saga dogru ISU C seklinde yaz
	printf("%-10s\n", "ISU C");  // 10 kutucuk alan ayir, sola dogru ISU C seklinde yaz
	printf("%c%c%c%c%c%c%c%c%c%c\n",30,30,30,30,30,30,30,30,30,30);

	// ornek 4 : iki ayri string sola yasli veya saga yasli sekilde 4 olasi durum inceleme
	printf("ornek 4: \n");
	printf("%c%c%c%c%c%c%c%c%c%c\n",31,31,31,31,31,31,31,31,31,31);
	printf("%5s%5s\n","ISU","C");    // ilk 5 kutucukta saga dayali ISU yaz, ikinci 5 kutucukta saga dayali C yaz
	printf("%-5s%-5s\n","ISU","C");  // ilk 5 kutucukta sola dayali ISU yaz, ikinci 5 kutucukta sola dayali C yaz
	printf("%-5s%5s\n","ISU","C");   // ilk 5 kutucukta sola dayali ISU yaz, ikinci 5 kutucukta saga dayali C yaz
	printf("%5s%-5s\n","ISU","C");   // ilk 5 kutucukta saga dayali ISU yaz, ikinci 5 kutucukta sola dayali C yaz
	printf("%c%c%c%c%c%c%c%c%c%c\n",30,30,30,30,30,30,30,30,30,30);

	// ornek 5 : tam kismi 2 haneli, ondalik kismi 7 haneli olan y degiskeni yazdirma
	// DIKKAT ! : sayi basindaki +/- isaretleri ve ondalik ayiraci (.) isareti de bir kutucuk kaplar 
	printf("ornek 5 (12.3456789): \n");
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31);
	printf("%f\n",y);      // minimum alan belirtilmedigi icin sola yasli yazdirir, hassasiyet belirtilmedigi icin ondalikta 6 hane alip yuvarlama yapar: 12.345679 
	printf("%10.3f\n",y);  // minimum 10 kutucuk alanda, 3 ondalik hassasiyette (+yuvarlama) saga yasli sekilde degiskeni yazdir: 12.346
	printf("%10.4f\n",y);  // minimum 10 kutucuk alanda, 4 ondalik hassasiyette (+yuvarlama) saga yasli sekilde degiskeni yazdir: 12.3457
	printf("%10.5f\n",y);  // minimum 10 kutucuk alanda, 5 ondalik hassasiyette (+yuvarlama) saga yasli sekilde degiskeni yazdir: 12.34568 	
	printf("%-10.3f\n",y); // minimum 10 kutucuk alanda, 3 ondalik hassasiyette (+yuvarlama) sola yasli sekilde degiskeni yazdir: 12.346
	printf("%-10.4f\n",y); // minimum 10 kutucuk alanda, 4 ondalik hassasiyette (+yuvarlama) sola yasli sekilde degiskeni yazdir: 12.3457
	printf("%-10.5f\n",y); // minimum 10 kutucuk alanda, 5 ondalik hassasiyette (+yuvarlama) sola yasli sekilde degiskeni yazdir: 12.34568 
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30);

	// ornek 6 : tam kismi 1 haneli, ondalik kismi 2 haneli olan z degiskeni yazdirma
	printf("ornek 6 (5.13): \n");
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31,31);
	printf("%f\n",z);      // minimum alan belirtilmedigi icin sola yasli yazdirir, hassasiyet belirtilmedigi icin ondalikta 6 hane alir, olmayan ondaliklar icin 0 yazar: 5.130000 
	printf("%05.2f\n",z);  // minimum 5 kutucuk alanda, 2 ondalik hassasiyette saga yasli sekilde degiskeni yazdir, tam kisimda solda bos kutucuk kalirsa 0 yaz: 05.13
	printf("%06.2f\n",z);  // minimum 6 kutucuk alanda, 2 ondalik hassasiyette saga yasli sekilde degiskeni yazdir, tam kisimda solda bos kutucuk kalirsa 0 yaz: 005.13
	printf("%07.2f\n",z);  // minimum 7 kutucuk alanda, 2 ondalik hassasiyette saga yasli sekilde degiskeni yazdir, tam kisimda solda bos kutucuk kalirsa 0 yaz: 0005.13
	printf("%06.3f\n",z);  // minimum 6 kutucuk alanda, 3 ondalik hassasiyette saga yasli sekilde degiskeni yazdir (olmayan ondaliklar icin 0 yaz), tam kisimda solda bos kutucuk kalirsa 0 yaz: 05.130
	printf("%07.4f\n",z);  // minimum 7 kutucuk alanda, 4 ondalik hassasiyette saga yasli sekilde degiskeni yazdir (olmayan ondaliklar icin 0 yaz), tam kisimda solda bos kutucuk kalirsa 0 yaz: 05.1300
	printf("%08.5f\n",z);  // minimum 8 kutucuk alanda, 5 ondalik hassasiyette saga yasli sekilde degiskeni yazdir (olmayan ondaliklar icin 0 yaz), tam kisimda solda bos kutucuk kalirsa 0 yaz: 05.13000
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30,30);


	return 0;
}
