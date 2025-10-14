/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:17:13 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 14:06:41 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrev(char *s)
{
	size_t		i;
	size_t	j;
	char	temp;

	if (!s)
	{
		return (NULL);
	}
	i = 0;
	j = (int)ft_strlen(s);
	while (i <j)
	{
		j--;
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
	}
	return (s);
}

int	numlen(int num)
{
	int		acc;
	long	n;

	acc = 0;
	n = num;
	if (n < 0)
	{
		n = -n;
		acc = 1;
	}
	while (n)
	{
		acc++;
		n = n / 10;
	}
	return (acc);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		len;
	int		sign;

	num = n;
	sign = 0;
	if (sign)
	{
		num = -num;
		sign = 1;
	}
	len = numlen(num);
	res = malloc(sizeof(char) * (len + sign + 1));
	if (!res)
		return (NULL);
	res[len + sign] = '\0';
	while (len--)
	{
		res[len + sign] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
