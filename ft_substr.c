/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:04:42 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:04:43 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *substr;
    size_t i;
    if(!s || len==0)
        return NULL;
    i = 0;
    substr = malloc(sizeof(char) * len+1);
    if(!substr)
        return  NULL;
    while(s[i] && i<len)
    {
        substr[i]=s[start++];
        i++;
    }  
    substr[i]='\0';
    return substr;
}

