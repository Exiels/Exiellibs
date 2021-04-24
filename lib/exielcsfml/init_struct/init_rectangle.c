/*
** EPITECH PROJECT, 2021
** init_rectangle
** File description:
** init_rectangle
*/

#include "exielcsfml.h"

rectangle_t *init_rectangle(const char *rectsheet_path, sfVector2f pos,
sfIntRect rect)
{
    rectangle_t *rectangle = malloc(sizeof(rectangle_t));

    rectangle->rectangle = sfRectangleShape_create();
    rectangle->rectangle_t = sfTexture_createFromFile(rectsheet_path, NULL);
    sfRectangleShape_setTexture(rectangle->rectangle, rectangle->rectangle_t,
    sfFalse);
    rectangle->pos = pos;
    sfRectangleShape_setPosition(rectangle->rectangle, rectangle->pos);
    rectangle->rect = rect;
    sfRectangleShape_setTextureRect(rectangle->rectangle, rectangle->rect);
    return (rectangle);
}