#include <stdio.h>
#include <conio.h>
main()
{
	int bos=1,ilk=1,son=7;
	for(int i=0;i<4;i++)
	{
		for(int b=0;b<bos;b++)
		printf(" ");
		for(int k = ilk;k<=son;k++)
		printf("%d",k);
		printf("\n");
		ilk+=1;
		son-=1;
		bos+=1;
	}
	bos=1,ilk=7,son=1;
		for(int i=0;i<4;i++)
	{
		for(int b=0;b<bos;b++)
		printf(" ");
		for(int k = ilk;k>=son;k--)
		printf("%d",k);
		printf("\n");
		ilk-=1;
		son+=1;
		bos+=1;
	}
}
