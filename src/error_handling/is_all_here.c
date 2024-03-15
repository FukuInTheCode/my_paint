/*
** EPITECH PROJECT, 2024
** is_all_here.c
** File description:
** is_all_here.c
*/

#include "my.h"

int is_all_here_after(void)
{
    sfTexture *texture;

    texture = sfTexture_createFromFile("src/assets/color.jpeg", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    texture = sfTexture_createFromFile("src/assets/eraser.jpg", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    texture = sfTexture_createFromFile("src/assets/minus.jpeg", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    texture = sfTexture_createFromFile("src/assets/plus.jpg", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    return 0;
}

int is_all_here(void)
{
    sfTexture *texture;
    sfFont *font = sfFont_createFromFile("src/assets/font.otf");

    if (font == NULL)
        return 84;
    sfFont_destroy(font);
    texture = sfTexture_createFromFile("src/assets/pencil.png", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    texture = sfTexture_createFromFile("src/assets/bucket.png", NULL);
    if (texture == NULL)
        return 84;
    sfTexture_destroy(texture);
    if (is_all_here_after() == 84)
        return 84;
    return 0;
}
