#include <unistd.h>
#include <stdio.h>

int main()
{
	char *str = "12345";
	printf("str: %s\n", str);
	int i = 0;
	while(str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}