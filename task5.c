#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	int revnum=0;
	while(n>0)
	{
		revnum=(revnum*10)+n%10;
		n=n/10;
	}
	printf("%d",revnum);
}
