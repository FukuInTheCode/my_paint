/*
** EPITECH PROJECT, 2024
** new_press.c
** File description:
** new_press.c
*/

#include "my.h"

int new_press(zone_t *z, window_t *w)
{
    zone_t *cz = zone_get(w->head, "canva");
    canva_t *canva = cz->extra_information;
    sfRectangleShape *r = sfRectangleShape_create();
    sfVector2u v = sfRenderTexture_getSize(canva->main->layer);

    sfRectangleShape_setFillColor(r, sfWhite);
    sfRectangleShape_setOutlineColor(r, sfWhite);
    sfRectangleShape_setSize(r, (sfVector2f){v.x, v.y});
    sfRenderTexture_drawRectangleShape(canva->main->layer, r, NULL);
    sfRenderTexture_display(canva->main->layer);
    sfRectangleShape_destroy(r);
    return 0;
}
