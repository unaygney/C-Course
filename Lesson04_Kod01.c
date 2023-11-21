/* 
uygulama 1 : 

[preincrement] ön artım (++degisken) 
[predecrement] ön azaltım (++degisken) 
[postincrement] son artım (degisken++)
[postdecrement] son azaltım (degisken--)

kullanımı
*/



#include<stdio.h>

int main()
{
	int a, b, c, d, i;  //declaration - deklarasyon
	i = 4;  // i degiskenine 4 degeri atandi
	//alternatif kullanim (deklarasyon + atama): int a, b, c, d, i=4; 
	
	printf("Baslarken Degerler\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	printf("i = %d\n",i);
	
	printf("\n");
	
	printf("a=i++ sonucu\n");
	a = i++; // son artim : once ata sonra artir
	printf("a = %d\n",a);  // a degiskeni 4 olur
	printf("i = %d\n",i);  // i degiskeni 5 olur
	
	printf("\n");
	
	printf("b=i-- sonucu\n");
	b = i--; // son azaltim : once ata sonra azalt
	printf("b = %d\n",b);  // b degiskeni 5 olur
	printf("i = %d\n",i);  // i degiskeni 4 olur	
	 
	printf("\n");
	
	printf("c=++i sonucu\n");
	c = ++i; // on artim : once artir sonra ata
	printf("c = %d\n",c);  // c degiskeni 5 olur
	printf("i = %d\n",i);  // i degiskeni 5 olur
	
	printf("\n");
	
	printf("d=--i sonucu\n");
	d = --i; // on azaltim : once azalt sonra ata
	printf("d = %d\n",d);   // d degiskeni 4 olur
	printf("i = %d\n",i);	// i degiskeni 4 olur
	
	return 0;
}
