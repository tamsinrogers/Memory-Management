/**
 * CS333 Project 7
 * memory allocation in C++
 * 
 * 11/23/2021
 * Tamsin Rogers
 *
 *  g++ -o task1cpp task1.cpp
 * ./task1cpp
 */

#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

	// allocates and frees int-sized memory block (4 byes)
	int* i = (int *)malloc(sizeof(int));
	printf("pointer to int: %p\n", i);
	free(i);

	// allocates and frees float-sized memory block (4 bytes)
	float* f = (int *)malloc(sizeof(float));
	printf("pointer to float: %p\n",f);
	free(f);
 
	// allocates and frees string-sized memory block (2 bytes)
	string* s = (double *)malloc(sizeof(string));
	printf("pointer to string: %p\n",s);
	free(s);

	// allocates and frees double-sized memory block (4 bytes)
	double* d = (double *)malloc(sizeof(double));
	printf("pointer to double: %p\n",d);
	free(d);

	// allocates and frees char-sized memory block (1 byte)
	char* c = (char*)malloc(sizeof(char));
	printf("pointer to char: %p\n",c);  
	free(c);
	    
}  
 
