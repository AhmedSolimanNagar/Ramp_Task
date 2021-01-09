/******************************************************************************

Author : Ahmed Soliman 

Task : Task_id_010

RR Academy

*******************************************************************************/
#include <conio.h> 
#include <stdio.h> 
#include <string.h> 
  
void main() 
{ 
  
    // Taking the password of 8 characters 
    char Arr[41]; 
    int i; 
  
    printf("Enter Word: "); 
    for (i = 0; i < 40; i++) { 
  
        // Get the hidden input 
        // using getch() method 
        Arr[i] = getch(); 
  
    } 
    Arr[i] = '\0'; 
    printf("\n"); 
    // Now the console will wait 
    // for a key to be pressed 
    getch(); 
} 


