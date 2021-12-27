/**
 * CS333 Project 7 - Memory Management in C
 * 
 * 11/23/2021
 * Tamsin Rogers
 *
 *  gcc -o task1 task1.c 
 * ./task1 
 */


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "my_timing.h"
using namespace std;

int main(int argc, char *argv[])
{
	// allocates memory to 3 arrays of increasing sizes
    int (**small) = (int**) malloc(1000*sizeof(int*)); 
    int (**medium) = (int**)malloc(10000*sizeof(int*)); 
    int (**large) = (int**)malloc(100000*sizeof(int*)); 

    double f1=get_time_sec();
    
    for(int i=0;i<1000;i++)
    {
        small[i]=(int*) malloc(6000000*sizeof(int));
    }
    
    double f2 = get_time_sec();
    double totalTimeSmall = f2-f1;

    printf("Total time for small:%f\n",totalTimeSmall);

    double f3 = get_time_sec();
    
    for(int i=0;i<10000;i++)
    {
        medium[i]=(int*) malloc(6000000*sizeof(int));
    }
    
    double f4 = get_time_sec();
    double totalTimeMed=f4-f3;

    printf("Total time for medium:%f\n",totalTimeMed);

    double f5 = get_time_sec();
    
    for(int i=0;i<100000;i++)
    {
        large[i]=(int*) malloc(6000000*sizeof(int));
    }
    
    double f6 = get_time_sec();
    double totalTimeLarge=f6-f5;

    printf("Total time for large:%f\n",totalTimeLarge);

	// frees each variable stored in the arrays
    for(int i=0;i<1000;i++)
    {
        free(small[i]);
    }

    for(int i=0;i<10000;i++)
    {
        free(medium[i]);
    }

    for(int i=0;i<100000;i++)
    {
        free(large[i]);
    }
    
    // frees the memory of the arrays
    free(small);
    free(medium);
    free(large);

}