// Problem Set 7.3: Advanced Data Type

#include <stdio.h>
#include <stdlib.h> //Essential for Memory Allocation
#include <stdbool.h>

//struct named Note that holds three unsigned char variables pitch, velocity, and channel.

struct Note
{
	unsigned char pitch;
	unsigned char velocity;
	unsigned char channel;
};

//Typedef
typedef struct Note Note;


//Function called printNote that can take the Note pointer variable.

//Function Protoype:

void printNote(char *values, Note Note);

//Function Declaration:

void printNote(char *values, Note Note){

	printf("The MIDI Note has: \n");
	printf("Pitch -> %i\n", Note.pitch);
	printf("Velocity -> %i\n", Note.velocity);
	printf("Channel -> %i\n", Note.channel);
}



int main(){

	// Declare the Note struct as a pointer type and allocate memory space for it using malloc.
	Note *values = malloc(sizeof(Note)*1);

	//Verify if malloc worked
	if(values == NULL){
		printf("Malloc wasn't triumphant!!!\n");
		return 1;
	}

	Note inputs;



	// Ask the user to input the values for the pitch, velocity, and channel members of the Note struct.
	//PITCH, VELOCITY, CHANNEL
	printf("Please enter a Pitch, Velocity and Channel value:  \n");
	scanf("%c", &inputs.pitch);
	scanf("%c", &inputs.velocity);
	scanf("%c", &inputs.channel);

	//Call Function 

	printNote(char *values, Note Note);
	


	//free the Note struct before the program exists.
	free(values);
	
	
	//End of Main Function
	return 0;
  }



