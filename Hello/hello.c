#include <stdio.h> //standart input/output library; header files ( .h );
//tells the compiler to include information about the standard input/output library
#include <stdlib.h> //for EXIT_SUCCESS

int main(int argc, char **argv)
{
    printf("hello, world\n");//main calls library function printf to print this sequence of chars;
    return EXIT_SUCCESS; //return 0
}

//In C, the main function can return an integer value to the calling environment
//to indicate the status of the program.
//The integer value returned by main is called the exit status or exit code,
//and it typically indicates whether the program completed successfully (0) or encountered an error.

//The main function in C programming is a special type of function that serves
//as the entry point of the program where the execution begins. (see Python main.py in projects)

//Main usually calls other functions to help perform its job - some that you wrote
//and other funcs from libraries that provided for you int argc, char **argv (+ precompiler etc)
