/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:50:17 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:50:18 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ptr = (unsigned char *)s;
	size_t i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}

	return (s);
}