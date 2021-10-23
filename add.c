#include <stdio.h>
#include <stdlib.h>
int strlength(const char* str)
{
	int  flag = 0;
	while (*(str + flag) != 0)
	{
		flag++;
	}
	return flag;
}
char* find(const char* str, const char* substr)
{
	int len = strlength(substr);
	int flag = 0;
	_Bool value = 0;
	while (*(str + flag) != 0)
	{
		if (*(str + flag) == *substr)
		{
			int i = 0;
			while (i < len)
			{
				if (*(str + flag + i) != *(substr + i) && *(str + flag + i) != 0) {
					value = 1;
					break;
				}
				i++;
			}
			if (value) { break; }
			else {
				return (str + flag);
			}
		}
		flag++;
	}
	return 0;
}
void writeArray(int* arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void readArray(int* arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}

void mergeSort(int* a, int l, int r)
{
	if (l == r) return; 
	int mid = (l + r) / 2; 
	mergeSort(a, l, mid);
	mergeSort(a, mid + 1, r);
	int i = l;
	int j = mid + 1;
	int* tmp = (int*)malloc(r * sizeof(int));
	for (int step = 0; step < r - l + 1; step++)
	{
		if ((j > r) || ((i <= mid) && (a[i] < a[j])))
		{
			tmp[step] = a[i];
			i++;
		}
		else
		{
			tmp[step] = a[j];
			j++;
		}
	}
	for (int step = 0; step < r - l + 1; step++)
		a[l + step] = tmp[step];
}
void sort(int* arr, int n) {
	mergeSort(arr, 0, n - 1);
}