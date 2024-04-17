#include <string.h>
#include <stdio.h>

/*Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2); */

char	*ft_strpbrk(const char *str, const char *s2)
{
	int i = 0;
	int j = 0;
	char *s1;
	s1 = (char *)str;
	while(s1[i])
	{
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return (&s1[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

int main ()
{
	printf("%s\n", strpbrk("qwey", "fhutrq"));
	printf("%s\n", ft_strpbrk("qwey", "fhutrq"));
}
