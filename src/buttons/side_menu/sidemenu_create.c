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

    sidemenu->is_clicked = false;
    sidemenu->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(sidemenu->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(sidemenu->rect, sfWhite);
    sfRectangleShape_setOutlineColor(sidemenu->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(sidemenu->rect, 2);
    return sidemenu;
}
