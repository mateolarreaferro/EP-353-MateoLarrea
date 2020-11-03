// Problem8.2: File I/O with libsndfile 2

//Required Libraries:
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <memory.h>
#include <sndfile.h>





#define kBufferSize 4096

int main(void) {
  SNDFILE *inFile = NULL, *inFile2 = NULL, *outFile = NULL; //pointers to a sound files
	SF_INFO sfInfo; //hold an information about a sound file
  float buffer[kBufferSize]; //Buffer for holding samples

  //Initialize SF_INFO with 0s (memset is in string.h library)
  memset(&sfInfo, 0, sizeof(SF_INFO));

  //Open the original sound file as read mode
  inFile = sf_open("tri.wav", SFM_READ, &sfInfo);
  inFile2 = sf_open("sine.wav", SFM_READ, &sfInfo);
  

  //Checks for errors
  if(!inFile){
    printf ("Error : could not open file : tri.wav\n");
		puts (sf_strerror (NULL));
		return 1;
  }
    if(!inFile2){
    printf ("Error : could not open file : sine.wav\n");
		puts (sf_strerror (NULL));
		return 1;
  }
  
  //Check if the file format is in good shape
  if(!sf_format_check(&sfInfo)){	
    sf_close(inFile);
	sf_close(inFile2);
		printf("Invalid encoding\n");
		return 1;
	}

  //Modify sfInfo if you need to...
  //sfInfo.format = SF_FORMAT_AIFF;

  //Open another sound file in write mode
  outFile = sf_open("sintri.wav", SFM_WRITE, &sfInfo);

  //Check if the file was succefully opened
  if(!outFile){	
    printf ("Error : could not open file : sintri.wav");
		puts (sf_strerror(NULL));
		return 1;
	}

  //Copy samples from the original file to the new files
  int readcount;
  while((readcount = sf_read_float(inFile, buffer, kBufferSize)) > 0) {
    printf("%d\n",readcount);
    sf_write_float(outFile, buffer, readcount); 
  }

  int readcount2;
  while((readcount2 = sf_read_float(inFile2, buffer, kBufferSize)) > 0) {
    printf("%d\n",readcount2);
    sf_write_float(outFile, buffer, readcount2); 
  }
  
  //Close the open files
  sf_close(inFile);
  sf_close(inFile2);
	
	sf_close(outFile);

  return 0;
}






