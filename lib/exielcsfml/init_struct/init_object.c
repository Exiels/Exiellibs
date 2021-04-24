/*
** EPITECH PROJECT, 2021
** init_object
** File description:
** init_object
*/

#include "exielcsfml.h"

object_t *init_object(const char *spritesheet_path, sfVector2f pos,
sfIntRect rect)
{
    object_t *object = malloc(sizeof(object_t));

    object->object = sfSprite_create();
    object->object_t = sfTexture_createFromFile(spritesheet_path, NULL);
    sfSprite_setTexture(object->object, object->object_t, sfFalse);
    object->pos = pos;
    sfSprite_setPosition(object->object, object->pos);
    object->rect = rect;
    sfSprite_setTextureRect(object->object, object->rect);
    return (object);
}