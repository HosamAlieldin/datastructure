/*
 * main.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "linkedlist.h"


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	ST_list list;
	int data;
	createList();
	printList();
	deleteFromList(&list,4, &data);
	insertToList(&list,0,10);
	insertToList(&list,1,20);
	printList();
	insertToList(&list,0,30);
	printList();
	insertToList(&list,10,40);
	printList();
	insertToList(&list,2,50);
	printList();
	insertToList(&list,4,80);
	printList();
	deleteFromList(&list,4, &data);
	printList();
	deleteFromList(&list,0, &data);
	printList();
	deleteFromList(&list,1, &data);
	printf("%d\n",data);
	printList();
	insertToList(&list,0,80);
	printList();
	searchIntoList(&list,50);
	reverseList(&list);
	printList();
	sortList(&list);
	printList();
	return 0;
}
