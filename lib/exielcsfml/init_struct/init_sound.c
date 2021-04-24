/*
** EPITECH PROJECT, 2021
** init_sound
** File description:
** init_sound
*/

#include "exielcsfml.h"

sound_t *init_sound(sfBool is_loop, float volume, char *sound_filepath)
{
    sound_t *sound = malloc (sizeof(sound_t));

    sound->sound = sfSound_create();
    sound->buff = sfSoundBuffer_createFromFile(sound_filepath);
    sfSound_setBuffer(sound->sound, sound->buff);
    sound->loop = is_loop;
    sfSound_setLoop(sound->sound, sound->loop);
    sound->volume = volume;
    sfSound_setVolume(sound->sound, sound->volume);
    return (sound);
}