/*
** EPITECH PROJECT, 2019
** CPE_BSQ_2019
** File description:
** error.c
*/
#include "bsq.h"

int other_character(char *buffer)
{
    int i = 0;
    int v = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i] != '\0') {
        if (buffer[i] != '.' && buffer[i] != 'o') {
            if (buffer[i] != '\n' && buffer[i] != '\0') {
                my_printf("Invalid map.\n");
                return (84);
            }
        }
        i++;
    }
    return (0);
}

int error_handle(char *buffer)
{
    if (other_character(buffer) != 0)
        return (84);
    return (0);
}