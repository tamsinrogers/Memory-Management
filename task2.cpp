/**
 * CS333 Project 7
 * automatic memory management in C++ - garbage collection
 * 
 * 11/23/2021
 * Tamsin Rogers
 *
 *  g++ -o task2cpp task2.cpp
 * ./task2cpp
 */


#include<stdio.h>
#include<stdlib.h>
#include "my_timing.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int small[10000];
    int medium[100000];
    int large[1000000];

    double start1=get_time_sec();
    
    for(int i=0;i<10000;i++)
    {
        double f1=get_time_sec();
        small[i]=(int)6000000000;

        if(i%1000==0)
        {
            double f2=get_time_sec();
            double totalTimeSmall=f2-f1;
            cout<<"Total time for small by 1:"<<totalTimeSmall<<"\n";
        }
    }
    
    double end1=get_time_sec();
    double totalTimeSmall=end1-start1;
    cout<<"Total time for small:"<<totalTimeSmall<<"\n";
    
    double start2=get_time_sec();
    
    for(int i=0;i<100000;i++)
    {
        double f3=get_time_sec();
        medium[i]=(int)6000000000;
        
        if(i%10000==0)
        {
            double f4=get_time_sec();
            double totalTimeMed=f4-f3;
            cout<<"Total time for medium by 1000:"<<totalTimeMed<<"\n";
        }
    }
    
    double end2=get_time_sec();
    double totalTimeMed=end2-start2;
    cout<<"Total time for med:"<<totalTimeMed<<"\n";
   
    double start3=get_time_sec();
    
    for(int i=0;i<1000000;i++)
    {
        double f5=get_time_sec();
        large[i]=(int)6000000000;

        if(i%100000==0)
        {
            double f6=get_time_sec();
            double totalTimeLarge=f6-f5;
            cout<<"Total time for large by 10000:"<<totalTimeLarge<<"\n";
        }
        
    }
    
    double end3=get_time_sec();
    double totalTimeLarge=end3-start3;
    cout<<"Total time for large:"<<totalTimeLarge<<"\n";

}