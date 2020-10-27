// Problem Set 7.1: Memory Management

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>






// Compute the average of all long integers entered by the user when they exit the number entering routine.
// Print out the result of averaging.
// Do not forget to free the memory before the program exits.
// Hint: How do we change the size of an array on the fly?
// Hint: You will also need to keep track of the number of times the users entered an integer.






int main(){

// The size of the array must always be the same as the number of long integers entered by the users.
long int array [size];
int size = 1; //Amount of numbers inputed by user(The size of the array must always be the same as the number of long integers entered by the user)
long int inputs;
int maxArrayLength = 100;


// Write a program that takes an arbitrary number of long integers from users using scanf and while-loop.

printf("Enter numbers that will be averaged: \n");


while(inputs != 0 || size < maxArrayLength) // The while-loop should exit if the users enter 0 or the array becomes larger than 100.
{
// Store all long integers entered by the users in an array while the while-loop is running.
scanf("%li", &inputs);
size += 1;

}


	// free(x);
	return 0;
  }



