/* 
uygulama 2 : 

ön artım (++degisken) ve son artım (degisken++)

üzerine aritmetik işlemler örneği
*/


#include <stdio.h>

int main()
{
	int a,b,c,d;
	int i=3,j=7;

	printf("Baslarken Degerler\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	printf("i = %d\n",i);
	printf("j = %d\n",j);
	
	printf("\n");
	
	a = (i++)*(j++);
	// i degiskeni islemde 3 olarak kullanilacak, sonra 1 artacak 4 olacak (son artim)
	// j degiskeni islemde 7 olarak kullanilacak, sonra 1 artacak 8 olacak (son artim)
	// a degiskenine atama yapilacak deger : i'nin 3 ve j'nin 7 degeri carpimi 21 olur
	
	printf("a=(i++)*(j++) sonucu\n");
	printf("a = %d\n",a);  // a degiskeni 21 olur
	printf("i = %d\n",i);  // i degiskeni 4 olur
	printf("j = %d\n",j);  // j degiskeni 8 olur
	
	printf("\n");
	
	b = (++i)*(++j);
	// i degiskeni once 1 artacak 5 olacak, sonra islemde 5 olarak kullanilacak (on artim)
	// j degiskeni once 1 artacak 9 olacak, sonra islemde 9 olarak kullanilacak (on artim)
	// b degiskenine atama yapilacak deger : i'nin 5 ve j'nin 9 degeri carpimi 45 olur
		
	printf("b = (++i)*(++j) sonucu\n");
	printf("b = %d\n",b);  // b degiskeni 45 olur
	printf("i = %d\n",i);  // i degiskeni 5 olur
	printf("j = %d\n",j);  // j degiskeni 9 olur
	
	printf("\n");

	c = (++i)*(j++);
	// i degiskeni once 1 artacak 6 olacak, sonra islemde 6 olarak kullanilacak (on artim)
	// j degiskeni islemde 9 olarak kullanilacak, sonra 1 artacak 10 olacak (son artim)
	// c degiskenine atama yapilacak deger : i'nin 6 ve j'nin 9 degeri carpimi 54 olur
		
	printf("c = (++i)*(j++) sonucu\n");
	printf("c = %d\n",c);  // c degiskeni 54 olur
	printf("i = %d\n",i);  // i degiskeni 6 olur
	printf("j = %d\n",j);  // j degiskeni 10 olur
	
	printf("\n");	
	
	d = (i++)*(++j);
	// i degiskeni islemde 6 olarak kullanilacak, sonra 1 artacak 7 olacak (son artim)
	// j degiskeni once 1 artacak 11 olacak, sonra islemde 11 olarak kullanilacak (on artim)
	// d degiskenine atama yapilacak deger : i'nin 6 ve j'nin 11 degeri carpimi 66 olur	
	
	printf("d = (i++)*(++j) sonucu\n");
	printf("d = %d\n",d);  // d degiskeni 66 olur
	printf("i = %d\n",i);  // i degiskeni 7 olur
	printf("j = %d\n",j);  // j degiskeni 11 olur
		
	return 0;
}
