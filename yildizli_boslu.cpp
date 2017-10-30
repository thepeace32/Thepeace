#include <stdio.h>
#include <conio.h>
main()
{
	int bos=1,adet=9;
	for(int i = 0;i<5;i++)
	{
		for(int b =0; b<bos;b++)
		printf(" ");
		for( int k =0;k<adet;k++)
		printf("*");
		adet-=2;
		bos+=1;
		
		printf("\n");
	}
	
	//////////////////////////
	adet=1,bos=5;
		for(int i = 0;i<5;i++)
	{
		for(int b =0; b<bos;b++)
		printf(" ");
		for( int k =0;k<adet;k++)
		printf("*");
		adet+=2;
		bos-=1;
		
		printf("\n");
	}
	getch();
}
