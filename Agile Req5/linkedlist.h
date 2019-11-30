/*
 * stack.h
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdio.h>
#include <stdlib.h>

struct sST_list
{
	int data;
	struct sST_list *next;
};

typedef struct sST_list ST_list;

ST_list *head;
ST_list *prev;
ST_list *current;

void createList(void);
void insertToList(ST_list *listHead, unsigned char position, int data);
void deleteFromList(ST_list *listHead, unsigned char position, int* data);
void searchIntoList(ST_list *listHead, int data);
void sortList(ST_list *listHead);
void reverseList(ST_list *listHead);
int ListSize(void);
void printList(void);

#endif /* LINKEDLIST_H_ */
