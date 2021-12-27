/**
 * CS333 Project 7 - memory management in C (part b)
 * 
 * 
 * 11/23/2021
 * Tamsin Rogers
 *
 *  gcc -o task2 task2.c 
 * ./task2
 */


#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "my_timing.h"

int main(int argc, char *argv[]){

    int (**small)=(int**) malloc(1000*sizeof(int*)); 
    int (**medium)=(int**)malloc(10000*sizeof(int*)); 
    int (**large)=(int**)malloc(100000*sizeof(int*)); 

    double start1=get_time_sec();
    for(int i=0;i<1000;i++){
        double f1=get_time_sec();
        small[i]=(int*) malloc(6000000*sizeof(int));
        free(small[i]);
        if(i%100==0){
            double f2=get_time_sec();
            double totalTimeSmall=f2-f1;
            printf("Total time for small by 100:%f\n",totalTimeSmall);
        }
    }
    double end1=get_time_sec();
    double totalTimeSmall=end1-start1;
    printf("Total time for small:%f\n",totalTimeSmall);
   

    

   

    double start2=get_time_sec();
    for(int i=0;i<10000;i++){
        double f3=get_time_sec();
        medium[i]=(int*) malloc(6000000*sizeof(int));
        free(medium[i]);
        if(i%1000==0){
            double f4=get_time_sec();
            double totalTimeMed=f4-f3;
            printf("Total time for medium by 1000:%f\n",totalTimeMed);
        }
    }
    double end2=get_time_sec();
    double totalTimeMed=end2-start2;
    printf("Total time for med:%f\n",totalTimeMed);
   


    double start3=get_time_sec();
    for(int i=0;i<100000;i++){
        double f5=get_time_sec();
        large[i]=(int*) malloc(6000000*sizeof(int));
        free(large[i]);
        if(i%10000==0){
            double f6=get_time_sec();
            double totalTimeLarge=f6-f5;
            printf("Total time for large by 10000:%f\n",totalTimeLarge);
           
        }
    }
    double end3=get_time_sec();
    double totalTimeLarge=end3-start3;
    printf("Total time for large:%f\n",totalTimeLarge);
   
    free(small);
    free(medium);
    free(large);

/*
Total time for small by 100:0.000031
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small by 100:0.000001
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small by 100:0.000002
Total time for small:0.003273
Total time for medium by 1000:0.000015
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000002
Total time for medium by 1000:0.000002
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000001
Total time for medium by 1000:0.000001
Total time for med:0.013322
Total time for large by 10000:0.000006
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large by 10000:0.000001
Total time for large:0.085647

*/





}