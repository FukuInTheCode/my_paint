/*
** EPITECH PROJECT, 2024
** burger_create.c
** File description:
** burger_create.c
*/

#include "my.h"

burger_t *burger_create(void)
{
    burger_t *burger = malloc(sizeof(burger_t));

    burger->is_clicked = false;
    burger->salad = saladzone_create();
    return burger;
}
