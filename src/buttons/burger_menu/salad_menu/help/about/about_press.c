/*
** EPITECH PROJECT, 2024
** about_press.c
** File description:
** about_press.c
*/

#include "my.h"

int about_press(zone_t *zone, window_t *window)
{
    write(1, "La plus belle -> emma.farineaux@epitech.eu\n", 43);
    write(1, "La debilos -> tom.carlier@epitech.eu\n", 38);
    return 0;
}
