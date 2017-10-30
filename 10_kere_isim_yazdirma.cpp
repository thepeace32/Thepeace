#include <stdio.h>
#include <conio.h>
main()
{
	//Klavyeden girilen isminizi 10 defa yazdýran bir c programý//
	char kelime[20];
	printf("bir kelime giriniz : ");
	scanf("%s",kelime);
	
	for(int i = 0;i<10;i++)
	{
		printf(" \n %s ",kelime);
	}
	getch();
}
