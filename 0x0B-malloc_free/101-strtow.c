#include "main.h"
#include "stdlib.h"

void ch_free_grid(char **grid, int heights);






char **strtow(char *str)
{
	char **a_str;
	int c, height = 0, x, y, z = 0;

	if(str == NULL || *str == '\0')
		return (NULL);
	for (c = 0, str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c +1] == '\0')
				height++;
	a_str = malloc((height + 1) * sizeof(char *));
	if (a_str == NULL || height == 0)
	{
		free(a_str);
		return (NULL);
	}
	for (x = z = 0; x < height; x++)
	{

	}
}
