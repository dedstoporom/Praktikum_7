#include <stdio.h>
#include <malloc.h>
void incrementHeapVariable()
{
	int* p = (int*)malloc(sizeof(int));
	printf("Enter value:");
	scanf_s("%d",p);
	printf("%d\n", *p);
	printf("%d\n",p);
	*p=*p+1;
	printf("%d\n", *p);
	printf("%d\n", p);
	free(p);

	
}