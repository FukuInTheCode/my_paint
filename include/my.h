/*
** EPITECH PROJECT, 2023
** MY_H
** File description:
** Placeholder
*/

#pragma once
    #define MY_H
    #include <stdio.h>
    #include <unistd.h>
    #include <stdint.h>
    #include <time.h>
    #include <limits.h>
    #include <stdarg.h>
    #include <errno.h>
    #include <fcntl.h>
    #include <math.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <stdbool.h>

    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
    #include <SFML/Config.h>
    #include <SFML/GPUPreference.h>
    #include <SFML/Network.h>
    #include <SFML/OpenGL.h>
    #include <SFML/System.h>
    #include <SFML/Window.h>


typedef int(*draw_window_func)();
typedef int(*press_window_func)();
typedef int(*hover_window_func)();

typedef enum corner_u {
    UPPER_LEFT,
    UPPER_RIGHT,
    LOWER_LEFT,
    LOWER_RIGHT
} corner_t;

typedef struct zone_s {
    char *name;
    int priority;
    struct zone_s *depend_on;
    corner_t depend_corner;
    sfVector2f adjust;
    sfVector2f size;
    draw_window_func draw_f;
    press_window_func press_f;
    hover_window_func hover_f;
    void *extra_information;
    struct zone_s *next;
} zone_t;

typedef struct window_s {
    sfRenderWindow *window;
} window_t;

sfVector2f zone_get_corner(window_t *, zone_t *);

int my_strcmp(char const *, char const *);

int zone_add(zone_t **, zone_t *);
zone_t *zone_get(zone_t *, char const *);
int zone_draw(zone_t *, window_t *);
int zone_remove(zone_t *, char const *);
int zone_sort(zone_t **);
int zone_reverse(zone_t **);
zone_t *zone_create(void);
