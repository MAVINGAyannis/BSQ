/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** struct_variable.c
*/
#include "bsq.h"

void start_variables(Variables* all, int sizemap)
{
    all->y = 0;
    all->x = 0;
    all->y_2 = 0;
    all->x_2 = 0;
    all->y_3 = 0;
    all->x_3 = 0;
    all->e = 0;
    all->v = 0;
    all->size_winning = 0;
    all->size_square = 0;
    all->winner_x = 0;
    all->winner_y = 0;
    all->sizemap_2 = sizemap;
}