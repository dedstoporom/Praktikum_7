#include <stdio.h>
#include "Head.h"
int main()
{
	int masSize;
	char *st;
	char str[]= "Hello_World!";
	char str2[] = "Rapture";
	char substr[] = "o_";
	incrementHeapVariable();
	printf("Enter massive size:");
	scanf_s("%d",&masSize);
	
	sortHeapArray(masSize);
	
   st = delete(str, substr);
	printf("%s\n", st);
	st = strcpy(str);
	printf("%s\n", st);
	st=strcat(str,str2);
	printf("%s\n", st);
	insert(str,str2,3);
}
