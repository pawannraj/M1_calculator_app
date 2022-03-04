#include<stdio.h>
#include<calc.h>
int main()
{
	int num1,num2,choice,n;
	float x,y;
	
	
	printf("\t\tBASIC CALCULATOR\n");
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	printf("Enter x ");
	scanf("%f",&x);
	printf("Enter y ");
	scanf("%f",&y);
	
	printf("1.sum\n 2.diff\n 3.prod\n 4.quoi\n 5.squareroot\n 6.power\n7.onebyx\n8.power of x and 1/y\n9 .10 power x\n11.log10(x)\n12. sin(x)\n13. cos(x)\n14.tanx(x)\n15.log(x)\n16.exp(x)\n17.sinh(x)\n18.cosh(x)\n19.tanh(x)");
	scanf("%d",&choice);
	
	
	return 0;		
	}
