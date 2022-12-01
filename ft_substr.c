/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchin <chchin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 11:39:33 by chchin            #+#    #+#             */
/*   Updated: 2022/04/07 12:01:27 by chchin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	total_size;
	char	*s2;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	total_size = 0;
	if (len <= s_len - start && s_len > start)
		total_size = len;
	else if (len > s_len - start && s_len > start)
		total_size = s_len - start;
	s2 = (char *)malloc(sizeof(char) * total_size + 1);
	if (!s2)
		return (0);
	ft_strlcpy(s2, s + start, total_size + 1);
	return (s2);
}
