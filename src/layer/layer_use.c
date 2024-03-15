/*
** EPITECH PROJECT, 2024
** layer_use.c
** File description:
** layer_use.c
*/

#include "my.h"

int layer_use(layer_t *layer, window_t *window,
    sfVector2f mouse, canva_t *canva)
{
    if (canva->use_f)
        return canva->use_f(layer, mouse, window, canva);
    return 0;
}
