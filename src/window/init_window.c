/*
** EPITECH PROJECT, 2024
** init_window.c
** File description:
** init the struct for the window
*/

#include "my.h"

int init_struct_window(window_t *window)
{
    window->window = sfRenderWindow_create((sfVideoMode){1920, 1080, 32},
        "My Gimp :)", sfFullscreen, NULL);
    if (!window->window)
        return 84;
    return 0;
}