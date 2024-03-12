/*
** EPITECH PROJECT, 2024
** layer_destroy.c
** File description:
** layer_destroy.c
*/

#include "my.h"

int layer_destroy(layer_t *layer)
{
    sfRenderTexture_destroy(layer->layer);
    sfSprite_destroy(layer->sprite);
    return 0;
}
