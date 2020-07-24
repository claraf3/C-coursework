/*
 ============================================================================
 Name        : LinkedList_practice.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
typedef struct nd
{
	int i;
	float f;
	struct node* next;
	int data;
}node;

#include <stdio.h>
#include <stdlib.h>



void ini_nodes(node *p);
void printdata(node *p);
node* create_list();static
node* delete(node *head, int value);
static node *swapSmallest(node *head);
node *delete_smallest(node *head);
int countLists(node *p);
static node* sortAscend(node* head);


int main(void) {
//
//	node *one = NULL;
//	node *two = NULL;
//	node *three = NULL;
//
//
//	/*create three structs*/
//	one = (node *)malloc(sizeof(one));
//	if(NULL == one)
//		{
//			printf("can't create one");
//		}
//
//	two = (node *)malloc(sizeof(two));
//	if(NULL == two)
//		{
//			printf("can't create two");
//		}
//
//	three = (node *)malloc(sizeof(three));
//	if(NULL == three)
//		{
//			printf("can't create three");
//		}
//
//
//	/*connect them*/
//	one->next = two;
//	two->next = three;
//	three->next = NULL;
//
//
//
//	ini_nodes(one);
//	printdata(one);


/*
 * to test create_list()
 */

	node* head = NULL;
	printf("head is originally: %p\n", head);
	head = create_list();
	printf("head is now: %p\n", head);

	ini_nodes(head);
	printdata(head);


}

void ini_nodes(node *p)
{
	while(p != NULL)
	{
		p->i = 22;
		p->f = 10.50;
		p = p->next;
	}
}

void printdata(node *p)
{
	while(p!= NULL)
	{
		printf("%d\t%0.2f\n", p->i, p->f);
		p = p->next;
	}

	printf("next p is %p", p);
}

node* create_list()
{
	node *head = NULL;
	node *p = NULL;
	int num;
	printf("Please enter number of linked lists:\n");
	fflush(stdout);
	scanf("%d", &num);

	for(int i = 0; i < num; i++)
	{
		if(NULL == head)
		{
			head = (node *)malloc(sizeof(node));
			if(NULL == head)
			{
				printf("fail to create head");
			}
			p = head;
		}
		else
		{
			p->next = (node*)malloc(sizeof(node));
			if(NULL == p->next)
			{
				printf("failed to create next list");
			}
			p = p->next;
		}
	}
	p->next = NULL;
	return head;
}


/*function to delete node
 * regardless of its position
 */
static node* delete(node *head, int value)
{
	node *tmp, *p = head;


	if(head->data == value)
	{
		tmp = head;
		head = head->next;
		free(tmp);
		return head;
	}
	while(p != NULL)
	{
		tmp = p->next;
		if(NULL == tmp)
		{
			printf("Value not found, nothing is deleted\n");
			return head;
		}

		else if(tmp->data == value)
		{
			if(tmp->next == NULL)
			{
				p->next = NULL;
				free(tmp);
			}
			else
			{
				p->next = tmp->next;
				free(tmp);
			}
			return head;
		}
		p = p->next;
	}
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





/*this function finds the smallest value in list
 * and deletes it from the list
 */

node *delete_smallest(node *head)
{
	node *p = head, *smallest_prev = NULL, *smallest = head, *newhead = NULL;

	/*traverse to find smallest node*/
	while(p != NULL)
	{
		if(p->next == NULL)
		{
			break;
		}
		else if(p->next->data < smallest->data)
		{
			smallest_prev = p;
			smallest = p->next;
		}
		p = p->next;
	}

	/*return head->next if head value is smallest and delete head*/
	if(smallest == head)
	{
		newhead = head->next;
		free(head);
		return newhead;
	}
	/*else delete smallest value in other positions and return head*/
	else
	{
	smallest_prev->next = smallest->next;
	free(smallest);
	return head;
	}
}




/*this function counts the number of lists
 * in linked list
 */
int countLists(node *p){
	int count = 0;
	while(p != NULL)
	{
		count++;
		p = p->next;
	}
	return count;

}


/*this function sorts a linear list in ascending order
 * based on the lists' data member
 */
static node* sortAscend(node* head)
{
	node *tmp = head, *chain, *newhead = NULL;

	while(tmp != NULL)
	{
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


