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

    #define FONT "./src/assets/font.otf"

typedef int(*draw_window_func)();
typedef int(*press_window_func)();
typedef int(*hover_window_func)();
typedef int(*free_window_func)();

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
    free_window_func free_f;
    void *extra_information;
    struct zone_s *next;
    struct zone_s *prev;
} zone_t;

typedef struct layer_s {
    bool is_showed;
    sfRenderTexture *layer;
    sfSprite *sprite;
    struct layer_s *next;
} layer_t;

typedef enum canva_mode_e {
    ERASER,
    PENCIL,
    CIRCLE,
    RECT
} canva_mode_t;

typedef struct canva_s {
    layer_t *main;
    layer_t *layers;
    draw_window_func use_f;
    sfColor color;
    float radius;
    float last_radius;
    canva_mode_t mode;
} canva_t;

typedef struct window_s {
    sfRenderWindow *window;
    zone_t *head;
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
int zone_set_size(zone_t *, window_t *, sfVector2f);

zone_t *zone_get_mouse(zone_t *, window_t *, sfVector2f);

int gestion_event(window_t *, sfEvent *);
int event_close(window_t *, sfEvent *);
int event_keypressed(window_t *, sfEvent *);
int event_mousepressed(window_t *, sfEvent *);

typedef int(*event_f)();

typedef struct event_s {
    sfEventType type;
    event_f f;
} event_t;

static event_t const events[] = {
    {sfEvtKeyPressed, event_keypressed},
    {sfEvtMouseButtonPressed, event_mousepressed},
    {sfEvtClosed, event_close},
    {0, NULL}
};


layer_t *layer_create(void);
int layer_add(layer_t **, layer_t *);
int layer_destroy(layer_t *);
int layer_use(layer_t *, window_t *, sfVector2f, canva_t *);
int layer_draw_trail(layer_t *, sfVector2f, window_t *, canva_t *);
int layer_draw_rect(layer_t *, sfVector2f, window_t *, canva_t *);
int layer_draw_circle(layer_t *, sfVector2f, window_t *, canva_t *);

canva_t *canva_create(void);
int canva_destroy(canva_t *);
int canva_add_layer(canva_t *, layer_t *);
int canva_draw(canva_t *, sfRenderWindow *);
int canva_setcolor(canva_t *, sfColor);
float canva_getsize(canva_t *);
int canva_setsize(canva_t *, float);
int canva_setmode(canva_t *, canva_mode_t);
int canva_save(canva_t *);

zone_t *canvazone_create(void);
int canvazone_draw(zone_t *, window_t *);
int canvazone_hover(zone_t *, window_t *);

typedef struct burger_s {
    bool is_clicked;
    sfRectangleShape *rect;
    zone_t *file;
    zone_t *edit;
    zone_t *help;
    zone_t *open;
    zone_t *save;
    zone_t *quit;
    zone_t *pencil;
    zone_t *eraser;
    zone_t *about;
    zone_t *subhelp;
    zone_t *new_file;
    bool is_file;
    bool is_edit;
    bool is_help;
} burger_t;

burger_t *burger_create(void);
int burger_destroy(burger_t *);
int burger_press(burger_t *, window_t *);
int burger_draw(burger_t *, window_t *);
int burger_hover(burger_t *, window_t *);
zone_t *burgerzone_create(void);
int burgerzone_draw(zone_t *, window_t *);
int burgerzone_hover(zone_t *, window_t *);
int burgerzone_press(zone_t *, window_t *);

typedef struct salad_s {
    sfRectangleShape *rect;
    sfText *text;
} salad_t;

salad_t *salad_create(char const *);
int salad_hover(zone_t *, window_t *);
zone_t *file_create(zone_t *);
zone_t *edit_create(zone_t *);
zone_t *help_create(zone_t *);
zone_t *open_create(zone_t *);
zone_t *save_create(zone_t *);
zone_t *new_file_create(zone_t *);
int new_press(zone_t *, window_t *);
int save_press(zone_t *, window_t *);
zone_t *quit_create(zone_t *);
int quit_press(zone_t *, window_t *);
zone_t *about_create(zone_t *);
zone_t *subhelp_create(zone_t *);
zone_t *pencil_create_salad(zone_t *);
zone_t *eraser_create_salad(zone_t *);
int eraser_burger_press(zone_t *, window_t *);
int pencil_burger_press(zone_t *, window_t *);
int file_press(zone_t *, window_t *);
int edit_press(zone_t *, window_t *);
int help_press(zone_t *, window_t *);
int salad_draw(zone_t *, window_t *);
int salad_free(zone_t *);

int about_press(zone_t *, window_t *);
int subhelp_press(zone_t *, window_t *);
int open_help(char const *);


typedef struct pencil_s {
    bool is_clicked;
    sfRectangleShape *rect;
    sfSprite *sprite;
} pencil_t;

pencil_t *pencil_create(void);
int pencil_destroy(pencil_t *);
int pencil_draw(pencil_t *, window_t *);
zone_t *pencilzone_create(window_t *);
int pencilzone_draw(zone_t *, window_t *);
int pencilzone_press(zone_t *, window_t *);

typedef struct eraser_s {
    bool is_clicked;
    sfRectangleShape *rect;
    sfSprite *sprite;
} eraser_t;

eraser_t *eraser_create(void);
int eraser_destroy(eraser_t *);
int eraser_draw(eraser_t *, window_t *);
zone_t *eraserzone_create(window_t *);
int eraserzone_draw(zone_t *, window_t *);
int eraserzone_press(zone_t *, window_t *);

typedef struct delimitator_s {
    sfRectangleShape *rect;
} delimitator_t;

delimitator_t *delimitator_create(void);
int delimitator_destroy(delimitator_t *);
int delimitator_draw(delimitator_t *, window_t *);
zone_t *delimitatorzone_create(void);
int delimitatorzone_draw(zone_t *, window_t *);

typedef struct shape_s {
    bool is_clicked;
    sfRectangleShape *rect;
    sfCircleShape *circle;
    sfRectangleShape *rect_inside;
} shape_t;

shape_t *shapes_create(void);
int shapes_destroy(shape_t *);
int shapes_draw(shape_t *, window_t *);
zone_t *shapeszone_create(window_t *);
int shapeszone_draw(zone_t *, window_t *);
int shapeszone_press(zone_t *, window_t *);
int shapeszone_hover(zone_t *, window_t *);

typedef struct bucket_s {
    bool is_clicked;
    sfRectangleShape *rect;
    sfSprite *sprite;
} bucket_t;

bucket_t *bucket_create(void);
int bucket_destroy(bucket_t *);
int bucket_draw(bucket_t *, window_t *);
zone_t *bucketzone_create(window_t *);
int bucketzone_draw(zone_t *, window_t *);

static __attribute_used__ char const *funny_text[] = {
    "Oh le segfault la, Tom Carlier - 2024",
    "Qu'est-ce qui est jaune et qui attend ?   Jonathan.",
    "Alors vous en pensez quoi de ce paint ?",
    "La creativite est contagieuse, faites-la circuler.",
    "Mon niveau de sarcasme depend\n"
    "directement de votre niveau de stupidite.",
    "Le saviez-vous ? Les abeilles dorment parfois dans des fleurs.",
    "Le saviez-vous ? L'hippopotomonstrosesquippedaliophobie\n"
    "est la peur des mots longs.",
    "Le saviez-vous ? Les carottes n'etaient pas toujours\n"
    " orange, mais violettes.",
    "Le saviez-vous ? Le cerveau humain a plus de\n"
    " connexions que les etoiles dans la galaxie.",
    "Tom est nul a Mario Kart",
    "Etre ou ne pas etre tel n'est pas la question",
    "15 Mars 2024, dans 7 min le my_paint est termine\n"
    "on veut mourir",
    "10k l'annee pour pas avoir de place",
    "Coucou l'AER",
    "tu peux nous mettre une bonne note ?",
    "bientot un deuxieme main sur le paint, "
    "mon mate ne le sait pas",
    NULL
};


typedef struct color_s {
    bool is_clicked;
    sfRectangleShape *rect;
    sfSprite *sprite;
} color_t;

typedef struct sidemenu_s {
    bool is_clicked;
    sfRectangleShape *rect;
    zone_t *side;
    zone_t *plus;
    zone_t *moins;
} sidemenu_t;

sidemenu_t *sidemenu_create(void);
int sidemenu_destroy(sidemenu_t *);
int sidemenu_draw(sidemenu_t *, window_t *);
int sidemenu_hover(sidemenu_t *, window_t *);
int sidemenu_press(sidemenu_t *, window_t *);
zone_t *sidemenuzone_create(window_t *);
int sidemenuzone_draw(zone_t *, window_t *);
int sidemenuzone_press(zone_t *, window_t *);

typedef struct side_s {
    sfRectangleShape *rect;
} side_t;

side_t *side_create(void);
int side_draw(side_t *, window_t *);
zone_t *sidezone_create(zone_t *);
int sidezone_draw(zone_t *, window_t *);
int sidezone_press(zone_t *, window_t *);
zone_t *plus_create(zone_t *);
zone_t *minus_create(zone_t *);
int minus_press(zone_t *, window_t *);
int plus_press(zone_t *, window_t *);
int side_destroy(side_t *);

typedef struct caca_s {
    sfSprite *sprite;
} caca_t;

caca_t *caca_create(char const *, sfVector2f);
int caca_draw(zone_t *, window_t *);
int caca_hover(zone_t *, window_t *);
int caca_destroy(caca_t *);

color_t *color_create(void);
int color_destroy(color_t *);
int color_draw(color_t *, window_t *);
int color_press(color_t *, window_t *);
int colorzone_press(zone_t *, window_t *);
int colorzone_draw(zone_t *, window_t *);
zone_t *colorzone_create(window_t *);

typedef struct text_s {
    sfText *txt;
} text_t;

text_t *text_create(void);
int text_destroy(text_t *);
int text_draw(text_t *, window_t *);
int text_press(text_t *, window_t *);
zone_t *textzone_create(zone_t *);
int textzone_draw(zone_t *, window_t *);
int textzone_press(zone_t *, window_t *);
char const *text_get_new_text(void);

int is_all_here(void);
