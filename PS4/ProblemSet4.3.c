//Probelm Set 4.3
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Global Variable
int global = 0;

//Function Prototype
void increment();

//Function Declaration
void increment(){
    //Static Variable
    int static sint = 0;
    //Local Variable
    int local = 0;

    //Correct way of format (no white space)
    printf("%d|\t%d|\t%d\n",local, sint, global);

    //Makes output look like the github output (using visual studio code terminal)
    //printf("  %d  |\t%d  |\t%d\n",local, sint, global);

    local += 1;
    sint += 1;
    global +=1;
}


int main (){

    //Format of the header
    printf("local| sint| global\n"
    "---------------------\n");

    // I tried calling increment on a for loop but it didn't work
    // Calls increment function 10 times
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();


    //Ends main function
    return 0;
}