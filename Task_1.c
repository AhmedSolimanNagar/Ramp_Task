/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int i;
    char entry;
    unsigned char Exit = 0;
    char Arry[3][30] = {"a)Good Morning", "b)Good evening", "c)Exit Program"};
    
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", Arry[i]);
    }
      
    system("cls");
    printf("please Enter Choise a, b ,c \n");

    scanf("%c",&entry);
    fflush(stdin);
    if (entry == 'a')
    {
        printf("%s\n",Arry[0]);
    }
    else if (entry == 'b')
    {
        printf("%s\n",Arry[1]);
    }
    else if (entry == 'c')
    {
        printf("%s\n",Arry[2]);
        Exit = 1;
        exit(0);
    }
    else
    {
        printf("wrong Choice\n");
        system("cls");
        exit(0);
    }
    
    
    
    return 0;
}
