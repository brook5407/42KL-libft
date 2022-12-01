/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 16:13:20 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = -1;
	diff = 0;
	while (i++, i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			diff = 1;
		else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
			diff = -1;
	}
	if (i < n && !diff)
	{
		if (((unsigned char *)s1)[i] != '\0'
			&& ((unsigned char *)s2)[i] == '\0')
			diff = 1;
		else if (((unsigned char *)s1)[i] == '\0'
			&& ((unsigned char *)s2)[i] != '\0')
			diff = -1;
	}
	return (diff);
}
