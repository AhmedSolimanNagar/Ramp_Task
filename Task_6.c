/******************************************************************************
/******************************************************************************

Author : Ahmed Soliman 

Task : Task_id_006 

RR Academy

*******************************************************************************/


#include <stdio.h>

int main()
{
    int Sum = 0;
    int Num;
    do
    {
        printf("please Enter Number ....\n");
        scanf("%d",&Num);
        Sum += Num;
        
    }while(Sum <= 100);
    printf("The Sum = %d\n" , Sum);

    return 0;
}
