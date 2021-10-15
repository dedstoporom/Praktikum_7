#include <stdio.h>
#include "Head.h"
int main()
{
	char *st;
	char str[]= "Hello_World!";
	char str2[] = "Rapture";
	char substr[] = "o_";
    st=delete(str, substr);
	printf("%s\n", st);
	st = strcpy(str);
	printf("%s\n", st);
	st=strcat(str,str2);
	printf("%s\n", st);
	insert(str,str2,3);
	//incrementHeapVariable();
}
