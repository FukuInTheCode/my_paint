/*
** EPITECH PROJECT, 2024
** bucket_create.c
** File description:
** bucket_create.c
*/

#include "my.h"

bucket_t *bucket_create(void)
{
    bucket_t *bucket = malloc(sizeof(bucket_t));
    sfTexture *texture =
            sfTexture_createFromFile("src/assets/bucket.png", NULL);
    sfVector2f scale = {0.13f, 0.12f};

    bucket->is_clicked = false;
    bucket->rect = sfRectangleShape_create();
    bucket->sprite = sfSprite_create();
    sfRectangleShape_setSize(bucket->rect, (sfVector2f){40, 40});
    sfRectangleShape_setFillColor(bucket->rect, sfWhite);
    sfRectangleShape_setOutlineColor(bucket->rect, sfBlack);
    sfRectangleShape_setOutlineThickness(bucket->rect, 2);
    sfSprite_setTexture(bucket->sprite, texture, sfTrue);
    sfSprite_setScale(bucket->sprite, scale);
    return bucket;
}
