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

	unsigned char value;
	/*case : ()/[]/{} doesn't work;
	 * case : ((())/(())) one bracket is missing in pushing or one extra bracket in popping
	 */
	char str[10]= "[[{}]]";

	CreateStack(&info,10);

	value = checkForBalancedParantheses(str);

	if (value == BALANCED)
	{
		printf("String is balanced");
	}
	else if (value == UNBALANCED)
	{
		printf("string is not balanced");
	}
	return 0;
}
