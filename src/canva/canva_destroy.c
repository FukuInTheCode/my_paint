/*
** EPITECH PROJECT, 2024
** canva_destroy.c
** File description:
** canva_destroy.c
*/

#include "my.h"

int canva_destroy(canva_t *canva)
{
    free(canva);
    return 0;
}
