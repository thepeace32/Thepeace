#include <stdio.h>
#include <conio.h>
main()
{
	//Klavyeden girilen iki notun ortalamasýný bulan bir c programý - vize%40 final%60 olarak //
	int vize,final,toplam=0;
	printf("vize notunu giriniz = ");
	scanf("%d",&vize);
	printf("final notunu giriniz = ");
	scanf("%d",&final);
	toplam = vize*0.4 + final*0.6;
	printf("ortalama notunuz = %d",toplam);
	getch();
	
}
