/*
 ============================================================================
 Name        : Ass3_q2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ==
 ==========================================================================
 */

typedef struct nd
{
	int i;
	struct nd* next;
}node;



#include <stdio.h>
#include <stdlib.h>

static node* createLinear();
static node* createCircular();
int checktype(node *head);

int main(void) {

	node *list1, *list2;
	int result;

	/*create linear list*/
	list1 = createLinear();
	if(NULL == list1)
	{
		return EXIT_FAILURE;
	}


	/*create circular list*/
	list2 = createCircular();
	if(NULL == list2)
	{
		return EXIT_FAILURE;
	}


	/*check list1 (linear)
	 * linear returns "true"
	 * circular returns "false"
	 */
	printf("checking list1:\n");
	result = checktype(list1);

	if(result == 0)
	{
		printf("linked list is circular\n\n");
	}
	else if(result == 1)
	{
		printf("linked list is linear\n\n");
	}


	/*check list2 (circular)
		 * linear returns "true"
		 * circular returns "false"
		 */
	printf("checking list2:\n");
	result = checktype(list2);

	if(result == 0)
	{
		printf("linked list is circular\n");
	}
	else if(result == 1)
	{
		printf("linked list is linear\n");
	}





}

static node* createLinear()
{
	int num = 0;
	node *head = NULL, *p = NULL;

	printf("enter number of list for this linear list:\n");
	fflush(stdout);
	scanf("%d", &num);

	/*create list*/
	for(int i = 0; i < num; i++)
	{
		if(NULL == head)
		{
			head = (node*)malloc(sizeof(node));
			if(NULL == head)
			{
				return NULL;
			}
			p = head;
		}
		else
		{
			p->next = (node*)malloc(sizeof(node));
			if(NULL == p->next)
			{
				return NULL;
			}
			p = p->next;
		}
	}
	/*make end of list point to NULL*/
	p->next = NULL;
	return head;
}

static node* createCircular()
{
	int num = 0;
	node *head = NULL, *p = NULL;

	printf("enter number of list for this circular list:\n");
	fflush(stdout);
	scanf("%d", &num);

	/*create list*/
	for(int i = 0; i < num; i++)
	{
		if(i == 0)
		{
			head = (node*)malloc(sizeof(node));
			if(NULL == head)
			{
				printf("cannot create head");
				return NULL;
			}
			p = head;
		}
		else
		{
			p->next = (node*)malloc(sizeof(node));
			if(NULL == p->next)
			{
				printf("cannot create list");
				return NULL;
			}
			p = p->next;
		}
	}

	/*make end of list point to head*/
	p->next = head;
	return head;
}


int checktype(node *head)
{

	node *p = head;
	p = p->next;

	/*check for circular and return 0 if circular*/
	while(p != NULL)
	{
		if(p == head)
		{
			return 0;
		}
		p = p->next;
	}
	/*else return 1*/
	return 1;
}
