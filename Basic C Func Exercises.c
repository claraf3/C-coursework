/*
 ============================================================================
 Name        : Basic.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorialsum(int x);
int rec_factorialsum(int x);
int dec_to_bin(int x);
int rec_decToBin(int x);
int isPrime(int x);
int rec_isPrime(int x);
int largest_num(int arr[], int end_index);
int recur_largest_num(int arr[], int arr_size, int start_index);
int rec_div_sum(int x);
int isPerfectNum(int x);
rec_isPerfectNum(int x);

int main(void) {

//	printf("%d\n", factorialsum(5));


//	printf("%d\n", rec_factorialsum(5));


//	printf("%d", dec_to_bin(23));



//	int rec_intToBin(int x);


//	printf("%d", rec_decToBin(23));

//
//	int result1 = isPrime(99);
//	if(result1 == 0)
//		printf("It is not a prime\n");
//	else printf("It is a prime number\n");

//	int result2 = rec_isPrime(499);
//		if(result2 == 0)
//			printf("It is not a prime\n");
//		else printf("It is a prime number\n");



//	int arr[5] = {932, 432, 32, 422, 50};
//	//printf("%d\n", largest_num(arr, 5));
//	printf("%d\n", recur_largest_num(arr, 5, 0));



	//int result = isPerfectNum(34);

	int result = rec_isPerfectNum(39);
	if(result == 1)
		printf("It is a perfect number");

	else printf("It is not a perfect number");
}

/* Write a program in C to find the sum of the series
 * 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
 * -----------------------------------------------------------
 */

int factorialsum(int x)
{
	int factorial = 1;
	int count = x;
	int partial = 0;
	int total = 0;

	while(count > 0)
	{
		while(x > 0){
			factorial = factorial * (x);
			x--;
		}

		partial = factorial/count;
		total = total + partial;

		count --;
		x = count;
		factorial = 1;

	}

	return total;
}


/*
 * RECURSIVE version of the above program to find sum of factorials
 */

int rec_factorialsum(int x)
{
	int factorial = 1;
	int partial;
	int count = x;

	if (x == 1)
		return 1;

	while(count > 0){
			factorial = factorial * (count);
			count--;
	}

	partial = factorial/x;


	return partial + rec_factorialsum(x-1);
}



/*
 * Write a program in C to convert decimal number to binary number using the function
 */
int dec_to_bin(int x)
{
	int count = 0;
	int sum = 0;

	while(x >0)
	{
		sum = sum + (x%2)*pow(10, count);
		count++;
		x /= 2;
	}
	return sum;
}

/*
 * RECURSIVE version of the above program
 * to convert integer to binary
 * -------------------------------------------------------------------
 */
int rec_decToBin(int x)
{

	static int count = 0;

	if(x == 0)
		return 0;

	int n = x%2*pow(10,count);

	count++;

	return n + rec_decToBin(x/2);

}


/*
 * check if number is prime
 * with an integer x as parameter
 * -----------------------------------------------------------------
 */

int isPrime(int x)
{
	int start = 2;

	while(start < x)
	{
		if(x%start == 0)
			return 0;

		else start++;
	}
	return 1;
}


/*
 * RECURSIVE version of
 * checking whether an integer is a prime number
 * -------------------------------------------------------------------
 */

int rec_isPrime(int x)
{
	static int count = 2;

	if(count == x)
		return 1;

	if(x%count == 0)
		return 0;

	count++;

	return rec_isPrime(x);
}


/*
 * Program to get largest number of inside an array
 * takes array size as end_index parameter
 */

int largest_num(int arr[], int arr_size)
{
	int largest = 0;
	int x = 0;

	while(x < arr_size){
		if(largest < arr[x])
			largest = arr[x];

		x++;
	}
	return largest;

}


/**
 * recursive version of
 * retrieving the largest number in an array
 */
int recur_largest_num(int arr[], int arr_size, int start_index)
{



	if(start_index == arr_size - 1)
		return arr[start_index];

	int current = arr[start_index];

	return (current>recur_largest_num(arr, arr_size, start_index+1))? current:recur_largest_num(arr, arr_size, start_index+1);

}

/**
 * check if an int is a perfect number
 * perfect number means a sum of its divisor is equal to the number itself
 * i.e. 6 is perfect number because divisor of 6 is 1, 2, 3,
 * 	1+2+3 = 6
 */
int isPerfectNum(int x)
{
	int div = 2;
	int sum = 1;

	while(div < x)
	{
	if(x%div == 0)
		sum = sum + div;

	div++;
	}

	if(sum==x)
		return 1;

	else return 0;
}


/**
 * RECURSIVE version of checking whether
 * an integer is a perfect number 33
 */
int rec_div_sum(int x)
{
	static int count = 1;
	int temp = 0;

	if(count == x)
		return 0;

	if(x%count == 0)
		temp = count;

	count++;

	return temp+rec_div_sum(x);
}

int rec_isPerfectNum(int x)
{
	if(x == rec_div_sum(x))
		return 1;

	else return 0;
}



