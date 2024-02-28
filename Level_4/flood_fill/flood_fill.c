#include <stdlib.h>
#include <stdio.h>

typedef struct 	s_point {
    int 		x;				// x : Width  | x-axis
    int 		y;				// y : Height | y-axis
} 				t_point;


void fill_map(char **tab, t_point size, t_point begin, char to_fill)
{
	if (begin.x < 0 || begin.x >= size.x ||\
		begin.y < 0 || begin.y >= size.y ||\
		tab[begin.y][begin.x] != to_fill)
		return ;
	tab[begin.y][begin.x] = 'F';
	fill_map(tab, size, (t_point){begin.x - 1, begin.y}, to_fill);
	fill_map(tab, size, (t_point){begin.x + 1, begin.y}, to_fill);
	fill_map(tab, size, (t_point){begin.x, begin.y - 1}, to_fill);
	fill_map(tab, size, (t_point){begin.x, begin.y + 1}, to_fill);

}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	fill_map(tab, size, begin, tab[begin.y][begin.x]);
}