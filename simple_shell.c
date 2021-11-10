#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char *string;
	size_t size = 100;
	string = (char *) malloc(size);
	int t = 1;
	char **string_ptr = &string;
	while (t--)
	{
		printf("$ ");
		getline(string_ptr, &size, stdin);

		while (string[0] == '\n')
			getline(string_ptr, &size, stdin);

		printf("%s", string);
	}
}
