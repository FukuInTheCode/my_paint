/*
** EPITECH PROJECT, 2024
** text_press.c
** File description:
** text_press.c
*/

#include "my.h"

int text_press(text_t *text, window_t *window)
{
    sfText_setString(text->txt, text_get_new_text());
    return 0;
}
