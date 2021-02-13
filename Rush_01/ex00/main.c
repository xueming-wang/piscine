/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/15 11:18:09 by kaye              #+#    #+#             */
/*   Updated: 2021/02/04 22:21:16 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include <libc.h>

/*
** Verifier le string argv (condition) donne est bien en bon format.
** Exemple : ./a.out "4 2 1 2 1 2 4 2 3 3 2 1 2 1 3 3" 
** -> Bon format, avec 16 chiffres et 15 espaces.
** -> Et que les chiffres donnes sont bien entre 1 et 4.
*/
int		ft_check_argv(char *argv)
{
	int i;
	int len;

	len = 0;
	while (argv[len])
		len++;
	if (len != 31)
		return (0);
	i = 0;
	while (argv[i] && i <= 30)
	{
		if (!(argv[i] >= '1' && argv[i] <= '4'))
			return (0);
		i += 2;
	}
	i = 1;
	while (argv[i] && i <= 29)
	{
		if (argv[i] != ' ')
			return (0);
		i += 2;
	}
	return (1);
}

/*
** Stocker les valeurs donnee dans un tableau de 16 (parce que 16 chiffres).
** Le "if" dans Loop : Verifier si le caractere actuel est bien un chiffres
** entre 1 et 4, et non espaces, puis le stocker.
*/
int		*ft_condition(char *argv)
{
	int *condition;
	int str;
	int stock_number;

	str = 0;
	stock_number = 0;
	if(!(condition = (int*)malloc(sizeof(int) * 16)))
		return (0);
	while (argv[str] && stock_number < 16)
	{
		if (argv[str] >= '1' && argv[str] <= '4')
		{
			condition[stock_number] = argv[str] - '0';
			stock_number++;
		}
		str++;
	}
	return (condition);
}

int		main(int argc, char **argv)
{
	int tab[4][4];
	int *condition;

	ft_init_tab(tab);
	if (argc == 2)
	{
		if (ft_check_argv(argv[1]))
		{
			condition = ft_condition(argv[1]);
			if (ft_is_valide(tab, 0, condition) == 1)
				ft_print_tab(tab);
			else
				ft_putstr("Error\n");
			free(condition);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
