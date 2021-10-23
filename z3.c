#include <malloc.h>
#include "Head.h"
char* delete(char *str, const char *substr)
{
	char *f = find(str, substr);
	if (f != NULL)
	{
		char* a = (char*)malloc((strlength(str) - strlength(substr)) * sizeof(char));
		int flag = 0;
		for (int i = 0; i < strlength(str); i++)
		{
			*(a + i) = *(str + i);
			if (*(str + i) == *(f + flag))
			{
				*(a + i) = *(f + flag + strlength(substr));
				flag++;
			}
		}
		return a;
	}
	else
		return "Not Found";
}