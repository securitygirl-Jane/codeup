#include <stdio.h>
#include <string.h>

int main()
{
	int i=0, len;
	char array[BUFSIZ];

	scanf("%s", array);
	len = strlen(array);
	
	for(i=0; i<len; i++)
	{
		printf("\'%c\'\n", array[i]);
	}
	return 0;
}
