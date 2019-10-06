#include <stdio.h>
#include <limits.h>
#include <float.h>

//External variables cannot be declared within internal functions
extern int d = 3, f = 4;

int main()
{   
    //Lets define some variables
    int i,j,k;
    char c,ch;
    float f, salary;
    double d;
    //The different words 
    int x = 'xylophone';
   
    //My first program in C!
    printf("Hello world %d \n",sizeof(int));
    // remember to put the \n or sometimes it will mess up your stuff
    printf("%d \n",sizeof(int));
    printf("%E \n", FLT_MAX );
    printf("%s \n", x);
    return 0;
}