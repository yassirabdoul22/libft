/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:15:03 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:15:04 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*res;
	unsigned char	cara;
	size_t			i;

	if (!s)
		return (NULL);
	i = 0;
	res = (unsigned char *)s;
	cara = (unsigned char)c;
	while (i < n)
	{
		if (res[i] == cara)
			return (void *)(res + i);
		i++;
	}
	return (NULL);
}
