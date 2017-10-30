#include <stdio.h>
#include <conio.h>
main()
{
	int sayi=0,f=1;
	printf("bir sayi giriniz = ");
	scanf("%d",&sayi);
	for(int i =sayi;i>=1;i--)
   f*=i;
   printf("girmis oldugunuz sayinin fonksiyon = %d",f);
	
	getch();
}
