/*
** EPITECH PROJECT, 2024
** canva_draw.c
** File description:
** canva_draw.c
*/

#include "my.h"

int canva_draw(canva_t *canva, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, canva->main->sprite, NULL);
    return 0;
}
