/*
 ============================================================================
 Name        : Ass3_q3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */



typedef struct nd
{
	int data;
	struct nd* next;
}node;


#include <stdio.h>
#include <stdlib.h>

static node *createList();
void printdata(node* head);
static node *swapSmallest(node *head);
static node* sortAscend(node* head);
node *insert(node *head, node *addition);


int main(void) {

	node *originalList, *sortedList, *addition, *newList = NULL;
	int new;


	/*create and initialize list with data*/
	originalList = createList();
	if(NULL == originalList)
		return 0;
	printf("Original list is: \n");
	printdata(originalList);


	/*sort list in Ascending order*/
	sortedList = sortAscend(originalList);
	printf("Sorted list is:\n");
	printdata(sortedList);


	/*create additional list to be added*/
	addition = (node*)malloc(sizeof(node));
	if(NULL == addition)
	{
		printf("mem alloc error");
		return 0;
	}
	printf("Please enter number to insert:\n");
	fflush(stdout);
	scanf("%d", &new);
	addition->data = new;


	/*insert new element into existing linked list*/
	newList = insert(sortedList, addition);
	if(NULL == newList)
		return 0;

	/*print new list with inserted data*/
	printf("New list with inserted value:\n");
	printdata(newList);
}



/*
 * function to create and
 * initialize a linked list
 */
static node *createList()
{
	 node *p = NULL, *head = NULL;
 	int num = 0;

 	printf("Please enter number of lists to create for the linked list:\n");
 	fflush(stdout);
 	scanf("%d", &num);

 	for(int i = 0; i < num; i++)
 	{
 		if(i == 0)
 		{
 			/*create head if it doesn't exist*/
 			head = (node *)malloc(sizeof(node));
 			if(NULL == head)
 			{
 				printf("mem fail");
 			}

 			/*ask for user input for data value*/
 			printf("please assign value to head:\n");
 			fflush(stdout);
 			scanf("%d", &head->data);

 			/*assign head to first p*/
 			p = head;
 		}
 		else
 		{
 			/*allocate memory for next list*/
 			p->next = (node *)malloc(sizeof(node));
 			if(NULL == p->next)
 			{
 				return NULL;
 			}

 			/*move pointer to the list just created*/
 			p = p->next;


 			/*ask for user input on data value*/
 			printf("please enter value for list data:\n");
 			fflush(stdout);
 			scanf("%d", &p->data);
 		}
 		/*assign the last list to point to NULL*/
 	}
 	p->next = NULL;
 	return head;
}



/*this function prints the data element
 * of the linked lists for both linear & circular lists
 */
void printdata(node* head)
{
	node *p = head;
	int i = 1;
	while(p != NULL)
	{
		printf("Value of list %d is:%d\n", i, p->data);
		i++;
		p = p->next;

		/*check for circular list*/
		if(p == head)
			break;
	}
	printf("\n");
}



/*this function inserts a list
 * into a sorted LINEAR list
 */
node *insert(node *head, node *addition)
{

	node* p = head, *tmp;
	while(p != NULL)
	{
		/*if addition is smaller than first value*/
		if(addition->data < head->data)
		{
			addition->next = head;
			return addition;
		}
		/*if addition is larger than last value*/
		else if(p->next == NULL || p->next == head)
		{
			p->next = addition;
			addition->next = NULL;
			return head;
		}

		/*else*/
		else if((addition->data > p->data && addition->data < p->next->data) || addition->data == p->data)
		{
			tmp = p->next;
			p->next = addition;
			addition->next = tmp;
			return head;
		}
		p = p->next;
	}
}


/*this function sorts a linear list in ascending order
 * based on the lists' data member
 */
static node* sortAscend(node* head)
{
	node *tmp = head, *chain, *newhead = NULL;

	while(tmp != NULL)
	{
		/*find smallest value in linked list*/
		tmp = swapSmallest(tmp);

		/*save smallest value as new head
		 * and start chain from the smallest value
		 */
		if(NULL == newhead)
		{
			newhead = tmp;
			chain = newhead;
		}

		/*have chain point to the next smallest value that is returned by swapSmallest()
		 * and move chain up
		 */
		else
		{
			chain->next = tmp;
			chain = chain->next;
		}
		/*traverse up the list*/
		tmp = tmp->next;
	}
	return newhead;
}




/*this function finds the smallest value among the linked lists
 * and swaps its with with the head
 * i.e. 	5 -> 4 -> 3 -> 2 -> 1
 * becomes	1 -> 4 -> 3 -> 2 -> 5
 */
static node *swapSmallest(node *head)
{

	node *p = head, *smallest_prev = NULL, *smallest = head, *tmp = NULL;

	/*find position of smallest value and store into smallest pointer*/
	while(p != NULL)
	{
		if(p->next != NULL && (p->next->data) < smallest->data)
		{
			smallest_prev = p;
			smallest = p->next;
		}
		p = p->next;
	}

	/*if head holds smallest value*/
	if(smallest == head)
	{
		return head;
	}

	/*if head->next holds smallest value*/
	else if(head->next == smallest)
	{
		//printf("head->next == smallest executed \n");
		tmp = smallest->next;
		smallest->next = smallest_prev;
		smallest_prev->next = tmp;
	}

	/*if the last list holds the smallest value*/
	else if(smallest->next == NULL)
	{
		smallest->next = head ->next;
		smallest_prev->next = head;
		head->next = NULL;
	}

	/*smallest value is in other positions otherwise*/
	else
	{

		tmp = head->next;
		head->next = smallest->next;
		smallest->next = tmp;
		smallest_prev->next = head;
	}

	return smallest;
}

