/*
** EPITECH PROJECT, 2024
** layer_draw_circle.c
** File description:
** layer_draw_circle.c
*/

#include "my.h"

int layer_draw_circle(layer_t *layer, sfVector2f mouse, window_t *window,
    canva_t *canva)
{
    sfCircleShape *c = sfCircleShape_create();


    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfCircleShape_setRadius(c, canva->radius);
        sfCircleShape_setFillColor(c, canva->color);
        sfCircleShape_setPosition(c, mouse);
        sfRenderTexture_drawCircleShape(canva->main->layer, c, NULL);
        sfRenderTexture_display(canva->main->layer);
    }
    sfCircleShape_destroy(c);
    return 0;
}
