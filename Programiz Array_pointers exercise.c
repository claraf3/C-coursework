/*
 ============================================================================
 Name        : Programiz.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

float calculateSD(float data[], int size);
int pointersum(int x, int y);
int refsum(int *x, int *y);
int callen(char *string);
void findfact(int n, int *ptrfact);
void findvowcon(char *string, int *vow, int *con);
void sortarray(int *array, int size);
void sortdescend(int *p, int size);
void reverseString(char *ptr, int size);
void reverseString2(char **ptr);

int main(void) {




/*
 * Store numbers and calculate
 * average using arrays
 * ----------------------------------------------------------------------------------------------------
 */

//	int n = 0;
//	int* ptr = NULL;
//	printf("Enter number of elements:");
//	fflush(stdout);
//	scanf("%d", &n);
//
//	/*check input value*/
//	if(n <= 0 || n > 100)
//	{
//		printf("Error - Please enter value between 1 and 100");
//		return EXIT_FAILURE;
//	}
//
//	ptr = (int*) calloc(n, sizeof(int));
//
//	/*check for NULL */
//	if(NULL == ptr)
//	{
//		printf("memory allocation failed");
//	}
//	else
//	{
//		int total = 0;
//		printf("Please enter value for:\n");
//
//
//		/*store user input*/
//		for(int i = 0; i < n; i++){
//			printf("Element %d:\n", i);
//			fflush(stdout);
//			scanf("%d", ptr+i);
//		/*calculate total*/
//			total = total + ptr[i];
//		}
//
//		printf("The average is: %d\n", total/n);
//
//		free(ptr);
//		ptr = NULL;
//
//		return EXIT_SUCCESS;
//	}
//



	/*
	 * to test calculateSD()
	 * -------------------------------------------------------------------------------------------
	 */

//	float data[] = {9.33, 7.23, 7.23, 17.23, 18.23, 2.56, 5.33};
//
//	printf("The standard deviation is %0.2f\n", calculateSD(data, 7));








	/*
	 * to create two matrices in a multi-dimensional array and
	 * print values
	 * ---------------------------------------------------------------------------------------------
	 */
//	int r, c;
//
//	printf("Enter number of rows:");
//	fflush(stdout);
//	scanf("%d", &r);
//
//	printf("Enter number of columns:");
//	fflush(stdout);
//	scanf("%d", &c);
//
//	int matrix1[r][c];
//	int matrix2[r][c];
//	int sum[r][c];
//
//	printf("Matrix 1 values as follows:\n");
//
//	/* store value into matrix 1*/
//	for(int i = 0; i < r; i++)
//	{
//		for(int y = 0; y < c; y++)
//		{
//			printf("Value for row%d column%d:", i+1, y+1);
//			fflush(stdout);
//			scanf("%d", &matrix1[i][y]);
//		}
//		printf("\n");
//	}
//
//	/*store values into matrix 2*/
//	printf("Matrix 2 values as follows:\n");
//
//	/* store value into matrix 2*/
//	for(int i = 0; i < r; i++)
//	{
//		for(int y = 0; y < c; y++)
//		{
//			printf("Value for row%d column%d\n", i+1, y+1);
//			fflush(stdout);
//			scanf("%d", &matrix2[i][y]);
//		}
//		printf("\n");
//	}
//
//	printf("The sum of the two matrices is:\n");
//
//	/*add and print matrices together*/
//	for(int i = 0; i <r; i++)
//	{
//		for(int y = 0; y < c; y++)
//		{
//			sum[i][y] = matrix1[i][y] + matrix2[i][y];
//			printf("%d\t", sum[i][y]);
//		}
//		printf("\n");
//	}
//
//
//	return EXIT_SUCCESS;



/*
 * to test
 * pointersum()
 * --------------------------------------------------------------------
 */
//
//	int a = 2;
//	int b = 7;
//	printf("The sum is %d\n", pointersum(a,b));




/*to test
 * refsum()
 * ---------------------------------------------------------------------
 */

//	int a= 3;
//	int b = 13;
//
//	printf("The sum is %d\n", refsum(&a, &b));
//







/*
 * program in C to store n elements in an array and print the elements using pointer
 * ---------------------------------------------------------------------
 */

//	int size;
//	int array[25] = {0};
//	printf("enter size of array under 25:\n");
//	fflush(stdout);
//	scanf("%d", &size);
//
//	while(size > 25)
//	{
//		printf("Error, please input value less than or equal to 25:");
//		fflush(stdout);
//		scanf("%d", &size);
//	}
//
//	int *ptr = array;
//
//	/*store input into array*/
//	for(int i = 0; i < size ; i++)
//	{
//		printf("Enter value for element %d:\n", i);
//		fflush(stdout);
//		scanf("%d", ptr+i);
//	}
//
//
//	printf("Values stored are: ");
//	/*print store values in array*/
//	for(int i = 0; i < size; i++)
//	{
//		printf("%d ", *(ptr+i));
//	}








/*to test
 * calstr()
 * -------------------------------------------------------
 */

//	char string[100];
//	printf("Please enter a string:");
//	fflush(stdout);
//	fgets(string, sizeof(string), stdin);
//	printf("The string length of %s is %d\n", string, callen(string)-2);




/*
 * to test
 * findfact()
 * ------------------------------------------------------
 */

//	int n = 5;
//	int fact = 1;
//
//	findfact(n, &fact);
//
//	printf("The factorial of %d is: %d\n", n, fact);






/*
 * to test
 * findvowcon()
 * ---------------------------------------------------------------
 */

//	int vow = 0;
//	int con = 0;
//	char string[25];
//
//	printf("Please enter a string:\n");
//	fflush(stdout);
//	fgets(string, sizeof(string), stdin);
//
//	findvowcon(string, &vow, &con);
//
//	printf("The string is: %s\n", string);
//	printf("There are %d vowels and %d consonants\n", vow, con);







/*
 * program to sort array
 * ------------------------------------------------------------------------
 */
//	int temp = 0;
//
//	int a[10] = {76, 23, 8, 13, 99, 432, 43, 87, 52, 99};
//
//
//
//	for(int i = 0; i < sizeof(a)/sizeof(int)-1; i++){
//		for(int y = i+1; y < sizeof(a)/sizeof(int); y++)
//		{
//
//			if(a[y] < a[i])
//			{
//				temp = a[i];
//				a[i] = a[y];
//				a[y] = temp;
//			}
//		}
//	}
//	for(int i = 0; i < sizeof(a)/sizeof(int); i++)
//	{
//		printf("[%d] ", a[i]);
//	}




/*
 * to test sortarray()
 * -----------------------------------------------------------------------------
 */

//	int array[10] = {76, 23, 8, 13, 99, 432, 43, 87, 52, 99};
//
//	sortarray(array, 10);
//
//		for(int i = 0; i < sizeof(array)/sizeof(int); i++)
//		{
//			printf("[%d] ", array[i]);
//		}



/*
 * to test sortdescend()
 */
//int size;
//printf("Please enter number of elements to store in array. (Max 10):");
//fflush(stdout);
//scanf("%d", &size);
//
//int array[15] = {0};
//
//sortdescend(array, size);
//
//for(int i = 0; i < size; i++)
//{
//	printf("Element %d's value is: %d\n", i, array[i]);
//}



/*
* Function to print all alphabets using a pointer
*/

//	char *ptr;
//	char upperA[26];
//	char lowerA[26];
//	char upper = 'A';
//	char lower = 'a';
//
//	for(int i = 0; i < 26; i++)
//	{
//		upperA[i] = upper++;
//	}
//
//	for(int i = 0; i < 26; i++)
//	{
//		lowerA[i] = lower++;
//	}
//
//	ptr = upperA;
//
//	for(int i = 0; i < 26; i++)
//	{
//		printf("%c ", *(ptr+i));
//	}
//
//	ptr = lowerA;
//
//	for(int i = 0; i < 26; i++)
//	{
//		printf("%c ", *(ptr+i));
//	}







/*
 * to test void reverseString(char *ptr, size)
 * which prints a stirng array in reverse order
 */

//	char *string = NULL;
//	string = calloc(30, sizeof(char));
//	/*test for null pointer*/

//	char string[30] = "";
//
//	printf("Please enter a string under 30 characters:\n");
//	fflush(stdout);
//	fgets(string, sizeof(string), stdin);
//
//	int size = strlen(string) -2;
//
//	reverseString(string, size);



/*
 * to test reverseString2 which
 * prints string in reverse order using double pointer
 */

//	char *string = "testing me";
//	reverseString2(&string);




















}

/*==================================================================================================================
 * =================================================================================================================
 */
/*
 * Function to calculate standard deviation
 * of an array of data
 */
float calculateSD(float data[], int size)
{
	float total, avg, sd;

	for(int i = 0; i <size; i++)
	{
		total = total + data[i];
	}

	avg = total/size;
	total = 0;

	for(int i = 0; i <size; i++)
	{
		total = total + pow(avg-data[i], 2);
	}

	sd = sqrt(total/size);

	return sd;

}



/*
 * Function to add two numbers using pointers
 */
int pointersum(int x, int y)
{
	int *ptrx = &x;
	int *ptry = &y;

	int sum = *ptrx + *ptry;

	return sum;
}




/*Function to add two numbers
 * using call by reference
 * use pointers as parameters
 */
int refsum(int *x, int *y)
{
	return *x + *y;
}




/*
 * Program to calculate
 * length of string using pointer
 */

int callen(char *string)
{
	int count = 0;
	while(*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}




/*program to find factorial
 * using pointer
 */

void findfact(int n, int *ptrfact)
{
	for(int i = n; i > 0; i--)
	{
		*ptrfact = *ptrfact * i;
	}

	EXIT_SUCCESS;
}




/*program to find
 * constants and vowels in a string
 */

void findvowcon(char *string, int *vow, int *con)
{



	while(*string != '\0')
	{

		if((*string >= 'A' && *string <= 'Z') || (*string >= 'a' && *string <= 'z'))
		{
			if(*string == 'a' || *string == 'e' ||*string == 'i' ||*string == 'o' ||*string == 'u' ||
			   *string == 'A' || *string == 'E' ||*string == 'I' ||*string == 'O' ||*string == 'U')
			{
				(*vow)++;
			}
			else
			{
				(*con)++;
			}
		}
		string++;
	}
}


void sortarray(int *array, int size)
{
	for(int i = 0; i < size-1; i ++)
	{
		for(int y = i+1; y < size; y++)
		{
			if(array[y] > array[i])
			{
				array[i] += array[y];
				array[y] = array[i] - array[y];
				array[i] -= array[y];
			}
		}
	}
}



/*
 * Function to print elements of array in descending order
 */
void sortdescend(int *p, int size)
{
	/*take input from user*/
	for(int i = 0; i < size; i++)
	{
		printf("Enter value for element %d\n", i);
		fflush(stdout);
		scanf("%d", &p[i]);
	}

	/*sort descending order*/
	for(int i = 0; i < size; i++)
	{
		for(int y = i+1; y < size; y++)
		{
			if(p[y] > p[i]){
				p[i] += p[y];
				p[y] = p[i] - p[y];
				p[i] -= p[y];
			}
		}
	}
}



/*
 * Function to print string in reverse order
 */
void reverseString(char *ptr, int size)
{
	printf("size is %d\n", size);
	for(int i = size - 1; i >=0; i--)
	{
		printf("%c", ptr[i]);
	}
}





/*
 * Function to print string in reverse order
 * using double pointer
 */
void reverseString2(char **ptr)
{
	for(int i = strlen(*ptr)-1; i >= 0 ; i--)
	{
		printf("%c", ptr[0][i]);
	}
}




