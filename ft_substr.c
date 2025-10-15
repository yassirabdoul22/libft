/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:33:44 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/15 15:33:46 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	size_t	size;
	char	*res;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		size = slen - start;
	else
		size = len;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, size);
	res[size] = '\0';
	return (res);
}
