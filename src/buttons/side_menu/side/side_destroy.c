/*
** EPITECH PROJECT, 2024
** side_destroy.c
** File description:
** side_destroy.c
*/

#include "my.h"

int side_destroy(side_t *side)
{
    sfRectangleShape_destroy(side->rect);
    free(side);
    return 0;
}
