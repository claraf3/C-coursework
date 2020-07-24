/*
 ============================================================================
 Name        : Practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int bin(int n);
//int* axe(int n);

int main() {


	printf("%d", bin(23));

//	int* ptr = axe(3);
//
//	for(int i = 0; i <= sizeof(ptr); i++){
//		printf("%d\n", ptr[i]);
//	}

//	int* ptr = bin(23);
//
//	for(int i = 0; ptr[i] == 0 || ptr[i] == 1; i++){
//		printf("%d", ptr[i]);
//	}




}

//
//int bin(int n){
//
//	static int total =0;
//	static int count = 1;
//
//	if(n < 1)
//		return total;
//
//	total = total + (n%2)*count;
//	count *= 10;
//
//	return bin(n/2);
//}
//


int bin(int n){

	int rem;

	if(n < 1)
		return 0;

	rem = n%2;

	return rem + (bin(n/2)*10);
}






//int* bin(int n){
//
//	static int a[32];
//	static int x = 0;
//
//	if(n < 1)
//		return a;
//
//	a[x] = n%2;
//	x++;
//
//	return bin(n/2);
//
//}

//int* axe(int n){
//
//	static int a[32];
//	static int x = 0;
//
//	for(int i = 0; i <= 10; i++){
//		a[i] = n+2;
//		n++;
//	}
//
//	return a;
//}




//check if a year is leap year (divisible by 4, century years divisible by 400)
//===================================================================================
//	int year;
//	printf("Please enter a year:");
//	fflush(stdout);
//	scanf("%d", &year);
//
//	if(year%100 == 0){
//			if (year%400==0)
//				printf("It is a leap year");
//			else
//				printf("It is NOT a leap year, sorry");
//		}
//	else if(year%4==0)
//			printf("It is a leap year");
//
//	else
//			printf("It is NOT a leap year, boo");






//program to display sequence of fibonacci numbers for n terms (n numbers of fibonacci numbers
//starting from 0)=========================================================================

//	int n;
//	long long a=0, b=1, c;
//	printf("Please enter the number of fibonacci sequence:");
//	fflush(stdout);
//	scanf("%d", &n);
//
//	for(int i=0; i< n; i++){
//
//		printf("%ld ", a);
//		c=a+b;
//		a=b;
//		b=c;
//	}





//program to calculate the highest common denominator (GCD) between two integers
//===============================================================================================

//	int a, b, i=1, small=0, large=0;
//	printf("Enter two integers:");
//	fflush(stdout);
//	scanf("%d %d", &a, &b);
//
//
//
//	while(i<=a && i<=b){
//		if(a%i==0 && b%i==0){
//			small=i;
//
//			//NOT NEED BECAUSE the latest i will always be larger than the previous i
//			//==========================================
//			if(small>large)
//				large=small;
//		}
//		i++;
//
//	}
//	printf("The largest common demoniator is: %d ", large);





//program to calculate the lowest common denominator (LCD) between two integers
//===============================================================================================


//		int a, b, i, lcd;
//		printf("Enter two integers:");
//		fflush(stdout);
//		scanf("%d %d", &a, &b);
//
//		for(i=(a<b)?a:b; i>1; i--){
//			if(a%i==0 && b%i==0)
//				lcd=i;
//		}
//
//		printf("The lowest common demoniator is: %d", lcd);







//program to calculate the lowest common MULTIPLE (LCD) between two integers
//===============================================================================================

//	int a, b, i=1, lcm;
//	printf("Enter two integers:");
//	fflush(stdout);
//	scanf("%d %d", &a, &b);
//
//
//	while(1){
//		if((a*i)%b==0){
//			lcm=a*i;
//			break;
//		}
//		i++;
//	}
//
//	printf("The LCD of %d and %d is: %d", a, b, lcm);






//program to calculate power of a number
//===============================================================================================

//
//	int base, exponent, count, total;
//
//	printf("Enter the base: ");
//	fflush(stdout);
//	scanf("%d", &base);
//	printf("Enter the exponent:");
//	fflush(stdout);
//	scanf("%d", &exponent);
//
//	total=base;
//
//	for(count=exponent-1; count>0; count--){
//		total = total*base;
//	}
//	printf("The result is %d", total);


				//improved version
				//==================================================================================


			//	int base, exponent, total;
			//
			//	printf("Enter the base: ");
			//	fflush(stdout);
			//	scanf("%d", &base);
			//	printf("Enter the exponent:");
			//	fflush(stdout);
			//	scanf("%d", &exponent);
			//
			//	total=1;
			//
			//	while(exponent>0){
			//		total = total*base;
			//		exponent--;
			//	}
			//
			//	printf("The result is %d", total);
			//







					

//(WORKS) program to see if a positive integer is a prime number
//===============================================================================================
//
//	int i, test=2, div =0;
//
//	printf("Please enter an integer:");
//	fflush(stdout);
//	scanf("%d", &i);
//
//	while(test <i){
//
//		if(i%test ==0){
//			printf("It is divisible by %d, hence it is not a prime number", test);
//			++div;
//			break;
//		}
//
//		else test++;
//	}
//	if(div==0)
//	printf("It is a prime number");
//
//







// (WORKS) program to print all prime numbers in between two integers
//===============================================================================================

//int a, b, i, test=2, small, big;
//printf("Please enter an interval of integers: ");
//fflush(stdout);
//scanf("%d %d", &a, &b);
//
//small = ((a<b)?a:b)+1;
//big= (a<b)?b:a;
//
//while(small< big){
//
//	test=2;
//
//	while(test < small && small < big){
//		if(small%test ==0){		//if not prime, move on to next i
//			++small;
//			test=2;
//			continue;
//		}
//
//		else ++test;
//	}
//	if(small !=big)
//	printf("%d ", small);
//
//	small++;
//}
//



						//improved version (1)
						//==============================================================

//						int a, b, i, test=2;
//						printf("Please enter an interval of integers: ");
//						fflush(stdout);
//						scanf("%d %d", &a, &b);
//
//						i = a+1;
//
//						while(i<b){
//
//							test=2;
//
//							while(test <i && i<b){
//								if(i%test ==0){		//if not prime, move on to next i
//									++i;
//									test=2;
//									continue;
//								}
//
//								else ++test;
//							}
//							if(i !=b)
//							printf("%d ", i);
//
//							i++;
//						}






						//improved version (2) including when larger number entered first
						//==============================================================


//						int a, b, i, count, x, y;
//						printf("Please enter two integers: ");
//						fflush(stdout);
//						scanf("%d %d", &x, &y);
//
//						//a will always carry the smaller number:
//						if(x<y){a=x; b=y;}
//						if(x>y){a=y; b=x;}
//
//						a+=1;
//
//						while(a<b){
//							for(i=2, count=0; i<a; i++){
//								if(a%i ==0){
//									++count;
//									break;
//								}
//							}
//							if(count==0)
//								printf("%d ", a);
//							a++;
//
//						}
//







//Program to check and see if a 3 digit integer is an armstrong number
//=============================================================================================

//int i, n, sum=0, og;
//printf("Please enter a 3 digit positive integer:");
//fflush(stdout);
//scanf("%d", &i);
//
//og=i;
//
//while(i != 0){
//		n = i%10;
//		//printf("modulus is %d\n", n);//n=1
//		i /= 10;			//i=0
//		sum += pow(n, 3);
//		//printf("Sum so far is: %d\n", sum);//sum= 27+125+1=153
//}
//
//if(sum==og)
//	printf("%d is an Armstrong number", og);
//
//
//else{
//	printf("%d is NOT an Armstrong number\n", og);

//return 0;
//}
//




//Program to check and an n digit integer is an armstrong number
//=============================================================================================

//int i, sum, digits;
//printf("Please enter an integer:\n");
//fflush(stdout);
//scanf("%d", &i);
//
//int og=i, og2=i;
//
//for(digits = 0; i !=0; digits++)
//	i/=10;
//
//while(og!=0){
//	sum += pow(og%10, digits);
//	og/=10;
//}
//
//if(sum==og2)
//	printf("%d is an armstrong number", og2);
//else
//	printf("%d is NOT an armstrong number", og2);
//
//return 0;
//







//Program to print armstrong numbers between two integers
//=============================================================================================


//int low, high, digits, oglow;
//printf("Please enter two interval of integers:");
//fflush(stdout);
//scanf("%d %d", &low, &high);
//
//low +=1; //2
//
////low =2
////high =9999
//
//
//
//while(low<high){ //low=2
//
//	for(digits = 0, oglow=low; oglow !=0; digits++)  //digits=1 	//oglow=0
//			oglow/=10;
//
//	int sum=0;
//
//	for(int n = low; n!=0; n/=10) //n = 0
//		sum+= pow(n%10, digits); //sum= 2
//	if(sum==low)
//		printf("%d ", low);
//	low++;
//}
//
//
//






//Program to print factors of an integers
//=============================================================================================

//int i;
//printf("Please enter an integer: ");
//fflush(stdout);
//scanf("%d", &i);
//
//for(int count=1; count <= i; count++){
//	if(i%count==0){
//		printf("%d, \n", count);
//	}
//	//else printf("%d is not a factor because %d mod %d is %d\n", count, i, count, i%count);
//}
//




//}
