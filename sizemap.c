/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** CPE
*/
#include "bsq.h"

int how_size(char *buffer, int sizemap)
{
    char *size = malloc(sizeof(char) * 2);
    int a = 0;

    while (buffer[a] != '\n') {
        size[a] = buffer[a];
        a++;
    }
    sizemap = my_getnbr(size) + 1;
    return (sizemap);
}

char *buff(char *filepath)
{
    int i = 0;
    char *buffer = NULL;
    int fd = 0;
    char *temp = malloc(sizeof(char) * 2);
    int tmp = open(filepath, O_RDONLY);
    int e = 0;

    for (i = 0; read(tmp, temp, 1); i++)
        e++;
    i++;
    close(tmp);
    fd = open(filepath, O_RDONLY);
    buffer = malloc((sizeof(char) * i));
    read(fd, buffer, i);
    buffer[i] = '\0';
    close(fd);

    return (buffer);
}

int how_col(char *buffer, int col)
{
    int z = 0;
    int a = 0;

    while (buffer[a] != '\n')
        a++;
    a++;
    while (buffer[a] != '\n' && buffer[a] != '\0') {
        a++;
        z++;
    }
    z++;
    col = z;
    return (col);
}
