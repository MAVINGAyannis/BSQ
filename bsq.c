/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** CPE
*/
#include "bsq.h"

void printmap(char **map, int sizemap)
{
    for (int h = 0; h != sizemap; h++) {
        my_printf("%s", map[h]);
    }
}

char **txt_to_map(char **map, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\n')
        v++;
    v++;
    while (buffer[v] != '\0') {
        map[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            map[o][z] = '\n';
            o++;
            v++;
            z = 0;
        }
    }
    return (map);
}

void error_file(int fd)
{
    if (fd == -1) {
        my_printf("Error map.\n");
    }
}

char **the_malloc(char **map, int sizemap, int col)
{
    map = malloc(sizeof(char *) * (sizemap + 1));

    for (int i = 0; i != (sizemap + 1); i++)
        map[i] = malloc(sizeof(char) * col);
    return (map);
}

int main(int argc, char *argv[], char **map)
{
    char *buffer = buff(argv[1]);
    int i = 0;
    int sizemap = 0;
    int col = 0;

    if (error_handle(buffer) != 0)
        return (84);
    sizemap = how_size(buffer, sizemap);
    col = how_col(buffer, col);
    map = the_malloc(map, sizemap, col);
    map = txt_to_map(map, buffer);
    map = square_finder(map, sizemap);
    printmap(map, sizemap);
    return (0);
}
