CS333 - Project #7 - README
Tamsin Rogers
11/23/2021

Directory Layout:
Project6
├── my timing.h
├── task1.c
├── task1
├── task2.c
├── task2
├── task1.cpp
├── task1cpp
├── task2.cpp
└── task2cpp

Run and build configuration for C:
macOS Big Sur 11.5.2 - Apple LLVM version 12.0.5 (clang-1205.0.22.11)

Description for each subsection:

C:
  This is the C programming task (part 1)

Task1.c demonstrates estimation of the big O complexity of memory management in C. 
This program creates three arrays of small (1000), medium (10000), large (100,000) sizes. 
The total run time of memory allocation for each array is calculated by the time it takes
for every slot in the specified array to be filled with the integer 6000000

To calculate the total run time of memory allocating for each array, we started the timer 
and then kept it running until all of the slots in the array were filled with the integer 6000000. 

From the output of task1.c, it is clear that it takes the smallest array the least amount of
time to allocate the memory blocks and the largest array the most amount of time to allocate 
the memory blocks.  This result occurs because every time malloc() is called in reference to the
array, an adequate space in the heap must be found in order to store the value of the given variable there. 

Compile: 
	gcc -o task1 task1.c 

Run: 
	./task1 

Output:
	Total time for small:0.004785
	Total time for medium:0.024290
	Total time for large:0.499150

Task2.c tests to see if the time of a memory call changes with the number of allocations and 
free operations in the code. This program creates three arrays of small (1000), medium (10000), large (100,000) sizes.  
Specified amounts of memory are allocated into the array, and then freed within it. From the output of task2.c, it is 
clear that first call for each array took the longest to complete.  The total runtime for each array in task2.c is shorter
than in task1.c because memory is actually being freed here.  There are therefore more places in the heap for new memory to 
be allocated because locations in the heap can be reused once they are freed.  The effects of this difference are evident in 
the output of task2.c, as the runtime is significantly longer when the program lacks the free statement.  The output of this
task also suggests that even though the first call takes longer as the size of the array increases, the time that is needed for the
integer to be allocated actually ends up being about the same afer the first call, regardless of whether or note the number of times
the program has passed through the loop is increasing.  We have then determined that it takes the same amount of time to call, no matter
if the array is being called 100 times of 1000 times.  

Compile:
	gcc -o task2 task2.c 

Run:
	./task2

Output:
	With free: 
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


	Without free: 
	Total time for small by 100:0.000002
	Total time for small by 100:0.000001
	Total time for small by 100:0.000002
	Total time for small by 100:0.000001
	Total time for small by 100:0.000002
	Total time for small by 100:0.000001
	Total time for small by 100:0.000002
	Total time for small by 100:0.000001
	Total time for small by 100:0.000001
	Total time for small by 100:0.000001
	Total time for small:0.002366
	Total time for medium by 1000:0.000007
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for medium by 1000:0.000001
	Total time for med:0.017756
	Total time for large by 10000:0.000005
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000001
	Total time for large by 10000:0.000002
	Total time for large by 10000:0.000048
	Total time for large by 10000:0.000002
	Total time for large:0.427736

C++:
  This is the C++ programming task (part 2)
  
In task1.cpp, we demonstrated memory allocation in C++ with several basic data types.   
C++ manages memory using two functions, for the most part: malloc() and free().  Malloc 
allocates a memory block of a specified size to a variable on the heap and returns the void 
pointer to the beginning address of that memory block.  Free dynamically de-allocates a 
specified block of memory.  This block of memory, once freed, can be used again for different 
variables and allocations.  C handles memory the exact same way, so the code would be the same 
for the same result, just with C-compatible syntax.  

Compile: 
	g++ -o task1cpp task1.cpp

Run: 
	./task1 

Output:
	pointer to int: 0x7ffdd9c05a70
	pointer to float: 0x7ffdd9c05a70
	pointer to string: 0x7ffdd9c05a80
	pointer to double: 0x7ffdd9c05a70
	pointer to char: 0x7ffdd9c05a70

In task2.cpp, we experimented with automatic memory management to see where a garbage collection
sweep takes place.  We created three different arrays, one small size, one medium size, and one large size. 
Going through each array, we placed an integer 600000 into each slot in the array. We printed out the nanoseconds 
that it took for the small array to allocate into 10 slots, the medium array to allocate into 100 slots, and for 
the large array to allocate into 1000 slots. Because C++ was much faster than C, we had to start using nanoseconds 
in order to find the amount of time it took. The total length of time that it took for each array increased with the 
array size, but the breakdown time decreased as the arrays got bigger. This is because C++ has an automatic memory 
management that will learn the pointer of the array so that it does not keep having to access the array each time. 
Therefore, the first call to each of the array took the longest. 

Compile: 
	g++ -o task2cpp task2.cpp

Run: 
	./task2cpp

Output:
	Total time for small by 1:5.00679e-06
	Total time for small by 1:0
	Total time for small by 1:0
	Total time for small by 1:9.53674e-07
	Total time for small by 1:0
	Total time for small by 1:0
	Total time for small by 1:0
	Total time for small by 1:0
	Total time for small by 1:0
	Total time for small by 1:9.53674e-07
	Total time for small:0.0018239
	Total time for medium by 1000:5.00679e-06
	Total time for medium by 1000:0
	Total time for medium by 1000:1.19209e-06
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for medium by 1000:0
	Total time for med:0.00652695
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:1.19209e-06
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large by 10000:0
	Total time for large:0.040328

