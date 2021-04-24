/*
** EPITECH PROJECT, 2021
** init_circle
** File description:
** init_circle
*/

#include "exielcsfml.h"

circle_t *init_circle(const char *circlesheet_path, sfVector2f pos,
sfIntRect rect)
{
    circle_t *circle = malloc(sizeof(circle_t));

    circle->circle = sfCircleShape_create();
    circle->circle_t = sfTexture_createFromFile(circlesheet_path, NULL);
    sfCircleShape_setTexture(circle->circle, circle->circle_t,
    sfFalse);
    circle->pos = pos;
    sfCircleShape_setPosition(circle->circle, circle->pos);
    circle->rect = rect;
    sfCircleShape_setTextureRect(circle->circle, circle->rect);
    return (circle);
}