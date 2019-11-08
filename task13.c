#include<stdio.h>
main()
{
	int n,i=0,large,small;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large=small=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	printf("large number is %d\n",large);
	printf("small number is %d",small);
	
}
