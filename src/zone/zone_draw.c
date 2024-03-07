/*
** EPITECH PROJECT, 2024
** zone_draw.c
** File description:
** zone_draw.c
*/

#include "my.h"

int zone_draw(zone_t *head, window_t *window)
{
    for (; head; head = head->next)
        head->draw_f(window, head);
    return 0;
}
