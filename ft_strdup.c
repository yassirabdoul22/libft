/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:05:10 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:16:19 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    if(!s)
        return NULL;
    int i;
    char *des;
    des=malloc(sizeof(char)*(ft_strlen(s)+1));
    if(!des)
    {
        return NULL;
    }
    i = 0;
    while(s[i])
    {
        des[i] = s[i];
        i++;
    }
    des[i]='\0';
    return des;
}
