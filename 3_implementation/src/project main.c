/**
 * @file project main.c
 * @author pawan (pawanraj@3706.com)
 * @brief 
 * @version 0.1
 * @date 2022-03-04
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "cal.h"
extern void test_main();

int main()  
{  
   #if 0 
    int option;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \1.sum\n 2.diff\n 3.prod\n 4.quoi\n 5.squareroot\n 6.power\n7.onebyx\n8.power of x and 1/y\n9 .10 power x\n11.log10(x)\n12. sin(x)\n13. cos(x)\n14.tanx(x)\n15.log(x)\n16.exp(x)\n17.sinh(x)\n18.cosh(x)\n19.tanh(x)");      
          
        scanf ("%d", &option); // accepts a numeric input to choose the operation  
      
      
    // use switch statement to call an operation  
    switch (option)  
    {  
        case 1:  
            sum(); /* It call the addition() function  to add the given numbers */  
            break; // break the function  
              
        case 2:  
            diff(); /* It call the subtract() function  to subtract the given numbers */  
            break; // break the function  
              
        case 3:  
            prod(); /* It call the multiply() function  to multiply the given numbers */  
            break; // break the function  
              
        case 4:  
            quoi(); // It call the divide() function  to divide the given numbers  
            break; // break the function  
              
        case 5:  
            sqrtrt(x); // It call the sqrt() function  to get the square of given numbers  
            break; // break the function  
              
        case 6:  
            pow(x); /* It call the pow() function  to get the cube of given numbers */  
            break; // break the function  
              
        case 7:  
            oneby(x); /* It call the oneby() function  to get the cube of given numbers */  
            break; // break the function  
       case 8:
            pow of(x); /* It call the powof() function  to get the cube of given numbers */  
            break; // break the function  
       case 9:
           pow(x,1/y); /* It call the pow(x,1/y) function  to get the cube of given numbers */  
            break; // break the function  
       case 10:
           fact(x); /* It call the fact() function  to get the cube of given numbers */  
            break; // break the function 
       case 11:
           log10(x); /* It call the log10() function  to get the cube of given numbers */  
            break; // break the function 
       case 12:
            sin(x); /* It call the sin() function  to get the cube of given numbers */  
            break; // break the function 
       case 13:
            cos(x); /* It call the cos() function  to get the cube of given numbers */  
            break; // break the function 
       case 14:
           tan(x); /* It call the tan() function  to get the cube of given numbers */  
            break; // break the function  
       case 15:
            log(x); /* It call the log() function  to get the cube of given numbers */  
            break; // break the function  
       case 16:
            exp(x); /* It call the exp() function  to get the cube of given numbers */  
            break; // break the function
       case 17:
            sinh(x); /* It call the sinh() function  to get the cube of given numbers */  
            break; // break the function 
       case 18:
            cosh(x); /* It call the cosh() function  to get the cube of given numbers */  
            break; // break the function  
       case 19:
            tanh(x); /* It call the tanh() function  to get the cube of given numbers */  
            break; // break the function  
        default:  
            printf(" invalid output ");  
            break;                        
    }  
    printf (" \n \n ****** \n ");  
    } while (option != 19);  
     #else
     test_main();
     #endif 
  
    return 0;        
}
