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
        "My Gimp :)", sfDefaultStyle, NULL);
    if (!window->window)
        return 84;
    window->head = canvazone_create();
    zone_set_size(window->head, window, (sfVector2f){1920, 1080});
    zone_add(&window->head, delimitatorzone_create());
    zone_add(&window->head, burgerzone_create());
    zone_add(&window->head, pencilzone_create(window));
    zone_add(&window->head, eraserzone_create(window));
    zone_add(&window->head, shapeszone_create(window));
    zone_add(&window->head, bucketzone_create(window));
    zone_add(&window->head, colorzone_create(window));
    zone_add(&window->head, textzone_create(zone_get(
        window->head, "button_color")));
    zone_add(&window->head, sidemenuzone_create(window));
    return 0;
}
