/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:17:35 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/15 15:46:02 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *s)
{
	int	i;
	int	isneg;
	int	rest;

	if (!s)
		return (0);
	i = 0;
	isneg = 1;
	rest = 0;
	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			isneg *= -1;
		}
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9'))
	{
		rest = rest * 10 + (s[i] - '0');
		i++;
	}
	return (rest * isneg);
}
