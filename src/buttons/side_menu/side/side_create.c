/*
** EPITECH PROJECT, 2024
** side_create.c
** File description:
** side_create.c
*/

#include "my.h"

side_t *side_create(void)
{
    side_t *side = malloc(sizeof(side_t));

    side->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(side->rect, (sfVector2f){100, 200});
    sfRectangleShape_setFillColor(side->rect, sfWhite);
    sfRectangleShape_setOutlineColor(side->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(side->rect, 5);
    return side;
}
