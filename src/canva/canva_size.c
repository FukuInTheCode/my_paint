/*
** EPITECH PROJECT, 2024
** canva_size.c
** File description:
** canva_size.c
*/

#include "my.h"

float canva_getsize(canva_t *canva)
{
    return canva->radius;
}

int canva_setsize(canva_t *canva, float new)
{
    canva->radius = new;
    return 0;
}
