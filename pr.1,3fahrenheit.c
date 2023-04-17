#include<stdio.h>

main()

{
	float f,c;
	
	printf("Enter Temperature In Celsius :");
	scanf("%f",&c);
	
	f=c*9/5+32;
	
	printf("fehrenheit=%.2f",f);
	
}
