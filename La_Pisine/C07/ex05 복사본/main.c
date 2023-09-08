/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:23:50 by yesong            #+#    #+#             */
/*   Updated: 2021/03/18 15:27:56 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdbool.h>
char **ft_split(char *str, char *charset);
bool	b(char c, char *set)
{
	while (true)
	{
		if (*set == '\0')
			return (c == '\0');
		if (*set == c)
			return (true);
		set++;
	}
	return (false);
}

int		a(char *str, char *charset)
{
	int		count;
	char	*previous;
	char	*next;

	count = 0;
	previous = str;
	next = str;
	while (1)
	{
		if (b(*str, charset))
			next = str;
		if (next - previous > 1)
			count++;
		if (*str == '\0')
			break ;
		previous = next;
		str++;
	}
	return (count);
}

int		main()
{
	char **strs;

	strs = ft_split("aaa%bbb%ccc%%%ddd", "%*");

	printf("%s", strs[0]);
	printf("%s", strs[1]);
	printf("%s", strs[2]);
	printf("%s", strs[3]);
	printf("%s", strs[4]);
}

