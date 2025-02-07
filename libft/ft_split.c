/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarosa-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:17:40 by sarosa-b          #+#    #+#             */
/*   Updated: 2024/10/22 19:27:39 by sarosa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_wordcounter(char *s, char c)
{
	unsigned int	words_tally;

	words_tally = 0;
	while (*s)
	{
		if (*s != c && (s[1] == c || !s[1]))
			words_tally++;
		s++;
	}
	return (words_tally);
}

static void	ft_memcheck(char **arr, int i)
{
	if (!arr[i])
	{
		while (i >= 0)
		{
			free(arr[i]);
			i--;
		}
		free(arr);
	}
}

static char	**ft_fillarray(char **arr, char *s, int c, unsigned int numofwrds)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_len;

	i = 0;
	j = 0;
	while (i < numofwrds)
	{
		word_len = 0;
		while (s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			word_len++;
			j++;
		}
		if (word_len > 0)
		{
			arr[i] = ft_substr(s, j - word_len, word_len);
			ft_memcheck(arr, i);
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char			**words_array;
	unsigned int	words_tally;

	if (!s)
		return (NULL);
	words_tally = ft_wordcounter((char *)s, c);
	words_array = (char **)malloc((words_tally + 1) * sizeof(char *));
	if (!words_array)
		return (NULL);
	words_array = ft_fillarray(words_array, (char *)s, c, words_tally);
	return (words_array);
}
