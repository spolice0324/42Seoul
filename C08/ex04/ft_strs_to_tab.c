/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:31:57 by yesong            #+#    #+#             */
/*   Updated: 2021/03/18 14:46:32 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

void				ft_strcpy(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	*dest = 0;
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	if (!ret)
		return (0);
	i = 0;
	while (i < ac)
	{
		ret[i].size = ft_strlen(av[i]);
		ret[i].str = (char*)malloc(ret[i].size + 1);
		ret[i].copy = (char*)malloc(ret[i].size + 1);
		ft_strcpy(ret[i].str, av[i]);
		ft_strcpy(ret[i].copy, av[i]);
		i++;
	}
	ret[i].str = 0;
	return (ret);
}
