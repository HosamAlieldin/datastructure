/*
 * stack.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "queue.h"

ST_queueInfo *start = NULL;
ST_queueInfo *ptr = NULL;
ST_queueInfo *end = NULL;
int loop =0 ;


/*function to create queue*/
void CreateQueue(ST_queueInfo *info,int size)
{
	start = (ST_queueInfo*)malloc(size*sizeof(ST_queueInfo));
	info->maxsize = size;
	end = start;
	ptr = start;
}
/*function to add elements in queue*/
void enqueue(ST_queueInfo *info,int data)
{
	if (loop < info->maxsize)
	{
		end->value = data;
		end++;
		loop++;
	}
	else
	{
		end = start;
		ptr++;
	}
}
/*function to remove elements from queue*/
void dequeue(ST_queueInfo *info,int *data)
{
	if (loop >0)
	{
		*data = start->value;
		ptr++;
		loop--;
	}
	else if (ptr == end)
	{
		ptr =start;
		end =start;

	}
}
/*function to print elements inside queue*/
void printQueue(ST_queueInfo *info)
{
	int index=0;

	printf("elements inside queue are:\n");
	info = start;
	//start from the beginning
	for (index = 0 ; index <loop;index++)
	{
		printf("%d\n",info->value);
		info++;
	}
}



