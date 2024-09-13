#include <stdio.h>
#include <string.h>

#define BUFLEN 128
int main(int argc, char *argv[])
{
	char string[BUFLEN] = {0};
	strcpy(string, "HELLO WORLD!");
	printf("%s", string);
	return 0;
}
