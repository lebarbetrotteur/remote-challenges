/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cbertola.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbertola <cyrille.bertola@student.42.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 14:10:33 by cbertola          #+#    #+#             */
/*   Updated: 2020/04/13 14:11:28 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

char		 *ft_rgb2hex(int r, int g, int b)
{
	char *hexa;
	
	r = (int)pow(256, 2) * r;
	g = 256 * g;
	*hexa = r + g + b;
	return (hexa);
}