/*
 ============================================================================
 Name        : Ass2_2C.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	/*
	 * OUTPUT:C from 2braces.com
	 */


	char *ptr; //creates character type pointer
	char string[] = "learn C from 2braces.com"; //creates character array (aka a string)

	ptr = string;	/* the value of string IS the address of where the string starts.
					 * This stores string array's address into ptr.
					 * ptr now points to the start of the array, which is the first elemnt 'l'
					 */

	ptr += 6;		/* adds 6 to current address stored within ptr
					 * character addresses go up by 1 Byte
					 * Therefore, ptr moves up 6 Bytes
					 * ptr initially points to first element
					 * the ptr should now point at the 7th element of the string, which is 'C'
					 */

	printf("%s",ptr);  // Prints string starting from where ptr points to ('C') and stops when it finds a '\0' character at end of string
	return 0;

}
