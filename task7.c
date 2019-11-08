#include<stdio.h>
#include<string.h>
main()
{
	char s[100];
	gets(s);
	int l=0,h=strlen(s)-1;
	while(h>l)
	{
		if(s[l++]!=s[h--])
		{
			printf("s is not a palindrome\n");
			break;
		}
		else
		printf("s is a palindrome");
	}
	
}
