/**
 * @file cal.c
 * @author pawan(pawanraj3706@.com)
 * @brief scientific calculator
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,sum,prod,diff,choice,n;
	float fact,quoi,sqrtrt,x,y,result,onebyx;
	
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
			
		case 5:
		         sqrtrt=sqrt(x);
		         printf("the square root=%f",sqrtrt);
		         break;
		case 6:
		        
		        result=pow(x,y);
		        printf("the power of x and y=%f",result);
		        break;
		 case 7:
		        onebyx=(1/x);
		        printf("Result is=%f",onebyx);
		        break;
		  case 8:
		        result=pow(x,1/y);
		        printf("Result is=%f",result);
		        break;
		  case 9:
		        result=pow(10,x);
		        printf("Result is=%f",result);
		        break;
		  case 10:
		        for(int i=1;i<=x;i++)
                    fact=fact*i;
                printf("Factorial of %f is: %f",x,fact);
		        break;      
		  case 11:
		            result=log10(x);
		            printf("Result is=%f",result);
		            break;
		  case 12:
		           result=sin(x);
		           printf("Result is=%f",result);
		           break;
		  case 13:
		           result=cos(x);
		           printf("Result is=%f",result);
		           break;
		   case 14:
		           result=tan(x);
		           printf("Result is=%f",result);
		           break;
		    case 15:
		    	   result=log(x);
		    	   printf("Result is=%f",result);
		    	   break;
		    case 16:
		    	   result=exp(x);
		    	   printf("Result is=%f",result);
		    	   break;
		    case 17:
		    	   result=sinh(x);
		    	   printf("Result is=%f",result);
		    	   break;
		    case 18:
		    	   result=cosh(x);
		    	   printf("Result is=%f",result);
		    	   break;
		    case 19:
		    	   result=tanh(x);
		    	   printf("Result is=%f",result);
		    	   break;
		    
		    
		  default:
		           printf("invalid input");
}
	
	return 0;		
	}
