/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <nabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 22:54:50 by nabdelba          #+#    #+#             */
/*   Updated: 2019/03/29 10:38:12 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	while (src[++i] != '\0')
		;
	if (!(s = (char *)malloc(i * sizeof(char) + 1)))
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
		s[i] = src[i];
	s[i] = '\0';
	return (s);
}
