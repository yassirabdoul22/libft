/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:05:13 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:05:14 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
