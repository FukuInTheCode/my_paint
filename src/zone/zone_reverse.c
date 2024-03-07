/*
** EPITECH PROJECT, 2024
** zone_reverse.c
** File description:
** zone_reverse.c
*/

#include "my.h"

int zone_reverse(zone_t **head)
{
    zone_t *prev = NULL;
    zone_t *current = *head;
    zone_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
    return 0;
}
