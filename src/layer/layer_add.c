/*
** EPITECH PROJECT, 2024
** layer_add.c
** File description:
** layer_add.c
*/

#include "my.h"

int layer_add(layer_t **head, layer_t *new)
{
    new->next = *head;
    *head = new;
    return 0;
}
