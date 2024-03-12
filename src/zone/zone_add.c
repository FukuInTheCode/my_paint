/*
** EPITECH PROJECT, 2024
** zone_add.c
** File description:
** zone_add.c
*/

#include "my.h"

int zone_add(zone_t **head, zone_t *new)
{
    if (*head == NULL || !new) {
        *head = new;
        return 0;
    }
    for (zone_t *tmp = *head; tmp; tmp = tmp->next) {
        if (tmp->next && tmp->priority <= new->priority)
            continue;
        new->next = tmp->next;
        new->prev = tmp;
        new->prev->next = new;
        if (new->next)
            new->next->prev = new;
        tmp = new;
    }
    return 0;
}
