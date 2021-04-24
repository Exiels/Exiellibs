/*
** EPITECH PROJECT, 2021
** my_print2darr
** File description:
** my_print2darr
*/

void my_printf(char *str, ...);

void my_print_2darr(char **arr, int nb_rows)
{
    for (int i = 0; i != nb_rows; i++)
        my_printf("%s\n", arr[i]);
}