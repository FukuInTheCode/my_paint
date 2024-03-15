/*
** EPITECH PROJECT, 2024
** canva_mode.c
** File description:
** canva_mode.c
*/

#include "my.h"

int canva_setmode(canva_t *canva, canva_mode_t mode)
{
    canva->mode = mode;
    return 0;
}
