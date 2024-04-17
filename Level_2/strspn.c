#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str1 = "1234abc456";
    const char *str2 = "1234567890";
    
    size_t len = strspn(str1, str2);
    
    printf("Длина начального сегмента только из цифр: %zu\n", len);
    
    return 0;
}
