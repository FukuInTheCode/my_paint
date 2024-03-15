/*
** EPITECH PROJECT, 2024
** bucketzone_draw.c
** File description:
** bucketzone_draw.c
*/

#include "my.h"

int bucketzone_draw(zone_t *bucketzone, window_t *window)
{
    return bucket_draw(bucketzone->extra_information, window);
}
