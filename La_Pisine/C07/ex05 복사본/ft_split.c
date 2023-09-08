/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:19:52 by yesong            #+#    #+#             */
/*   Updated: 2021/03/18 15:29:21 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ch_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int		word_cnt(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str)
	{
		if (!ch_charset(*str, charset))
		{
			cnt++;
			while (*str && !ch_charset(*str, charset))
				str++;
		}
		str++;
	}
	return (cnt);
}

void	ft_strcpy(char *dest, char *start, char *end)
{
	while (start < end)
		*(dest++) = *(start++);
	*dest = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**ret;
	int		i;
	char	*start;

	ret = (char**)malloc(sizeof(char*) * word_cnt(str, charset) + 1);
	i = 0;
	while (*str)
	{
		if (!ch_charset(*str, charset))
		{
			start = str;
			while (*str && !ch_charset(*str, charset))
				str++;
			ret[i] = (char*)malloc(str - start + 1);
			ft_strcpy(ret[i++], start, str);
		}
		str++;
	}
	ret[i] = 0;
	return (ret);
}
