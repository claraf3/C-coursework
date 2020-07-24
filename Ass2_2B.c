/*
 ============================================================================
 Name        : Ass2_2B.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *ptr;   //creates pointer
	int x;		//creates variable x
	ptr = &x;	//set pointer to point at x by storing x's address into ptr
	*ptr = 0;	//sets value at its stored address to 0 --> sets x = 0;

	printf(" x = %d\n", x);				//prints value of x, which is 0
	printf(" *ptr = %d\n", *ptr);		//prints value stored at address pointed to by ptr, which is x's value, which is 0

	*ptr += 5;							//adds 5 to current value of where ptr is pointing to (x), which is 0+5 --> x = 5;
	printf(" x  = %d\n", x);			//prints value of x, which is now 5
	printf(" *ptr = %d\n", *ptr);		//prints value stored at address pointed to by ptr, which is x, which is 5

	(*ptr)++;							//adds 1 to value stored at address pointed to by ptr (x) which is x = 5+1 = 6;
	printf(" x = %d\n", x);				//x is now 6
	printf(" *ptr = %d\n", *ptr);		//prints value stored at address pointed to by ptr, which is x, which is 6

	return 0;

}
