/*
** EPITECH PROJECT, 2024
** canva_color.c
** File description:
** canva_color.c
*/

#include "my.h"

int canva_setcolor(canva_t *canva, sfColor color)
{
    canva->color = color;
    return 0;
}
