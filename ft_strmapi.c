/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:04:58 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:04:59 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
        unsigned int i;
        char    *res;

        if (!s || !f)
            return NULL;
        res = malloc(sizeof(char) * ( ft_strlen(s) + 1 ));
        i = 0;
        while(s[i])
        {
            res[i] = f(i,s[i]);
            i++;
        }
        res[i] = '\0';
        return res;
}
