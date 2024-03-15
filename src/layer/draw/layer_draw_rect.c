/*
** EPITECH PROJECT, 2024
** layer_draw_circle.c
** File description:
** layer_draw_circle.c
*/

#include "my.h"

int layer_draw_rect(layer_t *layer, sfVector2f mouse, window_t *window,
    canva_t *canva)
{
    sfRectangleShape *c = sfRectangleShape_create();

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfRectangleShape_setSize(c,
            (sfVector2f){canva->radius, canva->radius});
        sfRectangleShape_setFillColor(c, canva->color);
        sfRectangleShape_setPosition(c, mouse);
        sfRenderTexture_drawRectangleShape(canva->main->layer, c, NULL);
        sfRenderTexture_display(canva->main->layer);
    }
    sfRectangleShape_destroy(c);
    return 0;
}
