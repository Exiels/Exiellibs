/*
** EPITECH PROJECT, 2021
** init_button
** File description:
** init_button
*/

#include "exielcsfml.h"

button_t *init_button(const char *spritesheet_path, sfVector2f pos,
sfIntRect rect)
{
    button_t *button = malloc (sizeof(button_t));

    button->object = init_object(spritesheet_path, pos, rect);
    return (button);
}