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
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Cube \n 7 Exit \n \n Please, Make a choice ");      
          
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
            (); // It call the sq() function  to get the square of given numbers  
            break; // break the function  
              
        case 6:  
            cube(); /* It call the sqrt1() function  to get the cube of given numbers */  
            break; // break the function  
              
        case 7:  
            exit(0); // It call the exit() function  to exit from the program  
            break; // break the function  
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf (" \n \n ****** \n ");  
    } while (option != 7);  
     #else
     test_main();
     #endif 
  
    return 0;        
}
