/*
** EPITECH PROJECT, 2024
** zone_remove.c
** File description:
** zone_remove.c
*/

#include "my.h"

int zone_remove(zone_t **head, char const *name)
{
    if (!*head)
        return 0;
    if (!my_strcmp((*head)->name, name)) {
        *head = (*head)->next;
        return 0;
    }
    for (zone_t *tmp = (*head)->next; tmp; tmp = tmp->next) {
        if (my_strcmp(tmp->name, name))
            continue;
        tmp->prev->next = tmp->next;
        if (tmp->next)
            tmp->next->prev = tmp->prev;
    }
    return 0;
}
