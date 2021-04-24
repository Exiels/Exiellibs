/*
** EPITECH PROJECT, 2021
** exielcsfml
** File description:
** An lib containing usefull functions and structures for the CSFML
*/

#ifndef EXIELCSFML_H_
#define EXIELCSFML_H_

//Defines:

//Includes:
    #include <stdbool.h>
    #include <stdlib.h>
    #include <SFML/Graphics.h>
    #include <SFML/Audio.h>
//Structures:

    /// \brief Structure to initialise an Object
    /// \param object The object sprite
    /// \param object_t The sprite texture
    /// \param pos The position of the sprite on the window
    /// \param rect The rect of the sprite on the texture file
    typedef struct object object_t;
    struct object{
        sfSprite *object;
        sfTexture *object_t;
        sfVector2f pos;
        sfIntRect rect;
    };

    /// \brief Structure to initialise an Rectangle
    /// \param rectangle The sfRectangleShape
    /// \param rectangle_t The rectangle texture
    /// \param pos The position of the sprite on the window
    /// \param rect The rect of the sprite on the texture file
    typedef struct rectangle rectangle_t;
    struct rectangle{
        sfRectangleShape *rectangle;
        sfTexture *rectangle_t;
        sfVector2f pos;
        sfIntRect rect;
    };

    /// \brief Structure to initialise an Circle
    /// \param circle The sfCircleShape
    /// \param circle_t The circle texture
    /// \param pos The position of the sprite on the window
    /// \param rect The rect of the sprite on the texture file
    typedef struct circle circle_t;
    struct circle{
        sfCircleShape *circle;
        sfTexture *circle_t;
        sfVector2f pos;
        sfIntRect rect;
    };

    /// \brief Structure to initialise a Button
    /// \param object An object structure containing sprite, texture,
    /// pos and rect
    typedef struct button button_t;
    struct button {
        object_t *object;
    };

    /// \brief Structure to initialise a Text
    /// \param text The sfText of the text
    /// \param font The text font
    /// \param pos The text position on the window
    /// \param string The sfText text
    /// \param char_size The size of the text
    typedef struct text text_t;
    struct text{
        sfText *text;
        sfFont *font;
        sfVector2f pos;
        char *string;
        int char_size;
    };

    /// \brief Structure to initialise a Music
    /// \param music The sfMusic of the music
    /// \param loop If the music is a loop or not
    /// \param volume The volume of the music
    typedef struct music music_t;
    struct music{
        sfMusic *music;
        sfBool loop;
        float volume;
    };

    /// \brief Structure to initialise a Music
    /// \param sound The sfSound of the sound
    /// \param buff The sfSoundBuffer of the sound
    /// \param loop If the music is a loop or not
    /// \param volume The volume of the music
    typedef struct sound sound_t;
    struct sound{
        sfSound *sound;
        sfSoundBuffer *buff;
        sfBool loop;
        float volume;
    };

    /// \brief Structure to initialise a Parallax
    /// \param parallax The object_t of the Parallax
    /// \param clock The clock to set the movement rate
    typedef struct parallax parallax_t;
    struct parallax{
        object_t *parallax;
        sfClock *clock;
    };

    typedef struct game game_t;

    /// \brief Structure to initialise a Scene
    /// \param scene_id The sid of the scene
    /// \param function The function attached to the scene
    /// \param quit_scene A boolean to quit the scene
    typedef struct scenes scenes_t;
    struct scenes {
        int scene_id;
        void (*function)(game_t *game, scenes_t **scenes);
        bool quit_scene;
    };

//Prototypes:
    //buttonhandler

        /// \brief Detect if the mouse is hover the button
        /// \param button The button structure
        /// \param mouse_pos The mouse cursor position
        /// \return [1] if hover, [0] if not
        int button_is_hover(button_t *button, sfVector2i mouse_pos);

    //my_utils

        /// \brief Calc the time elipsed from clock
        /// \param clock The sfClock
        /// \return Return the time elipsed from clock
        float timer(sfClock *clock);

    //init_struct

        /// \brief Initialise an object structure
        /// \param spritesheet_path The sprite sheet filepath
        /// \param pos The position of the sprite on the window
        /// \param rect The rect of the sprite on the texture file
        /// \return Return the object structure initalized
        object_t *init_object(const char *spritesheet_path, sfVector2f pos,
        sfIntRect rect);

        /// \brief Initialise an object structure
        /// \param spritesheet_path The sprite sheet filepath
        /// \param pos The position of the sprite on the window
        /// \param rect The rect of the sprite on the texture file
        /// \return Return the button structure initalized
        button_t *init_button(const char *spritesheet_path, sfVector2f pos,
        sfIntRect rect);

        /// \brief Initialise an object structure
        /// \param string The text string
        /// \param font_path The filepath to the font
        /// \param char_size The char size of the text
        /// \param pos The position of the text on the window
        /// \return Return the text structure initalized
        text_t *init_text(char *string, char *font_path, int char_size,
        sfVector2f pos);

        /// \brief Initialise an music structure
        /// \param is_loop To set if the music is a loop or not
        /// \param volume The music volume. Between 0 and 100
        /// \param music_filepath The music filepath
        /// \return Return the music structure initalized
        music_t *init_music(sfBool is_loop, float volume, char *music_filepath);

        /// \brief Initialise an sound structure
        /// \param is_loop To set if the music is a loop or not
        /// \param volume The music volume. Between 0 and 100
        /// \param music_filepath The music filepath
        /// \return Return the sound structure initalized
        sound_t *init_sound(sfBool is_loop, float volume, char *sound_filepath);

        /// \brief Initialise an rectangle structure
        /// \param rectsheet_path The rectangle sheet filepath
        /// \param pos The position of the sprite on the window
        /// \param rect The rect of the sprite on the texture file
        /// \return Return the rectangle structure initalized
        rectangle_t *init_rectangle(const char *rectsheet_path, sfVector2f pos,
        sfIntRect rect);

        /// \brief Initialise an circle structure
        /// \param circlesheet_path The circle sheet filepath
        /// \param pos The position of the sprite on the window
        /// \param rect The rect of the sprite on the texture file
        /// \return Return the circle structure initalized
        circle_t *init_circle(const char *circlesheet_path, sfVector2f pos,
        sfIntRect rect);

        /// \brief Initialise an Scene structure
        /// \param scene_id The sid of the scene
        /// \param function The function attached to the scene
        /// \return Return the Scene structure initalized
        scenes_t *init_scene(int scene_id, void (*function)(game_t *game,
        scenes_t **scenes));

        /// \brief Initialise an Scene structure
        /// \param spritesheet_path The sprite sheet filepath
        /// \param pos The position of the sprite on the window
        /// \param rect The rect of the sprite on the texture file
        /// \return Return the object structure initalized
        parallax_t *init_parallax(const char *spritesheet_path, sfVector2f pos,
        sfIntRect rect);

        /// \brief Move a sfIntRect
        /// \param rect The sfIntRect to move
        /// \param offset The number of pixel to move
        /// \param max_value The max value of pixel of the texture
        void move(sfIntRect *rect, int offset, int max_value);

        /// \brief To check if a parallax need to move
        /// \param parallax The parallax to be check
        /// \param speed The speed of the parallax
        /// \param pixel Thenumber of pixels to move
        /// \param max_value The max value of pixel of the parallax texture
        void check_parallax(parallax_t *parallax, int pixels,
        float speed, int max_value);

#endif /* !EXIELCSFML_H_ */