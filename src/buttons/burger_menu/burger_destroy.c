/*
** EPITECH PROJECT, 2024
** burger_destroy.c
** File description:
** burger_destroy.c
*/

#include "my.h"

static int free_zones(burger_t *bur)
{
    zone_destroy(bur->file);
    zone_destroy(bur->edit);
    zone_destroy(bur->help);
    zone_destroy(bur->about);
    zone_destroy(bur->subhelp);
    zone_destroy(bur->open);
    zone_destroy(bur->save);
    zone_destroy(bur->quit);
    zone_destroy(bur->pencil);
    zone_destroy(bur->eraser);
    return 0;
}

int burger_destroy(burger_t *burger)
{
    salad_free(burger->file);
    salad_free(burger->edit);
    salad_free(burger->help);
    salad_free(burger->open);
    salad_free(burger->quit);
    salad_free(burger->save);
    salad_free(burger->subhelp);
    salad_free(burger->about);
    salad_free(burger->eraser);
    salad_free(burger->pencil);
    free_zones(burger);
    sfRectangleShape_destroy(burger->rect);
    free(burger);
    return 0;
}
