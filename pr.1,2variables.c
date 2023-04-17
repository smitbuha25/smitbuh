#include<stdio.h>

main()

{
	int a,b;
	printf("Enter value A=",a);
	scanf("%d",&a);
	
	
	printf("Enter value B=",b);
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping value A=%d & B=%d",a,b);
	
}

