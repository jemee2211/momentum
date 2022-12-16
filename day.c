#include<stdio.h>
main(){
	
	char w;
	
	printf("Info About Day\n");
	printf("M=monday\n T=tuesday\n W=wednesday\n t=thusday\n F=friday\n S=saturday\n s=sunday\n\n");
	printf("Enter Day:");
	scanf("%c",&w);
	
	switch(w){
		
		default:
			printf("Enter Valid Input");
			break;
			
		case 'M':
		    printf("monday");
		    break;
		    
		case 'T':
		    printf("tuesday");
		    break;
		
		case 'W':
		    printf("wednesday");
		    break;
		    
		case 't':
		    printf("thusday");
		    break;
		    
		case 'F':
		    printf("friday");
		    break;
		    
		case 'S':
		    printf("saturday");
		    break;
		    
		case 's':
		    printf("sunday");
		    break;
		    
	}
	
}
