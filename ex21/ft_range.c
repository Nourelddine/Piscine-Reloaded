/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <nabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 23:15:57 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/01 07:24:25 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		c;
	int		*arr;

	if (min >= max)
		return (NULL);
	c = max - min;
	if (!(arr = (int *)malloc(sizeof(int) * c)))
		return (NULL);
	min--;
	c = 0;
	while (++min < max)
		arr[c++] = min;
	return (arr);
}
