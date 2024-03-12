/*
** EPITECH PROJECT, 2024
** burger_create.c
** File description:
** burger_create.c
*/

#include "my.h"

burger_t *burger_create(void)
{
    burger_t *burger = malloc(sizeof(burger_t));

    burger->is_clicked = false;
    burger->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(burger->rect, (sfVector2f){100, 100});
    sfRectangleShape_setFillColor(burger->rect, sfWhite);
    sfRectangleShape_setOutlineColor(burger->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(burger->rect, 5);
    return burger;
}
