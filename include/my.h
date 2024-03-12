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

typedef struct layer_s {
    bool is_showed;
    sfRenderTexture *layer;
    sfSprite *sprite;
    struct layer_s *next;
} layer_t;

typedef struct canva_s {
    layer_t *main;
    layer_t *layers;
} canva_t;

typedef struct window_s {
    sfRenderWindow *window;
} window_t;

sfVector2f zone_get_corner(window_t *, zone_t *);

int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strdup(char const *);
size_t my_strlen(char const *);

int my_gimp(void);
int gestion_window(window_t *);
int init_struct_window(window_t *);

int megatron_free(window_t *);

int zone_add(zone_t **, zone_t *);
zone_t *zone_get(zone_t *, char const *);
int zone_draw(zone_t *, window_t *);
int zone_remove(zone_t **, char const *);
int zone_sort(zone_t **);
int zone_reverse(zone_t **);
int display_help(int, char **, char const *);
zone_t *zone_create(void);
int zone_destroy(zone_t *);


int gestion_event(window_t *, sfEvent *);
int event_close(window_t *, sfEvent *);
int event_keypressed(window_t *, sfEvent *);

typedef int(*event_f)();

typedef struct event_s {
    sfEventType type;
    event_f f;
} event_t;

static event_t const events[] = {
    {sfEvtKeyPressed, event_keypressed},
    {sfEvtClosed, event_close},
    {0, NULL}
};


layer_t *layer_create(void);
int layer_add(layer_t **, layer_t *);
int layer_destroy(layer_t *);

canva_t *canva_create(void);
int canva_destroy(canva_t *);
int canva_add_layer(canva_t *, layer_t *);
int canva_draw(canva_t *, sfRenderWindow *);

zone_t *canvazone_create(void);
int canvazone_draw(zone_t *, window_t *);
