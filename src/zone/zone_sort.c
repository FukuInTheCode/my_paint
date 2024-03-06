/*
** EPITECH PROJECT, 2024
** zone_sort.c
** File description:
** zone_sort.c
*/

#include "my.h"

static int do_inside(zone_t **current, zone_t **temp, bool *swapped)
{
    zone_t *temp_zone = NULL;

    *swapped = 0;
    while ((*current)->next != *temp) {
        if ((*current)->priority > (*current)->next->priority) {
            temp_zone = *current;
            *current = (*current)->next;
            (*current)->next = temp_zone;
            *swapped = 1;
        }
        *current = (*current)->next;
    }
    *temp = *current;
    return 0;
}

int zone_sort(zone_t **head)
{
    bool swapped;
    zone_t *current;
    zone_t *temp = NULL;

    if (*head == NULL || (*head)->next == NULL)
        return 0;
    do {
        current = *head;
        do_inside(&current, &temp, &swapped);
    } while (swapped);
}
