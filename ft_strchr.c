/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:05:13 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:16:11 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    if(!s)
        return NULL;
    while(*s)
    {
        if(*s==(char)c)
            return (char *)s;
        s++;
    }
    if(c=='\0')
        return (char *)s;
    return NULL; 
}
