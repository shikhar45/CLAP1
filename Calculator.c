#include <stdio.h>  
int main()  
{
    char option;  
    int n1, n2;   
    float result;  
    printf (" Choose an operator(+, -, *, /)\n ");  
    scanf ("%c", &option);
    if (option == '/' )  
    {  
        printf (" You have selected: Division");  
    }  
    else if (option == '*')  
    {  
        printf (" You have selected: Multiplication");  
     }  
       
    else if (option == '-')  
    {  
        printf (" You have selected: Subtraction");  
     }  
        else if (option == '+')  
    {  
        printf (" You have selected: Addition");  
     }     
    printf (" \n Enter the first number: ");  
    scanf(" %d", &n1);
    printf (" Enter the second number: ");  
    scanf (" %d", &n2); 
      
    switch(option)  
    {  
        case '+':  
            result = n1 + n2; 
            printf (" Addition : %.2f",result);  
            break;  
          
        case '-':  
            result = n1 - n2; 
            printf (" Subtraction : %.2f",result);  
            break;  
              
        case '*':  
            result = n1 * n2; 
            printf (" Multiplication : %.2f",result);  
            break;            
          
        case '/':  
            if (n2 == 0)
            {  
                printf (" \n Divisor cannot be zero. Please enter another value ");  
                scanf ("%d", &n2);        
                }  
            result = n1 / n2; 
            printf (" Division : %.2f",result);  
            break;  
        default: 
            printf (" ERROR ");               
    }  
    return 0;  
}  
