/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:04:56 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:04:57 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int    i;
    i = 0;
    if(!s1 || !s2)
      return 0;
    if(n==0)
        return 0;
    while(i<n && (s1[i]==s2[i] && s1[i]))
        i++;
    if(s1[i]!=s2[i])
        return s1[i]-s2[i];
    return 0;
}


  
