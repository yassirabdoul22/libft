/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:04:52 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:16:54 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    if (*little == '\0')
        return (char *)big;

    i = 0;
    while (big[i] && i < len)
    {
        j = 0;
        while (big[i + j] && little[j] && big[i + j] == little[j] && (i + j) < len)
            j++;
        
        if (little[j] == '\0')
            return (char *)&big[i]; 
        
        i++;
    }
    return NULL;
}