/* Lacy H
Intro to C
9.9.20
Assignment 1 */

// this program will calculate the volume of a box in cubic inches and cubic feet and output the results

#include <stdio.h>
int main() {

// defining variables for length, width, and height in inches
 float length_in, width_in, height_in;

// defining variables for the volume in cubic inches and cubic feet
 float volume_in, volume_ft;

// asking user for input and outputting it for each variable
 printf("Input the length of the box in inches: ");
 scanf("%f", &length_in);
 printf("You entered: %f \n", length_in);

 printf("Input the width of the box in inches: ");
 scanf("%f", &width_in);
 printf("You entered: %f \n", width_in);

 printf("Input the height of the box in inches: ");
 scanf("%f", &height_in);
 printf("You entered: %f \n", height_in);

// outputting the volume in cubic inches
 volume_in = length_in * width_in * height_in;
 printf("The volume is %.2f cubic inches.\n", volume_in);

// outputting the volume in cubic feet
 volume_ft = (length_in/12) * (width_in/12) * (height_in/12);
 printf("The volume is %.2f cubic feet.", volume_ft);

return 0;

}
