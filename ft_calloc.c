/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 19:28:11 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/13 19:31:21 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    char *ptr;

    if (count == 0 || size == 0)
        count = size = 1;

    ptr = malloc(count * size);
    if (!ptr)
        return NULL;
    return (void *)ptr;
}
