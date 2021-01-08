#include <stdio.h>
#include "Print_Max_Min.h"
void PrintMinMax(int Arr[], int arrSize)
{
    unsigned int idx;
    int Min;
    int Max;
    
    Min = Arr[0];
    Max = Arr[0];
    
    for(idx = 1; idx < arrSize; idx++)
    {
        if (Arr[idx] > Max)
        {
            Max = Arr[idx];
        }
        
        if (Arr[idx] < Min)
        {
            Min = Arr[idx];
        }
    }
    
    printf("MAX = %d\n",Max);
    printf("MIN = %d\n",Min);
}