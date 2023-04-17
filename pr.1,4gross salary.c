#include<stdio.h>

main()
{
	int gs,bs,hra,da,ta;
	 
	printf("Enter Your base salary :");
	scanf("%d",&bs);
	
	printf("Enter Your hra :");
	scanf("%d",&hra);
	
	printf("Enter Your da :");
	scanf("%d",&da);
	
	printf("Enter Your ta :");
	scanf("%d",&ta);
	
	hra=hra*bs/100;
	da=da*bs/100;
	ta=ta*bs/100;
	
	gs=bs+hra+da+ta;
	
	printf("gross salary=%d",gs);
}
