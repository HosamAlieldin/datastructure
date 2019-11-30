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


typedef struct
{
	int value ;
	int maxsize;
}St_stackinfo;

void CreateStack(St_stackinfo *info,int size);
void Push(St_stackinfo *info,int data);
void Pop(St_stackinfo *info,int *data);
void printStack(St_stackinfo *info);

#endif /* STACK_H_ */
