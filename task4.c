#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	gets(str1);
	gets(str2);
	strcat(str1,str2);
	printf("%s",str1);
}
