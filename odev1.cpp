#include <stdio.h>
#include <conio.h>
main()
{
	int adet=7,bos=2,ilk=3;
	for(int i =0;i<6;i++)
	{
		for(int k=adet;k>=1;k--)
		printf("%d",k);
		for(int b=0;b<bos;b++)
		printf(" ");
		for(int g=ilk;g<=9;g++)
		printf("%d",g);
		
		
		printf("\n");
		adet-=1;
		bos+=2;
		ilk+=1;
	}
	getch();
}
