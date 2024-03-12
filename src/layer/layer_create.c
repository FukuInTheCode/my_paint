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

    layer->is_showed = true;
    layer->layer = sfRenderTexture_create(10000, 10000, sfFalse);
    sfRenderTexture_setSmooth(layer->layer, sfTrue);
    layer->sprite = sfSprite_create();
    layer->next = NULL;
    return layer;
}
