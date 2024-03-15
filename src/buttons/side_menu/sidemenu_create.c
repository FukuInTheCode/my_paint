/*
** EPITECH PROJECT, 2024
** sidemenu_create.c
** File description:
** sidemenu_create.c
*/

#include "my.h"

sidemenu_t *sidemenu_create(void)
{
    sidemenu_t *sidemenu = malloc(sizeof(sidemenu_t));
    sfColor grey_color = sfColor_fromRGB(195, 195, 195);
    sfColor grey_color_border = sfColor_fromRGB(159, 159, 159);

    sidemenu->is_clicked = false;
    sidemenu->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(sidemenu->rect, (sfVector2f){50, 200});
    sfRectangleShape_setFillColor(sidemenu->rect, grey_color);
    sfRectangleShape_setOutlineColor(sidemenu->rect, grey_color_border);
    sfRectangleShape_setOutlineThickness(sidemenu->rect, 2);
    return sidemenu;
}
