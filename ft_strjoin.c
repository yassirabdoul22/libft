/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:42:03 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 12:43:20 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*ptr; 
	int		lens1;
	int		lens2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);

	ptr = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!ptr)
		return NULL;

	joined = ptr; 

	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;

	*ptr = '\0';
	return joined; 
}