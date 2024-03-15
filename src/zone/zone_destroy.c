/*
** EPITECH PROJECT, 2024
** zone_destroy.c
** File description:
** zone_destroy.c
*/

#include "my.h"

int zone_destroy(zone_t *to_destroy)
{
    if (to_destroy->free_f)
        to_destroy->free_f(to_destroy->extra_information);
    free(to_destroy->name);
    free(to_destroy);
    return 0;
}
