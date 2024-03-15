/*
** EPITECH PROJECT, 2024
** free_csfml.c
** File description:
** free all csfml, don't ask question about the name function
*/

#include "my.h"

int megatron_free(window_t *window)
{
    for (zone_t *tmp = window->head; window->head;
        window->head = tmp) {
        tmp = window->head->next;
        zone_destroy(window->head);
    }
    sfRenderWindow_destroy(window->window);
    return 0;
}
