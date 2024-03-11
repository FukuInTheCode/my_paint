/*
** EPITECH PROJECT, 2024
** layer_create.c
** File description:
** layer_create.c
*/

#include "my.h"

layer_t *layer_create(void)
{
    layer_t *layer = malloc(sizeof(layer_t));

    layer->is_shower = true;
    layer->layer = sfRenderTexture_create(10000, 10000, sfFalse);
    layer->sprite = sfSprite_create();
    layer->next = NULL;
    return layer;
}
