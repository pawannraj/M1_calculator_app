#include <stdio.h>
#include<math.h>
int calc(int choice,int num1,int num2,float x,float y)
{
  int sum,prod,diff;
  float fact,quoi,sqrtrt,result,onebyx;
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
}