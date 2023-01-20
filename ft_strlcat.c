/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megordag <megordag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:30:46 by megordag          #+#    #+#             */
/*   Updated: 2022/10/13 14:06:22 by megordag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen (dst);
	a = 0;
	while (src[a] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[a];
		i++;
		a++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen (&src[a]));
}
