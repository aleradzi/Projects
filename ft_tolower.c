/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:12:12 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/18 19:14:00 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int g)
{
	if (g > 64 && g < 91)
		g += 32;
	return (g);
}