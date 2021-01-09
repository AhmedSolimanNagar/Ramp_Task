/******************************************************************************

Author : Ahmed Soliman 

Task : Task_id_004 

RR Academy

*******************************************************************************/
#include <stdio.h>

int main()
{

    int num;
    int reminder;
    int rev = 0;
    int Number = 8523;
    printf("Enter number>>>");
    scanf("%d",&Number);
    while(Number != 0)
    {
        reminder = Number % 10;
        Number = Number / 10;
        
        rev = reminder + (rev * 10 );
         
    }
    

    
    printf("The Number Reverse = %d\n", rev);

    return 0;
}

