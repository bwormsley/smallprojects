/*
Author: Benjamin Wormsley

Takes two command line arguments and calculates the percent error betwwen them.
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (int argc, char** argv) {
    if(argc != 3) {
        printf("ERROR: Incorrect amount of arguements.\n");
        printf("   Usage: ./a.exe {theoretical value} {experimental value}\n");
        return 1;
    }
    double theoretical = atof(argv[1]);
    double experimental = atof(argv[2]);
    double percentError = (fabs(theoretical - experimental) / theoretical) *100;
    
    printf("---------\n");
    if((theoretical - experimental) < 0) {
        printf("-%% %.5lf\n", percentError);    
    }
    else {
        printf("%% %.5lf\n", percentError);
    }
    printf("---------\n");
    return 0;
}