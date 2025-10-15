/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:04:29 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/15 16:09:14 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlen(int n)
{
	int		len;
	long	num;

	num = n;
	len = 1;
	if (num < 0)
	{
		num = -num;
		len++;
	}
	while (num)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		len;

	num = n;
	len = numlen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	if (num < 0)
		num = -num;
	while (num)
	{
		res[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
