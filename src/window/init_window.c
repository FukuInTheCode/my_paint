/*
** EPITECH PROJECT, 2024
** init_window.c
** File description:
** init the struct for the window
*/

#include "my.h"
#include <SFML/Window/WindowBase.h>

int init_struct_window(window_t *window)
{
    window->window = sfRenderWindow_create((sfVideoMode){1920, 1080, 32},
        "My Gimp :)", sfTitlebar | sfClose, NULL);
    if (!window->window)
        return 84;
    window->head = canvazone_create();
    zone_set_size(window->head, window, (sfVector2f){1920, 1080});
    canva_add_layer(window->head->extra_information, layer_create());
    zone_add(&window->head, burgerzone_create());
    zone_add(&window->head, pencilzone_create(window));
    return 0;
}
