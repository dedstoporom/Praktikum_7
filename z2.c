#include<math.h>
#include <malloc.h>
#include "Head.h"
void sortHeapArray(int n)
{
	int* arr = (int*)calloc(n,(sizeof(int)));
	readArray(arr, n);
	printf("----------------\n");
	printf("%d \n", n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
	free(arr);
}