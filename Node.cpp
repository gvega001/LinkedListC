#include "Node.h"
#include <stdio.h>


void display(Node* temp)
{
	printf("The elements are: \n");
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
}
