/*
** EPITECH PROJECT, 2024
** delimitator_destroy.c
** File description:
** delimitator_destroy.c
*/

#include "my.h"
#include <SFML/Graphics/Font.h>

int text_destroy(text_t *text)
{
    sfFont_destroy((void *)sfText_getFont(text->txt));
    sfText_destroy(text->txt);
    free(text);
    return 0;
}
