#include<stdio.h>

main(){
	
	char c;
	
	printf("Enter Any Character: ");
	scanf("%c",&c);
	
	if((c>='a' && c <= 'z') || (c >='A' && c <= 'Z'))
	{
		printf("'%c' is alphabet.",c);
	}
	else if(c >= '0' && c <= '9')
	{
		printf("'%c' is digit.",c);
	}
	else
	{
		printf("'%c' is speacial character.",c);
	}
	
}
