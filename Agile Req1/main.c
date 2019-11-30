/*
 * main.c
 *
 *  Created on: Nov 29, 2019
 *      Author: hosam
 */

#include "stack.h"


int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	St_stackinfo info;
	int num ;
	CreateStack(&info,6);
	Push(&info,1);
	Push(&info,2);
	Push(&info,3);
	Push(&info,4);
	Push(&info,5);
	Push(&info,6);
	Push(&info,7);
	Push(&info,8);
	printStack(&info);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	Pop(&info,&num);
	printStack(&info);
	Push(&info,1);
	Push(&info,2);
	Push(&info,3);
	printStack(&info);
	return 0;
}
