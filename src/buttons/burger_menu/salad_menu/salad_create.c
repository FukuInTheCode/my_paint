/*
** EPITECH PROJECT, 2024
** salad_create.c
** File description:
** salad_create.c
*/

#include "my.h"
#include <stdio.h>

salad_t *salad_create(char const *text)
{
    salad_t *salad = malloc(sizeof(salad_t));
    sfFont *font = sfFont_createFromFile(FONT);

    salad->text = sfText_create();
    sfText_setString(salad->text, text);
    sfText_setFont(salad->text, font);
    sfText_setCharacterSize(salad->text, 24);
    sfText_setColor(salad->text, sfBlack);
    salad->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(salad->rect, (sfVector2f){100, 50});
    sfRectangleShape_setFillColor(salad->rect, sfWhite);
    sfRectangleShape_setOutlineColor(salad->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(salad->rect, 5);
    return salad;
}
