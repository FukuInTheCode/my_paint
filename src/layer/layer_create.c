/*
** EPITECH PROJECT, 2024
** layer_create.c
** File description:
** layer_create.c
*/

#include "my.h"
#include <SFML/Graphics/Sprite.h>

layer_t *layer_create(void)
{
    layer_t *layer = malloc(sizeof(layer_t));

    layer->is_showed = true;
    layer->layer = sfRenderTexture_create(1920, 1080, sfFalse);
    sfRenderTexture_setSmooth(layer->layer, sfTrue);
    sfRenderTexture_clear(layer->layer, sfWhite);
    sfRenderTexture_display(layer->layer);
    layer->sprite = sfSprite_create();
    sfSprite_setTexture(layer->sprite,
        sfRenderTexture_getTexture(layer->layer), sfTrue);
    layer->next = NULL;
    return layer;
}
