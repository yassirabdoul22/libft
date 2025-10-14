/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:33:35 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:41:45 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (!dest && !src) 
        return NULL;
    if(d<s)
    {
        size_t i = 0;
         while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    else 
    {
        size_t i = n;
        while (i > 0)
        {
            i--;
            d[i]=s[i];
        }
    }
    return des;
}
