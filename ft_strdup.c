/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:21:19 by chchin            #+#    #+#             */
/*   Updated: 2022/06/03 11:17:25 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len);
	if (!s2)
		return (0);
	i = -1;
	while (i++, s1[i] != '\0')
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	return (s2);
}
