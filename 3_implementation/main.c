#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,sum,prod,diff,choice;
	float quoi;
	
	printf("\t\tBASIC CALCULATOR\n");
	printf("enter the first number");
	scanf("%d",&num1);
	printf("enter the second number");
	scanf("%d",&num2);
	
	printf("1.sum\n 2.diff\n 3.prod\n 4.quoi\n");
	scanf("%d",&choice);
	switch(choice)
	{
		
		case 1:
			sum=num1+num2;
			printf("the sum is=%d",sum);
			break;
			
		case 2:
			diff=num1-num2;
			printf("the diff is=%d",diff);
			break;
		
			
		case 3:
			prod=num1*num2;
			printf("the prod is=%d",prod);
			break;
			
		case 4:
			quoi=num1/num2;
			printf("the quoi is=%f",quoi);
			break;
			default:
		printf("invalid input");
}
	getch();
	return 0;		
	}
	
	
