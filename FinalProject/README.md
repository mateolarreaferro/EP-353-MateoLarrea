# Final Project

The final project is an opportunity to take your newly acquired audio programming skills in C to develop your very own piece of audio software. So long as your project draws upon the course materials, the nature of your project is entirely up to you. Please remember that your project does need to get approved by the instructor. Your audio software may be a game, synthesizer, audio effect, or a math or science application, or anything else you choose. This is a wide-open project, and you are expected to be creative in your approach to it. Build something that interests you and something that you can take with outside of this course.



### Proposal

Sensorem is an arduino-based instrument that works in two ways: as an analog controller for Ableton Live, and as a midi instrument (that generates harmony, melody, and beat based on arduino distance, temperture, and heart rate sensors). 

Software: Sensorem's code will be written in two languages: Machine Code (compiled from C/C++) and Max MSP. 

C: The challenge is to combine many existing and 'non-existing' scripts into a single script that allows full functionality. I intend to use Firmata (for Ableton connection) and serial to pass the data inputed from the sensors to Max MSP. 

Max MSP: Max will take the data via serial and compile it in a way that the output is both musical and within the range of MIDI values. It will consist of three systems: one for harmony, melody, and rhythm.  

Hardware: It is essential to create a box that is both ergonomic and complete in terms of the capacities that the machine offers. I will solder my connections into a project board and then build a wood/plastic box that has potentiometers, sensors, and maybe a switch. 



## Academic Honesty
You will be expected to attribute due credit to the originator of any ideas, words, programming code, or other ideas that you incorporate into your own work. In computer programming, it's common to use program components written by others known to be reliable and written by others. A lot of good (and some bad) program code is freely available. Nevertheless, one must always give full attribution to the original author of all program code.

## Final Project Grading Rubrics

Description|Grade
---|---:|
Your *proposal* is submitted in the `FinalProject/Proposal` directory and has the name `README.md`. | 10%
Your *status report* is submitted in the `FinalProject/StatusReport` directory and has the name `README.md`. | 10%
The *user manual* for your program is thoroughly documented in `README.md`. | 10%
The implementation of your program is thoroughly documented in `DESIGN.md`. | 10%
A presentation file is submitted with an appropriate length and file name. | 10%
Your final project is presented in the class. | 10%
Submitted all files required to run the program. |10%
Programs are clean, understandable, thoroughly commented, and organized. | 10%
No warning and error in your program. | 10%
Your final project works as proposed. | 10%
**Total** | **100%**

---  
**EP-353: Audio Programming in C**   
Electronic Production and Design  
Berklee College of Music  
*Fall 2020*