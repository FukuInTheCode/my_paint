/*
** EPITECH PROJECT, 2024
** free_csfml.c
** File description:
** free all csfml, don't ask question about the name function
*/

#include "my.h"

int megatron_free(window_t *window)
{
    sfRenderWindow_destroy(window->window);
    return 0;
}
