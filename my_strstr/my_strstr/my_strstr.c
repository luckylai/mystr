#include <stdio.h>

char *my_strstr(const char *haystack, const char *needle);

int main()
{
	char src[] = "asdfghjklheqwertyuiop234567hellozxcvbnm234";
	char dst[] = "hello";

	char *p = NULL;
	p = my_strstr(src, dst);
	if (p)
	{
		printf("%s\n", p);
	}
	else
	{
		printf("NULL\n");
	}

	return 0;
}

char * my_strstr(const char * haystack, const char * needle)
{
	while (*haystack++)
	{
		int i = 0;
		while (*(haystack + i) == *(needle + i))
		{
			i++;
		}
		if (!*(needle + i))
		{
			return haystack;
		}
	}
	return NULL;
}
