/*
** EPITECH PROJECT, 2024
** zone_destroy.c
** File description:
** zone_destroy.c
*/

#include "my.h"

int zone_destroy(zone_t *to_destroy)
{
    free(to_destroy);
    return 0;
}
