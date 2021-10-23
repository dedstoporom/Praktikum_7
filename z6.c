#include <malloc.h>
#include "Head.h"
char* insert(const char* src, const char* str, int index)
{
	int flag = 0;
	int flag1 = 0;
	int flag2 = 0;
	int sumSize = strlength(src) + strlength(str);
	char* dest = (char*)malloc(sumSize, sizeof(char));
		while (flag < sumSize)
		{
			if (flag == index)
			{
				while (flag1 < strlength(str))
				{
					*(dest + flag) = *(str + flag1);
					flag++;
					flag1++;
				}
			}
			*(dest + flag) = *(src + flag2);
			flag++;
			flag2++;
		}
		*(dest + sumSize) = 0;
		printf("%s",dest);
		return dest;
}