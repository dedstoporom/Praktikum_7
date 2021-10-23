#include<malloc.h>
#include "Head.h"
char* strcpy(const char* src)
{
	char* dest = (char*)malloc(strlength(src), sizeof(char));
	int i = 0;
	while (i < strlength(src))
	{
	*(dest + i) = *(src + i);
	i++;
	}
	*(dest + i) = 0;
	return dest;
}