/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleradzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:48:17 by aleradzi          #+#    #+#             */
/*   Updated: 2019/08/18 18:55:43 by aleradzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii(int g)
{
	if (g >= 0 && g <= 127)
		return (1);
	return (0);
}