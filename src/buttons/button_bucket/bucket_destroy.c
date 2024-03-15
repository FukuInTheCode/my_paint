/*
** EPITECH PROJECT, 2024
** bucket_destroy.c
** File description:
** bucket_destroy.c
*/

#include "my.h"

int bucket_destroy(bucket_t *bucket)
{
    sfRectangleShape_destroy(bucket->rect);
    sfTexture_destroy((void *)sfSprite_getTexture(bucket->sprite));
    sfSprite_destroy(bucket->sprite);
    free(bucket);
    return 0;
}
