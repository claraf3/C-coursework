/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROW 4
#define COL 5

void viewbyid(int array[ROW][COL]);
void viewall(int array[ROW][COL]);
void highlow(int array[ROW][COL]);

int main(void) {



	int stu[4][5]={{1232,32,34,43,83},{2345,34,34,54,27},{3432,45,54,56,66},{3456,56,34,34,83}};

	int choice;
	printf("Enter 1 to view all scores\nEnter 2 to view by id\nEnter 3 to see highest and lowest score\n");
	printf("Please state what record you want to see:");
	fflush(stdout);
	scanf("%d", &choice);

	switch(choice)
	{
	case 1:
		viewall(stu);
		break;

	case 2:
		viewbyid(stu);
		break;

	case 3:
		highlow(stu);
		break;
	}

}


void viewbyid(int array[ROW][COL])
{
	int id;
	printf("Please enter student id: \n");
	fflush(stdout);
	scanf("%d", &id);

	for(int i = 0; i < ROW; i++)
	{
		if(array[i][0] == id)
		{
			for(int y = 1; y < COL; y++)
			{
			printf("Quiz %d score is: %d\n", y, array[i][y]);
			}
		}
	}
}




void viewall(int array[ROW][COL])
{
	printf("StuID\tQuiz1\tQuiz2\tQuiz3\tQuiz4\n");
	for(int i = 0; i< ROW; i++)
	{
		for(int y = 0; y < COL; y++)
		{
		printf("%d\t", array[i][y]);
		}
		printf("\n");
	}
}


void highlow(int array[ROW][COL])
{
	int high = 0;
	int low = 100;

	/*to find highest score*/
	for(int i = 0; i < ROW; i ++)
	{
		if(array[i][COL-1] > high)
			high = array[i][COL-1];
	}

	/*to find lowest score*/
	for(int i = 0; i < ROW; i++)
	{
		if(array[i][COL-1] < low)
			low = array[i][COL-1];
	}

	printf("The highest score is: %d and lowest score is: %d\n", high, low);
}
