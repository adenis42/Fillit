/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenis <adenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 10:57:26 by adenis            #+#    #+#             */
/*   Updated: 2016/11/29 17:06:09 by adenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_tab(int *tab)
{
	int		i;

	i = 0;
	while (i < 6)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}
