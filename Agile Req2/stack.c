/*
 * stack.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "stack.h"

St_stackinfo *start = NULL;
St_stackinfo *stackpointer = NULL;
char loop =0 ;

/*function to create stack*/
void CreateStack(St_stackinfo *info,int size)
{
	start = (St_stackinfo*)malloc(size*sizeof(St_stackinfo));
	info->maxsize = size;
	stackpointer = start;
}
/*function to check for balanced paranthesis*/
unsigned char checkForBalancedParantheses(char* expression)
{
	int loop=0;
	char data;
	unsigned char index;
	while ((expression[loop] != '\0'))
	{
		/* push if only a starting paranthesis appears*/
		if(('{'== expression[loop]) ||('('== expression[loop]) || ('['== expression[loop]))
		{
			Push(&info,expression[loop]);
		}

		else if(('}'== expression[loop]) ||(')'== expression[loop]) || (']'== expression[loop]))
		{
			Pop(&info,&data);
			if ((data == '(') && (expression[loop]==')'))
			{
				index = BALANCED;
			}
			else if ((data == '[') && (expression[loop]==']'))
			{
				index = BALANCED;
			}
			else if ((data == '{') && (expression[loop]=='}'))
			{
				index = BALANCED;
			}
			else
			{
				index = UNBALANCED;
			}
		}
		loop++;
	}
	printStack(&info);
	return index;
}

/*function to push elements inside stack*/
void Push(St_stackinfo *info,char data)
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
/*function to pop elements from stack*/
void Pop(St_stackinfo *info,char *data)
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
/*function to print stack*/
void printStack(St_stackinfo *info)
{
	int index=0;

	printf("elements inside stack are:\n");
	info = start;
	//start from the beginning
	for (index = 0 ; index <loop;index++)
	{
		printf("%c\n",info->value);
		info++;
	}
}



