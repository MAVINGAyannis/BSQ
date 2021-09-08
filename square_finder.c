/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** CPE
*/
#include "bsq.h"

char **win_finder(char **map, Variables* all)
{
    all->size_square++;
    all->y_2 = all->e;
    all->x_3 = all->v;
    if (all->size_square > all->size_winning) {
        all->size_winning = all->size_square;
        all->winner_x = all->x;
        all->winner_y = all->y;
    }
    return (map);
}

void global_variables(Variables* all)
{
    all->y_2 = all->y_2 + 1;
    all->x_2 = all->x_2 + 1;
    all->y_3 = all->y_3 + 1;
    all->x_3 = all->x_3 + 1;
    all->e = all->y_2;
    all->v = all->x_3;
}

char **square_calculator(char **map, Variables* all)
{
    all->y_2 = all->y;
    all->x_2 = all->x;
    all->y_3 = all->y;
    all->x_3 = all->x;
    all->e = 0;
    all->v = 0;

    while (1) {
        global_variables(all);
        while (all->y_2 >= all->y && all->x_3 >= all->x) {
            if (map[all->y_2][all->x_2] != '.')
                return (map);
            else if (map[all->y_3][all->x_3] != '.')
                return (map);
            all->y_2 = all->y_2 - 1;
            all->x_3 = all->x_3 - 1;
        }
        map = win_finder(map, all);
    }
}

char **square_maker(char **map, Variables* all)
{
    int y = all->winner_y;
    int x = all->winner_x;
    int i = 0;

    while (y != (all->winner_y + all->size_winning)) {
        while (i != all->size_winning) {
            map[y][x] = 'x';
            x++;
            i++;
        }
        x = all->winner_x;
        y++;
        i = 0;
    }
    return (map);
}

char **square_finder(char **map, int sizemap)
{
    Variables All;
    Variables *all = &All;

    start_variables(all, sizemap);
    while (all->y != (sizemap - 1)) {
        if (map[all->y][all->x] == '\n') {
            all->x = 0;
            all->y++;
        }
        if (map[all->y][all->x] == '.') {
            map = square_calculator(map, all);
            all->x++;
            all->size_square = 0;
        }
        if (map[all->y][all->x] == 'o')
            all->x++;
    }
    all->size_winning++;
    map = square_maker(map, all);
    return (map);
}