/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:15:15 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:15:21 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    if(!src)
        return NULL;
    i = 0;
    while(i<n)
    {
        dest[i]=src[i];
        i++;
    }
    return dest;
}



