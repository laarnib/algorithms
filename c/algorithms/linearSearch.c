#include<stdio.h>
#include "searchalgo.h"

void get_grades(int numArray[], int size);

int main(void)
{
	int size = 10, numtofind;
	int num[size];
	int found = 0;

	get_grades(num, size);

	printf("What number do you wish to find?\n");
	scanf("%i", &numtofind);
	found = binarysearch(num, size, numtofind);

	if(found == 1)
	{
		printf("Found %i\n", numtofind);
	}
	else
		printf("There is no such grade.\n");
	
	return 0;
}
	
	
void get_grades(int numArray[], int size)
{
	printf("Enter grades below: ");
	for (int i = 0; i < size; i++)
	{
		scanf("%i", &numArray[i]);
	}
}
