/*
** EPITECH PROJECT, 2024
** zone_create.c
** File description:
** zone_create.c
*/

#include "my.h"

zone_t *zone_create(void)
{
    zone_t *ret = malloc(sizeof(zone_t));

    ret->name = NULL;
    ret->priority = 0;
    ret->depend_on = NULL;
    ret->adjust.x = 0;
    ret->adjust.y = 0;
    ret->size.x = 0;
    ret->size.y = 0;
    ret->draw_f = NULL;
    ret->press_f = NULL;
    ret->hover_f = NULL;
    ret->extra_information = NULL;
    ret->next = NULL;
    ret->prev = NULL;
    ret->depend_corner = UPPER_LEFT;
    return ret;
}
