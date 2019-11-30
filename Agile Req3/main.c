/*
 * main.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "queue.h"


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	ST_queueInfo info;
	int num ;
	CreateQueue(&info,6);
	enqueue(&info,1);
	enqueue(&info,2);
	enqueue(&info,3);
	enqueue(&info,4);
	enqueue(&info,5);
	enqueue(&info,6);
	enqueue(&info,7);
	printQueue(&info);
	dequeue(&info,&num);
	dequeue(&info,&num);
	dequeue(&info,&num);
	dequeue(&info,&num);
	//dequeue(&info,&num);
	//dequeue(&info,&num);
	printQueue(&info);
	enqueue(&info,9);
	enqueue(&info,2);
	enqueue(&info,3);
	enqueue(&info,4);
	enqueue(&info,5);
	enqueue(&info,6);
	enqueue(&info,7);
	printQueue(&info);

	return 0;
}
