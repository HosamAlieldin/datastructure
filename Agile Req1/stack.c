/*
 * stack.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "stack.h"

St_stackinfo *start = NULL;
St_stackinfo *stackpointer = NULL;
int loop =0 ;

/*function to create stack*/
void CreateStack(St_stackinfo *info,int size)
{
	start = (St_stackinfo*)malloc(size*sizeof(St_stackinfo));
	info->maxsize = size;
	stackpointer = start;
}
/*function to push inside stack*/
void Push(St_stackinfo *info,int data)
{
	if (loop < info->maxsize)
	{
		stackpointer->value = data;
		stackpointer++;
		loop++;
	}
	else
	{
		printf("Error passing stack size\n");
	}
}
/*function to pop an element fro stack*/
void Pop(St_stackinfo *info,int *data)
{
	if (loop >0)
	{
		*data = stackpointer->value;
		stackpointer--;
		loop--;
	}
	else
	{
		printf("Error passing stack size\n");
	}
}
/*function to print elements inside stack*/
void printStack(St_stackinfo *info)
{
	int index=0;

	printf("elements inside stack are:\n");
	info = start;
	//start from the beginning
	for (index = 0 ; index <loop;index++)
	{
		printf("%d\n",info->value);
		info++;
	}
}



