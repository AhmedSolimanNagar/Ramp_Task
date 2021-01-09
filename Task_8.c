/******************************************************************************

Author : Ahmed Soliman 

Task : Task_id_007

RR Academy

*******************************************************************************/
#include <stdio.h>

#define Student 3
#define Subject 4

int student_Degrees[Student + 1][Subject + 1]/* = 
{
    {10, 10, 10, 10},
    {20, 30, 30, 30},
    {30, 20, 20, 20}} */
    ;

void Print_Array(int Arr[Student][Subject]);




int main()
{
    unsigned int i,j;
    int Sum = 0;
    int Avg = 0;
    
    /*getting The array values */
    for(i = 0; i < Student; i++)
    {
        Sum = 0;
        
        for(j = 0; j < Subject; j++)
        {
          printf("Enter Student_%d Subject_%d : ",i+1,j+1);
            scanf("%d",&student_Degrees[i][j]);
            Sum+=student_Degrees[i][j];
            
        }  
        student_Degrees[i][Subject] = Sum;
    }
    
    for(i = 0; i < Subject; i++)
    {
        Avg = 0;
        for(j = 0; j < Student; j++)
        {
            Avg += student_Degrees[j][i] ; 
            //printf("i = %d , j = %d , Avg = %d \n",i,j,Avg);
            student_Degrees[Student][i] = Avg;
        }   
    }
   Print_Array(student_Degrees);
    

    return 0;
}

void Print_Array(int Arr[Student][Subject])
{
    unsigned int i,j;
        /*Printing The array */
    printf("------------------------\n");
    for(i = 0; i < Student+1; i++)
    {
        for(j = 0; j < Subject+1; j++)
        {
            printf("| %d ", student_Degrees[i][j]);
            
        }
        
        printf("|\n");
        printf("---------------------------\n");
    }
}

