
// Problem 8.1: File I/O with libsndfile 1
// Write a program that reads sine.wav (included in the problem set folder) and extends the duration to 5 seconds.

//Required Libraries:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include <sndfile.h>





// You must use libsndfile for this problem set.



#define kBufferSize 4096

void changeDuration(float *buffer, int numsamples);
void changeDuration(float *buffer, int numsamples) {
    for (int i = 0; i < numsamples; i++)
    {
        //Pseudo code:   time = SF_Info.frames/SF_INFO * 5
		printf("New duration is: \n");
    }
}

int main() 
{

    SNDFILE *inFile = NULL, *outFile = NULL; //pointers to a sound files
    SF_INFO sfInfo; //info about soundfile

    float buffer[kBufferSize]; //Buffer for holding samples

    //Initialize SF_INFO with 0s (memset is in string.h library)
	memset(&sfInfo, 0, sizeof(SF_INFO));

    inFile = sf_open("sine.wav", SFM_READ, &sfInfo);
    if (!inFile)
    {
        printf ("Couldn't open sine.wav\n");
        return 1;
    }

	//Check if the file format is in good shape
  	if(!sf_format_check(&sfInfo)){	
    sf_close(inFile);
		printf("Invalid encoding\n");
		return 1;
	}
    
	// Write out the resulting 5 second sine wave to the sine5.wav file in the same directory.
    outFile = sf_open("sine5.wav", SFM_WRITE, &sfInfo);

	//Check for errors
    if (!outFile)
    {	
        printf ("Couldn't open sine5.wav");
        return 1;
    }

    int readcount;
    while((readcount = sf_read_float(inFile, buffer, kBufferSize)) > 0) 
    {
        printf("%d\n",readcount);
        changeDuration(buffer, readcount);
        sf_write_float(outFile, buffer, readcount); 
    }


	//Close Files
    sf_close(inFile);
    sf_close(outFile);

    return 0;

}


