#include<math.h>
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