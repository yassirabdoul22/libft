/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:05:32 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:24:12 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
        unsigned char *str1;
        unsigned char *str2;
        int i;

        i = 0;
        str1 = (unsigned char *)s1;
        str2 = (unsigned char *)s2;
        while(i<n)
        {
            if(str1[i]!=str2[i])
                return str1[i]-str2[i];
            i++;
        }
        return 0;
}
