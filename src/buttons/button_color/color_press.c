/*
** EPITECH PROJECT, 2024
** color_press.c
** File description:
** color_press.c
*/

#include "my.h"

static sfVector2f norme_vector(sfVector2f vec, window_t *window)
{
    sfVector2f p = zone_get_corner(window,
        zone_get(window->head, "button_color"));
    vec.x -= p.x;
    vec.y -= p.y;
    return vec;
}

int color_press(color_t *color, window_t *window)
{
    sfTexture *t = (void *)sfSprite_getTexture(color->sprite);
    sfVector2i v = sfMouse_getPositionRenderWindow(window->window);
    sfImage *i = NULL;
    sfVector2f v2;
    zone_t *cz = zone_get(window->head, "canva");
    canva_t *canva = cz->extra_information;
    sfColor c;

    if (!t)
        return 0;
    i = sfTexture_copyToImage(t);
    if (!i)
        return 0;
    v2 = norme_vector((sfVector2f){v.x, v.y}, window);
    c = sfImage_getPixel(i, v2.x, v2.y);
    if (canva->mode != ERASER)
        canva_setcolor(canva, c);
    sfImage_destroy(i);
    return 0;
}
