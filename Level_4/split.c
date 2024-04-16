#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

// pass all spaces, tabs and new lines
// if str[i] is not any sep, word counter++
// pass charsin the words with i;

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = 0;
	while (s2 && i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char    **ft_split(char *str)
{
	char **arr;
	int i = 0;
	int wc = 0;
	int len = 0;

	while(str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ') // pass all spaces, tabs and new lines
			i++;
		if (str[i] >= 33 && str[i] <= 126)
			wc++;
		while(str[i] >= 33 && str[i] <= 126)
			i++;
	}
	// now i got count of words in str
	arr = malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	// it's time to count lenght of words and copy them to char **arr
	i = 0;
	wc = 0;
	while(str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ') // pass all spaces, tabs and new lines
			i++;
		len = i;
		while(str[i] >= 33 && str[i] <= 126)
			i++;
		if (i > len)
		{
			arr[wc] = malloc(sizeof(char) * (i - len) + 1);
			ft_strncpy(arr[wc], &str[len], i - len);
			wc++;
		}
	}
	arr[wc] = NULL;
	return (arr);
}

// int main()
// {
// 	char *str = "     qwertyu 1234567890-098765432345678i 			qwrtyui qwertyui    ";
// 	char **res = ft_split(str);
// 	int i = 0;
// 	while(res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }