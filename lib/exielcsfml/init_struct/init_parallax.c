/*
** EPITECH PROJECT, 2021
** init_parallax
** File description:
** init_parallax
*/

#include "exielcsfml.h"

parallax_t *init_parallax(const char *spritesheet_path, sfVector2f pos,
sfIntRect rect)
{
    parallax_t *parallax = malloc(sizeof(parallax_t));

    parallax->parallax = init_object(spritesheet_path, pos, rect);
    parallax->clock = sfClock_create();
    return (parallax);
}