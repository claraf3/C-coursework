/*
 ============================================================================
 Name        : Ass3_q1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


typedef struct list
{
	int intone;
	float floatone;
	struct list* next;

}myList;




#include <stdio.h>
#include <stdlib.h>

static myList *createList();
void concatenate(myList *ptr1, myList *ptr2);
int countLists(myList *p);


int main(void) {

	myList *list1, *list2;

	/*create two linked lists and check for null*/
	list1 = createList();
	if(NULL == list1)
	{
		return EXIT_FAILURE;
	}

	list2 = createList();
	if(NULL == list2)
	{
		return EXIT_FAILURE;
	}

	/*show size of each linked lists*/
	printf("list 1 contains %d linked lists\n", countLists(list1));
	printf("list 2 contains %d linked lists\n", countLists(list2));

	/*concatenate list2 onto list1*/
	concatenate(list1, list2);

	/*print new size of list 1 after adding list 2 onto it*/
	printf("list 1 now contains %d linked lists after concatenation\n", countLists(list1));


}



static myList *createList()
{
	myList *p = NULL, *head = NULL;
	int num = 0;

	printf("Please enter number of lists to create for the linked list:\n");
	fflush(stdout);
	scanf("%d", &num);

	for(int i = 0; i < num; i++)
	{
		if(NULL == head)
		{
			/*create head if it doesn't exist*/
			head = (myList *)malloc(sizeof(myList));
			if(NULL == head)
			{
				printf("mem fail");
			}
			/*assign head to first p*/
			p = head;
		}
		else
		{
			/*allocate memory for next list*/
			p->next = (myList *)malloc(sizeof(myList));
			if(NULL == p->next)
			{
				return NULL;
			}
			/*move pointer to the list just created*/
			p = p->next;
		}
		/*assign the last list to point to NULL*/
	}
	p->next = NULL;
	return head;
}

int countLists(myList *p){
	int count = 0;
	while(p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;

}

void concatenate(myList *ptr1, myList *ptr2)
{
	/*find the address of last list on linked list 1*/
	while(ptr1->next != NULL)
	{
		ptr1 = ptr1->next;
	}
	/*make the last list on list 1 point to the head of list 2*/
	ptr1->next = ptr2;
}


