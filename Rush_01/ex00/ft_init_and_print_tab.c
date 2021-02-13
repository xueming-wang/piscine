/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_and_print_tab.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:04:29 by kaye              #+#    #+#             */
/*   Updated: 2020/08/16 18:12:11 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

/*
** Afficher le resultat.
** Transformer les int en char en ajoutant le + '0'.
*/
void	ft_print_tab(int tab[4][4])
{
	int		raw;
	int		col;

	raw = 0;
	while (raw < 4)
	{
		col = 0;
		while (col < 4)
		{
			ft_putchar(tab[raw][col] + '0');
			if (col != 3)
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		raw++;
	}
}

/*
** Initialiser les valeurs de tableau en 0.
*/
void	ft_init_tab(int tab[4][4])
{
	int		raw;
	int		col;

	raw = 0;
	while (raw < 4)
	{
		col = 0;
		while (col < 4)
		{
			tab[raw][col] = 0;
			col++;
		}
		raw++;
	}
}
