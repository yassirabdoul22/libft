/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaabdoul <yaabdoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:05:16 by yaabdoul          #+#    #+#             */
/*   Updated: 2025/10/14 10:05:17 by yaabdoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char sep)
{
	return (c == sep);
}

int	count_words(char *str, char sep)
{
	int	count = 0;

	while (*str)
	{
		while (*str && is_separator(*str, sep))
			str++;
		if (*str && !is_separator(*str, sep))
		{
			count++;
			while (*str && !is_separator(*str, sep))
				str++;
		}
	}
	return count;
}

char	*malloc_word(char *str, char sep)
{
	int		len = 0;
	int		i = 0;
	char	*word;

	while (str[len] && !is_separator(str[len], sep))
		len++;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return NULL;

	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return word;
}

char	**ft_split(char *str, char sep)
{
	char	**result;
	int		i = 0;

	if (!str)
		return NULL;
	result = malloc(sizeof(char *) * (count_words(str, sep) + 1));
	if (!result)
		return NULL;
	while (*str)
	{
		while (*str && is_separator(*str, sep))
			str++;
		if (*str && !is_separator(*str, sep))
		{
			result[i++] = malloc_word(str, sep);
			while (*tubestr && !is_separator(*str, sep))
				str++;
		}
	}
	result[i] = NULL;
	return result;
}





