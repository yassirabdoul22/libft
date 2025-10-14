/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 22:33:57 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:17:09 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_in_set(char c, const char *set)
{
    int j = 0;
    while (set[j])
    {
        if (c == set[j])
            return 1;
        j++;
    }
    return 0;
}

char *ft_strtrim(const char *s1, const char *set)
{
    char *res;
    int i;
    int j;
    int len;

    if (!s1 || !set)
        return NULL;

    i = 0;
    len = 0;
    while (s1[i])
    {
        if (!is_in_set(s1[i], set))
            len++;
        i++;
    }

    res = malloc(sizeof(char) * (len + 1));
    if (!res)
        return NULL;

    i = 0;
    j = 0;
    while (s1[i])
    {
        if (!is_in_set(s1[i], set))
            res[j++] = s1[i];
        i++;
    }
    res[j] = '\0';
    return res;
}
