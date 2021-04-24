/*
** EPITECH PROJECT, 2021
** init_scene
** File description:
** init_scene
*/

#include "exielcsfml.h"

scenes_t *init_scene(int scene_id, void (*function)(game_t *game,
scenes_t **scenes))
{
    scenes_t *scene = malloc(sizeof(scenes_t));

    scene->scene_id = scene_id;
    scene->function = function;
    scene->quit_scene = false;
    return (scene);
}