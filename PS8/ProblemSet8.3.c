// Problem 8.3: File I/O with libsndfile 3
// Write a program that reads SN.wav (included in the problem set folder) and reverse the sample.

//Required Libraries:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include <sndfile.h>




#define kBufferSize 4096

void reverseSample(float *buffer, int numsamples);
void reverseSample(float *buffer, int numsamples) {
    for (int i = 0; i < numsamples; i++)
    {
        buffer[i] *= -1.0f;
    }
}

int main() 
{

    SNDFILE *inFile = NULL, *outFile = NULL; //pointers to a sound files
    SF_INFO sfInfo; //info about soundfile

    float buffer[kBufferSize]; //Buffer for holding samples

    //Initialize SF_INFO with 0s (memset is in string.h library)
	memset(&sfInfo, 0, sizeof(SF_INFO));

    inFile = sf_open("SN.wav", SFM_READ, &sfInfo);
    if (!inFile)
    {
        printf ("Couldn't open SN.wav\n");
        return 1;
    }

	//Check if the file format is in good shape
  	if(!sf_format_check(&sfInfo)){	
    sf_close(inFile);
		printf("Invalid encoding\n");
		return 1;
	}
    
	// Write out the reversed samples to the ReverseSN.wav file in the same directory.
    outFile = sf_open("ReverseSN.wav", SFM_WRITE, &sfInfo);

	//Check for errors
    if (!outFile)
    {	
        printf ("Couldn't open ReverseSN.wav");
        return 1;
    }

    int readcount;
    while((readcount = sf_read_float(inFile, buffer, kBufferSize)) > 0) 
    {
        printf("%d\n",readcount);
        reverseSample(buffer, readcount);
        sf_write_float(outFile, buffer, readcount); 
    }


	//Close Files
    sf_close(inFile);
    sf_close(outFile);

    return 0;

}


