/******************************************************************************

Author : Ahmed Soliman 

Task : Task_id_007

RR Academy

*******************************************************************************/
#include <stdio.h>
#define N  3


int Arr[N][N] = {{3,7,5}, {4,2,9},{8,6,1}};

int row = 3;
int col = 3;


void MoveDown()
{
    row++;
}

void MoveLeftUp()
{
    row--;
    col--;
}
void PrintArray(int Arr[N][N], int Size)
{
   
    unsigned int i,j;
    
    printf("---------------\n");
    for(i = 0; i < Size; i++)
    {
        for(j = 0; j < Size; j++)
        {
            printf("| %d ", Arr[i][j]);
        }
        
        printf("|\n");
        printf("---------------\n");
    }
}





int main()
{
   
    
    row --;
    col--;
    

    if (Arr[row][col] % N == 0)
    {
        MoveDown();
    }
    else
    {
        MoveLeftUp();
    }
    PrintArray(Arr,N);
    return 0;
}

