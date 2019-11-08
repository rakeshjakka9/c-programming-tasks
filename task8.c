#include<stdio.h>
main()
{
	int n,i=0;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d",n,i,n*i);
		printf("\n");
	}
}
