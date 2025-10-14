/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:22:38 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 16:22:42 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dlen = 0;
    size_t slen = ft_strlen(src);
    size_t i = 0;

    if (!dst || !src)
        return 0;

    while (dlen < size && dst[dlen] != '\0')
        dlen++;

    if (dlen == size)
        return size + slen;

    while (src[i] && dlen + i + 1 < size)
    {
        dst[dlen + i] = src[i];
        i++;
    }

    if (dlen + i < size)
        dst[dlen + i] = '\0';

    return dlen + slen;
}