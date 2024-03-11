/*
** EPITECH PROJECT, 2024
** zone_add.c
** File description:
** zone_add.c
*/

#include "my.h"

int zone_add(zone_t **head, zone_t *new)
{
    (*head)->prev = new;
    new->next = *head;
    *head = new;
    return 0;
}
