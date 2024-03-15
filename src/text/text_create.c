/*
** EPITECH PROJECT, 2024
** delimitator_create.c
** File description:
** delimitator_create.c
*/

#include "my.h"

text_t *text_create(void)
{
    text_t *text = malloc(sizeof(text_t));
    sfFont *f = sfFont_createFromFile(FONT);

    if (!f)
        return NULL;
    text->txt = sfText_create();
    if (!text->txt)
        return NULL;
    sfText_setFont(text->txt, f);
    sfText_setFillColor(text->txt, sfBlack);
    sfText_setCharacterSize(text->txt, 24);
    sfText_setString(text->txt, text_get_new_text());
    return text;
}
