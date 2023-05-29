#include<stdio.h>
#include<string.h>

main()
{
	char a[100],b[100];
	
	printf("enter username =");
	gets(a);
	printf("enter password =");
	gets(b);

	if(strcmp(a,"amisha")==0)
	{
		if(strcmp(b,"amisha@7878")==0)
		{
			printf("user successfully logging...");
	    }
	    else
	    {
	    	printf("password entered is invaild.");
		}
	}
	else
	{
			printf("username entered is invaild.");
	}
}

