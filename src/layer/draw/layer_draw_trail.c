/*
** EPITECH PROJECT, 2024
** layer_draw_trail.c
** File description:
** layer_draw_trail.c
*/

#include "my.h"
#include <SFML/Graphics/Types.h>
#include <SFML/System/Vector2.h>

int layer_draw_trail(layer_t *layer, sfVector2f mouse, window_t *window,
    canva_t *canva)
{
    static sfVector2f prevmouse = {0, 0};
    sfVector2f delta = {mouse.x - prevmouse.x, mouse.y - prevmouse.y};
    float length = sqrt(delta.x * delta.x + delta.y * delta.y);
    float angle = atan2(delta.y, delta.x) * 180 / 3.14159265;
    sfRectangleShape *line = NULL;

    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        line = sfRectangleShape_create();
        sfRectangleShape_setSize(line, (sfVector2f){length, canva->radius});
        sfRectangleShape_setOrigin(line, (sfVector2f){0, canva->radius / 2.});
        sfRectangleShape_setRotation(line, angle);
        sfRectangleShape_setPosition(line, prevmouse);
        sfRectangleShape_setFillColor(line, canva->color);
        sfRenderTexture_drawRectangleShape(layer->layer, line, NULL);
        sfRenderTexture_display(layer->layer);
        sfRectangleShape_destroy(line);
    }
    prevmouse = mouse;
    return 0;
}
