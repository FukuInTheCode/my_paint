/*
** EPITECH PROJECT, 2024
** text_get.c
** File description:
** text_get.c
*/

#include "my.h"

static int get_n_texts(void)
{
    int len = 0;

    for (; funny_text[len]; len++);
    return len;
}

char const *text_get_new_text(void)
{
    int id = rand() % get_n_texts();

    return funny_text[id];
}
