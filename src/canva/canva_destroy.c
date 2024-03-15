/*
** EPITECH PROJECT, 2024
** canva_destroy.c
** File description:
** canva_destroy.c
*/

#include "my.h"

int canva_destroy(canva_t *canva)
{
    if (canva->main)
        layer_destroy(canva->main);
    free(canva);
    return 0;
}
