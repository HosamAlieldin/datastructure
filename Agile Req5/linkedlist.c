/*
 * stack.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "linkedlist.h"

/* function to create only one list*/

void createList(void)
{
	head = NULL;
	prev= NULL;
	current=NULL;
}
/*function to calculate list size*/
int ListSize(void)
{
	unsigned char size =0;
	if (NULL == head)
	{
		printf("list size=%d",size);
		return size;
	}
	current = head;
	size= 1;
	while (current->next != NULL)
	{
		current = current->next;
		size++;
	}
	return size;
}
/*function to print values inside list*/
void printList(void)
{
	ST_list *ptr = head;

	printf("[head] =>");

	//start from the beginning
	while(ptr != NULL)
	{
		printf(" %d =>",ptr->data);
		ptr = ptr->next;
	}
	printf(" [null]\n");
}

/*function to insert at any list position*/
void insertToList(ST_list *listHead, unsigned char position, int data)
{
	ST_list *link = (ST_list*)malloc(sizeof(ST_list));
	unsigned char currentlocation =0;
	link->data = data;
	link->next = NULL;
	if (NULL == head)
	{
		printf("no nodes are available, data is inserted at location 0\n");
		head = link;
		return;
	}

	if (position > ListSize())
	{
		printf("input position is larger than list size\n");
		return;
	}

	if (0 == position)
	{
		link->next =head;
		head = link;
		return;
	}
	current =head;
	while (currentlocation < position)
	{
		prev = current;
		current =current->next;
		currentlocation++;
	}
	link->next = current;
	prev->next = link;
}

/*function to delete at any list position*/
void deleteFromList(ST_list *listHead, unsigned char position, int* data)
{
	unsigned char location =0;
	ST_list * deletenode = NULL;
	deletenode = head;
	if (NULL == head)
	{
		printf("empty list\n");
		return;
	}
	if ( 0 == position )
	{
		/*head node */
		*data = head->data;
		head= head->next;
		free(deletenode);
		return;
	}
	location++;
	current= head->next;
	prev = head;
	while ( current != NULL)
	{
		if (location == position)
		{
			deletenode = current;
			*data = current->data;
			prev->next = current->next;
			free(deletenode);
			return;
		}
		prev =current;
		current = current->next;
		location++;
	}
	if (deletenode == NULL)
	{
		printf("invalid position not found\n");
	}
}
/*function to search for a certain data inside a list*/
void searchIntoList(ST_list *listHead, int data)
{
	unsigned char location =0;
	if (NULL == head)
	{
		printf("Linked List is empty\n");
		return;
	}
	current = head;
	while(current != NULL)
	{
		if(current->data == data)
		{
			printf("%d found at position %d\n", data, location);
			return;
		}
		current = current->next;
		location++;
	}
	printf("%d does not exist in the list\n", data);
}

/* using selection sort */
void sortList(ST_list *listHead)
{
	int temp ;
	if (NULL == head)
	{
		printf("Linked List is empty\n");
		return;
	}
	if (NULL == head->next)
	{
		printf("linked list contains one element only");
		return ;
	}
	current = head;
	while (current != NULL)
	{
		ST_list *ptr1 = current;
		ST_list *ptr2 = current->next;

		while (ptr2!= NULL)
		{
			if (ptr1->data > ptr2->data)
			{
				ptr1 = ptr2;
			}
			ptr2 = ptr2->next;
		}
		temp = current->data;
		current->data = ptr1->data;
		ptr1->data = temp;
		current=current->next;
	}
}
/* creating a new list and copying elements in it solution will not work as my implementation creates only one list*/
void reverseList(ST_list *listHead)
{
	ST_list *Link=NULL;
	ST_list *previous=NULL;
	unsigned char size=0;
	if (NULL == head)
	{
		printf("Linked List is empty\n");
		return;
	}
	if (NULL == head->next)
	{
		printf("linked list contains one element only");
		return ;
	}
	size = ListSize();
	printf("%d\n",size);
	current = head;
	while (current != NULL)
	{

		Link = current->next;
		current->next = previous;
		previous = current;
		current = Link;
	}
	head =previous;
}
