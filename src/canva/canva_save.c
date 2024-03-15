/*
** EPITECH PROJECT, 2024
** canva_save.c
** File description:
** canva_save.c
*/

#include "my.h"

static bool is_valid_name(char const *name)
{
    size_t len = my_strlen(name);

    if (len < 5)
        return false;
    if (!my_strcmp(name + len - 4, ".png"))
        return true;
    if (!my_strcmp(name + len - 4, ".jpg"))
        return true;
    if (!my_strcmp(name + len - 4, ".bmp"))
        return true;
    if (!my_strcmp(name + len - 4, ".tga"))
        return true;
    return false;
}

int canva_save(canva_t *canva)
{
    sfImage *img = sfTexture_copyToImage(
        sfRenderTexture_getTexture(canva->main->layer));
    char filename[1001] = {0};

    write(1, "Enter the filename: ", 20);
    read(STDIN_FILENO, filename, sizeof(filename) - 1);
    filename[my_strlen(filename) - 1] = 0;
    if (!is_valid_name(filename)) {
        write(2, "Invalid name or extension!\n", 27);
        sfImage_destroy(img);
        return 0;
    }
    sfImage_saveToFile(img, filename);
    sfImage_destroy(img);
    return 0;
}
