/*
** EPITECH PROJECT, 2024
** zone_get.c
** File description:
** zone_get.c
*/

#include "my.h"

zone_t *zone_get(zone_t *head, char const *name)
{
    for (; head; head = head->next)
        if (my_strcmp(name, head->name))
            return head;
    return head;
}
