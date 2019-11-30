/*
 * stack.h
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int value ;
	int maxsize;
}ST_queueInfo;

void CreateQueue(ST_queueInfo *info,int size);
void enqueue(ST_queueInfo *info,int data);
void dequeue(ST_queueInfo *info,int *data);
void printQueue(ST_queueInfo *info);

#endif /* QUEUE_H_ */
