/*
 * stack.h
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>

#define UNBALANCED 0
#define BALANCED 1

typedef struct
{
	char value ;
	int maxsize;
}St_stackinfo;
St_stackinfo info;

void CreateStack(St_stackinfo *info,int size);
void Push(St_stackinfo *info,char data);
void Pop(St_stackinfo *info,char *data);
void printStack(St_stackinfo *info);
unsigned char checkForBalancedParantheses(char* expression);

#endif /* STACK_H_ */
