// Problem Set 6.1

#include <stdio.h>

//Function Prototype
//function called adjustMIDIRange that takes in the input from the user and returns nothing
void adjustMIDIRange(int *midi);

int main()
{	
	int midi;
	// Asks user to input an integer number
	printf("Please enter an integer: \n");
	scanf("%d", &midi);

	adjustMIDIRange(&midi);
	
	printf("The MIDI number is: %d\n",midi);

	return 0;
}

//Function Declaration
  void adjustMIDIRange(int *midi){
	//0 if the user's integer input is less than 0.
	if (*midi < 0){
		*midi = 0;
	}
	//127 if the integer input from the user is greater than 127
	else if (*midi > 127){
		*midi = 127;
	}
  }



