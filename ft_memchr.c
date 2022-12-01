/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 09:36:52 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (i++, i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
	}
	return (0);
}
