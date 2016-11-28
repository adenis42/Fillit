/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenis <adenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:28:55 by adenis            #+#    #+#             */
/*   Updated: 2016/11/28 21:42:13 by adenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static const char	*Table[] =
{
	"#..###",
	"#...##..#",
	"###..#",
	"#..##...#",
	"####",
	"#...#...#...#",
	"#...#...##",
	"#.###",
	"##...#...#",
	"###.#",
	"#...###",
	"#...#..##",
	"###...#",
	"##..#...#",
	"##..##",
	"##.##",
	"##...##",
	"#..##..#",
	"#...##...#"
};

static int	matrice[19][6] =
{
	{1, 0, 2, 0, 1, -1},
	{0, 1, 0, 2, 1, 1},
	{1, 0, 2, 0, 1, 1},
	{1, 0, 1, 1, 1, -1},
	{1, 0, 2, 0, 3, 0},
	{0, 1, 0, 2, 0, 3},
	{0, 1, 0, 2, 1, 2},
	{1, 0, 2, 0, 2, -1},
	{1, 0, 1, 1, 1, 2},
	{0, 1, 1, 0, 2, 0},
	{0, -1, 1, 0, 2, 0},
	{1, 0, 1, -1, 1, -2},
	{1, 0, 2, 0, 2, 1},
	{1, 0, 0, 1, 0, 1},
	{1, 0, 0, 1, 1, 1},
	{1, 0, 1, -1, 2, -1},
	{1, 0, 1, 1, 1, 2},
	{1, 0, 1, -1, 0, 1},
	{0, 1, 1, 1, 1, 2},
};

int				ft_get_i(t_list *lst)
{
	int			i;

	i = 0;
	while (Table[i])
	{
		if (!ft_strcmp(Table[i], lst->content))
			break ;
		i++;
	}
	if (i > 18)
	{
		ft_putstr_fd("error", 2);
		exit(1);
	}
	return (i);
}

void			ft_printtab(int	*tab)
{
	int		i;

	i = 0;
	while (i < 6)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}

void			ft_cpytab(int	*dst, int	*tab)
{
	int		i;

	i = 0;
	while (i < 6)
	{
		dst[i] = tab[i];
		i++;
	}
}
void			ft_getox(t_list *lst)
{
	static int	c = 'A';
	
	lst->content = matrice[ft_get_i(lst)];
	lst->letter = c;
	c++;
}

void			ft_check_tetri(t_list *lst)
{
	int			i;

	i = 0;
	while (Table[i])
	{
		if (!ft_strcmp(Table[i], lst->content))
			break ;
		i++;
	}
	if (i > 18)
	{
		ft_putstr_fd("error", 2);
		exit(1);
	}
}
