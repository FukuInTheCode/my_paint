/*
** EPITECH PROJECT, 2024
** canva_add_layer.c
** File description:
** canva_add_layer.c
*/

#include "my.h"

int canva_add_layer(canva_t *canva, layer_t *layer)
{
    if (!canva->main)
        canva->main = layer;
    layer_add(&canva->layers, layer);
    return 0;
}
