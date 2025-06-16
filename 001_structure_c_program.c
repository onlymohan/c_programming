// Documentation
/**
 * file: 001_structure_c_program.c
 * author: Mohan
 * description: program to find sum.
 */

// Link section
#include <stdio.h>

//Defintion section
#define X 20

//Global Declaration
int sum(int y);

//Main function
int main(void)
{
    int y = 55;
    printf("sum: %d\n", sum(y));
    return 0;
}

//Sub-program 
int sum(int y)
{
    return y + X;
}