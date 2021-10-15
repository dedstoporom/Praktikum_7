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
	char* t;
	int flag = 0;
	while (*(str + flag) != 0)
	{
		if (*(str + flag) == *substr)
		{

			return (str + flag);
		}
		flag++;
	}
	return 0;
}