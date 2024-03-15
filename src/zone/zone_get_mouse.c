/*
** EPITECH PROJECT, 2024
** zone_get_mouse.c
** File description:
** zone_get_mouse.c
*/

#include "my.h"

zone_t *zone_get_mouse(zone_t *head, window_t *window,
    sfVector2f mouse)
{
    sfVector2f corner_tmp = {0, 0};
    sfFloatRect rect_tmp = {0, 0, 0, 0};

    for (; head->next; head = head->next);
    for (; head; head = head->prev) {
        // if (head->next)
            // printf("%s %s\n", head->name, head->next->name);
        corner_tmp = zone_get_corner(window, head);
        rect_tmp.top = corner_tmp.y;
        rect_tmp.left = corner_tmp.x;
        rect_tmp.height = head->size.y;
        rect_tmp.width = head->size.x;
        if (sfFloatRect_contains(&rect_tmp, mouse.x, mouse.y))
            return head;
    }
    return NULL;
}
