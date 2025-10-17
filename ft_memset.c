/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:50:17 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/15 20:32:34 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int a =  1337  ;
// &a +   1   ;
//  0000  0000 0101 0011 1001

int	main(void)
{
	int		a;
	char	*res;

	a = 0;
	res = (char *)&a;
	ft_memset(res, 57, 1);
	ft_memset(res + 1, 5, 1);
	ft_memset(res + 2, 0, 2);
	printf("a = %d\n", a);
	return (0);
}

int	main(void)
{
	int a = 0;
	char *res = (char *)&a;
	ft_memset(res, 57, 1);
}