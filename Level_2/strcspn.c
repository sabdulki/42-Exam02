#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
}

// int main()
// {
// 	printf("my: %zu\n", ft_strcspn("hcello_word", "cats"));
// 	printf("ss: %zu\n", strcspn("hcello_word", "cats"));
// }