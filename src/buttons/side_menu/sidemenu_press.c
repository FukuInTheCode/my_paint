/*
** EPITECH PROJECT, 2024
** sidemeunzone_press.c
** File description:
** sidemeunzone_press.c
*/

#include "my.h"

int sidemenu_press(sidemenu_t *sidemenu, window_t *window)
{
    if (sidemenu->is_clicked == false) {
        sidemenu->is_clicked = true;
        zone_add(&window->head, sidemenu->side);
        zone_add(&window->head, sidemenu->plus);
        zone_add(&window->head, sidemenu->moins);
    } else {
        sidemenu->is_clicked = false;
        zone_remove(&window->head, "side");
        zone_remove(&window->head, "plus");
        zone_remove(&window->head, "moins");
        zone_remove(&window->head, "see_color");
    }
    return 0;
}
