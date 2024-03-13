/*
** EPITECH PROJECT, 2024
** canva_create.c
** File description:
** canva_create.c
*/

#include "my.h"

canva_t *canva_create(void)
{
    canva_t *canva = malloc(sizeof(canva_t));

    canva->main = NULL;
    canva->layers = NULL;
    canva->use_f = layer_draw_trail;
    canva->radius = 1;
    canva->color = sfBlack;
    return canva;
}
