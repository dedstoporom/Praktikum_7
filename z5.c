#include <malloc.h>
#include "Head.h"
char* strcat(const char* first, const char* second)
{
	int i = 0;
	int sumSize = strlength(first) + strlength(second);
	char* dest = (char*)malloc(sumSize, sizeof(char));
	for (int i = 0; i < strlength(first); i++)
	{
		*(dest + i) = *(first + i);
	}
	int i1 = 0;
	for (i = strlength(first); i < sumSize; i++)
	{
		*(dest + i) = *(second + i1);
		i1++;
	}
	*(dest + sumSize) = 0;
	return dest;
}