#include "flood_fill.h"

void    flood_fill(char **tab, t_point size, t_point begin)
{
    char c;
    t_point point;

    c = tab[begin.y][begin.x];
    tab[begin.y][begin.x] = 'F';
    if (begin.y > 0 && tab[begin.y - 1][begin.x] == c)
    {
        point.x = begin.x;
        point.y = begin.y - 1;
        flood_fill(tab, size, point);
    }
    if ((begin.y < (size.y - 1)) && tab[begin.y + 1][begin.x] == c)
    {
        point.x = begin.x;
        point.y = begin.y + 1;
        flood_fill(tab, size, point);
    }
    if ((begin.x < (size.x - 1)) && tab[begin.y][begin.x + 1] == c)
    {
        point.x = begin.x + 1;
        point.y = begin.y;
        flood_fill(tab, size, point);
    }
    if (begin.x > 0 && tab[begin.y][begin.x - 1] == c)
    {
        point.x = begin.x - 1;
        point.y = begin.y;
        flood_fill(tab, size, point);
    }
}