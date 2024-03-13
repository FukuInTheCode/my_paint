/*
** EPITECH PROJECT, 2024
** delimitator_destroy.c
** File description:
** delimitator_destroy.c
*/

#include "my.h"

int delimitator_destroy(delimitator_t *delimitator)
{
    sfRectangleShape_destroy(delimitator->rect);
    free(delimitator);
    return 0;
}
