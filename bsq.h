/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** CPE
*/
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "lib/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

typedef struct Variables Variables;
struct Variables
{
    int x;
    int y;
    int y_2;
    int x_2;
    int y_3;
    int x_3;
    int e;
    int v;
    int size_winning;
    int size_square;
    int winner_x;
    int winner_y;
    int sizemap_2;
};

void printmap(char **map, int sizemap);

char **txt_to_map(char **map, char *buffer);

void error_file(int fd);

char **the_malloc(char **map, int sizemap, int col);

int how_size(char *buffer, int sizemap);

int how_col(char *buffer, int col);

char **square_finder(char **map, int sizemap);

char *buff(char *filepath);

int error_handle(char *buffer);

void start_variables(Variables* all, int sizemap);