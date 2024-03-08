/*
** EPITECH PROJECT, 2024
** zone_remove.c
** File description:
** zone_remove.c
*/

#include "my.h"

int zone_remove(zone_t **head, char const *name)
{
    zone_t *current = *head;
    zone_t *prev = NULL;

    if (!*head)
        return 0;
    for (; current;) {
        if (my_strcmp(name, current->name)) {
            prev = current;
            current = current->next;
            continue;
        }
        if (!prev)
            *head = current->next;
        else
            prev->next = current->next;
    }
    return 0;
}
