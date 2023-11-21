/* 
iki boyutlu diziler ile ilgili uygulama 3 :
ogrenci notlari
bu ornekte sinifta bulunan 3 adet ogrenci donem boyunca 4 sinava (Kisa Sinav 1, Arasinav, Kisa Sinav 2, Final) girmistir
iki boyutlu dizide (matriste) her bir satirda ilgili ogrencinin bu 4 sinavda aldigi notlar sutunlar olarak bulunmaktadir:

                        |------------------|
                        |  75  80  62  88  |
ogrenci_tablosu[3][4] = |  80  50  72  93  |
                        |  45  50  92  68  |
                        |------------------|
                        
bu uygulamada asagidaki sekilde bir tablo ekrana yazdirilmak istenmektedir:

SINAV  OGRENCI1             OGRENCI2             OGRENCI3             OGRENCI4             MIN                     MAX
  1    Ogr1 - Sinav1 notu   Ogr2 - Sinav1 notu   Ogr3 - Sinav1 notu   Ogr4 - Sinav1 notu   1. Sinav en dusuk not   1. Sinav en yuksek not
  2    Ogr1 - Sinav2 notu   Ogr2 - Sinav2 notu   Ogr3 - Sinav2 notu   Ogr4 - Sinav2 notu   2. Sinav en dusuk not   2. Sinav en yuksek not       
  3    Ogr1 - Sinav3 notu   Ogr2 - Sinav3 notu   Ogr3 - Sinav3 notu   Ogr4 - Sinav3 notu   3. Sinav en dusuk not   3. Sinav en yuksek not    
  4    Ogr1 - Sinav4 notu   Ogr2 - Sinav4 notu   Ogr3 - Sinav4 notu   Ogr4 - Sinav4 notu   4. Sinav en dusuk not   4. Sinav en yuksek not    

ogrenci_tablosu olarak tanimlanan iki boyutlu dizi ile ekrana yazdirilmak istenen tablonun yapisi farklidir.
Dolayisiyla ogrenci_tablosu dizisinde ic ice kullanilacak for dongulerinde 
	once sinavlara ulasmak (sutun boyunca), 
	sonra sirayla ogrencilere ulasmak (satir boyunca) 
gerekmektedir.

Buna gore yapilmasi gerekenler
1) her sinavdaki en dusuk (minimum) ve en yuksek (maximum) notu tespit edip bunlari dinamik bellekte saklamak icin tam sayi iki adet dizi tanimla:

int SINAV_MIN[SINAV_NO]; 
int SINAV_MAX[SINAV_NO];

2) MIN ve MAX hesaplamak icin ic ice for dongusunu once sutunlar sonra satirlar uzerinden tanimla

                            |----------------> 1. sinav notlari
                            |   |------------> 2. sinav notlari
                            |   |   |--------> 3. sinav notlari
                            |   |   |   |----> 4. sinav notlari
                            |   |   |   |
                        |------------------|
                        |  75  80  62  88  | ---> 1. ogrenci
ogrenci_tablosu[3][4] = |  80  50  72  93  | ---> 2. ogrenci
                        |  45  50  92  68  | ---> 3. ogrenci
                        |------------------|

ilk for dongusunu sutunlar uzerinden tanimladiktan sonra o sutundaki butun satirlara ikinci for dongusu ile sirayla erisilecektir

ilk for dongusu sonrasinda min ve max ilk deger olsun, ornegin ilk dongu sutunu (1. sinav) icin bu deger 75'tir
ikinci for dongusunde ilk ogrenciyi atlayarak (yani indisi 0 yerine 1 den baslatarak) son ogrenciye kadar bir dongu olustur
eger dongudeki siradaki ogrenci notu, mevcut minimumdan daha dusukse yeni minimum o ogrenci notu olsun
eger dongudeki siradaki ogrenci notu, mevcut maximumdan daha buyukse yeni maximum o ogrenci notu olsun

3) istenilen bicimdeki tablonun ekrana yazdirilmasi

- once tablo basliklarinin print function (printf) ile ekrana yazdirilmasi
- ic ice for dongusunu once sutunlar sonra satirlar uzerinden tanimlanmasi
  * ilk for dongusu sinavlarin indisini (j) icerdigi icin bu ekrana yazdirilacak tabloda ilk sutun sinav numarasi bilgisini printf ile yazdir
  NOT: Sinav numarasi pozitif tam sayi olacaktir, yani j indis 0'dan basladigi icin 1 fazlasi olur: j+1
  * ikinci for dongusu ile ogrencilerin o sinavdaki notlarina sirayla eriserek, bu bilgileri printf ile ekrana yazdir
  * son ogrencinin notunu da yazdirdiktan sonra minimum ve maximum notlari ilgili dizi elemanina j indisi ile (o sinav icin) ulasarak onlari da yan yana yazdir
*/


#include <stdio.h>

#define OGRENCI_NO 3
#define SINAV_NO 4

int main()
{
	int i, j; // indisler
	int ogrenci_tablosu[OGRENCI_NO][SINAV_NO] = { {75, 80, 62, 88},{80, 50, 72, 93},{45, 50, 92, 68}};
	
	int SINAV_MIN[SINAV_NO];
	int SINAV_MAX[SINAV_NO];
	
	
	// her bir sinav icin minimum ve maximum hesabi yapilmasi
	for (j=0; j<SINAV_NO; j++)
	{
		SINAV_MIN[j] = ogrenci_tablosu[0][j];  // iki boyutlu dizinin o sutunun ilk satiri en dusuk deger kabul edelim
		SINAV_MAX[j] = ogrenci_tablosu[0][j];  // iki boyutlu dizinin o sutunun ilk satiri en dusuk deger kabul edelim
		for (i=1; i<OGRENCI_NO; i++)  // diger ogrenciler icin inceleme
		{
			if (ogrenci_tablosu[i][j] < SINAV_MIN[j])   // eger mevcut ogrencinin notu, kabul ettigimiz minimumdan daha dusukse yeni minimum o olsun
			{
				SINAV_MIN[j] = ogrenci_tablosu[i][j];
			}
			if (ogrenci_tablosu[i][j] > SINAV_MAX[j])  // eger mevcut ogrencinin notu, kabul ettigimiz maximumdan daha buyukse yeni maximum o olsun
			{
				SINAV_MAX[j] = ogrenci_tablosu[i][j];
			}
		}
	}
	
	
	// ogrencilerin notlarini istenilen tablo biciminde yazdirma	
	printf("%s %s %s %s %s    %s\n","SINAV","OGRENCI1","OGRENCI2","OGRENCI3", "MIN", "MAX");
	
	for (j=0; j<SINAV_NO; j++)
	{
		printf("    %d\t",j+1);
		for(i=0; i<OGRENCI_NO; i++)
		{
			printf("%d\t",ogrenci_tablosu[i][j]);
		}
		printf("   %d\t %d\n",SINAV_MIN[j], SINAV_MAX[j]);
	}
	
	return 0;
}
