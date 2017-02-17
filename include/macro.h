/*
** macro.h for macro.h in /home/bayard_a/CPE_2014_bsq
** 
** Made by Antoine Bayard
** Login   <bayard_a@epitech.net>
** 
** Started on  Sat Jan 17 15:46:12 2015 Antoine Bayard
** Last update Sun Jan 18 21:39:39 2015 Antoine Bayard
*/

#ifndef MACRO_H
# define MACRO_H

# define SAVE 15000
# define OPEN_ERROR	"\e[1;31mOpen failed\033[0m ... " VALID_MAP "\n"
# define ARGS_ERROR	"\e[1;31mBad number of arguments\e[0;m, " MAP_NAME "\n"
# define FILE_ERROR	"\e[1;31mBad argument\e[0;m" BAD "\n"
# define MAP_ERROR	"\e[1;31mInvalid Map\033[m ..." VALID_MAP "\n"
# define MALLOC_ERROR	"\e[1;31mMemory allocation failure\033[0m ...\n"
# define CHAR_ERROR	"\e[1;31mInvalid characters\033[m : " CHAR "!\n"
# define SQUARE		"\e[1;32mx\033[0m"
# define MAP_NAME	"you have just to put the \e[1;37mname\e[0;m of the map !"
# define VALID_MAP	" Retry with a \e[1;37mvalid\e[0;m map !\033[0m"
# define BAD		", invalid map or path... " VALID_MAP"\n"
# define CHAR		"only \e[1;32m.\033[0m & \e[1;32mo\033[0m are allowed"

#endif
