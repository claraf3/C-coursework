/*
 ============================================================================
 Name        : Ass2_2A.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void fun(int *ptr);
int main(void) {


	/*
	 * OUTPUT = 30
	 */

	int y = 20;
	fun(&y);
	printf("%d", y);
	return 0;

}

void fun(int *ptr)
{
    *ptr = 30;
}


/*EXPLANATION:
 * 1. 	y is initialized to 20
 * 2. 	y's address is passed into fun(int *ptr)
 * 3. 	fun(&y) creates a pointer that points to y using the passed address
 * 4.	*ptr sets the value stored in the address pointed to by ptr (y's address) to 30
 * 5. 	Therefore, the value of y is set to 30 by *ptr = 30
 * 6. 	The printf shows that y's value has been changed from 20 to 30
 * 7. 	In short, any value that y is initialized to will be changed to 30 once fun(&y) is called
 */
