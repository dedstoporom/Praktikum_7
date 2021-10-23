#include<math.h>
#include <malloc.h>
#include "Head.h"
void sortHeapArray(int* arr, int n)
{

	readArray(arr, n);
	printf("----------------\n");
	printf("%d \n", n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
}