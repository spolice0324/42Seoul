/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 12:02:12 by yesong            #+#    #+#             */
/*   Updated: 2021/03/16 18:41:47 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	char	*temp;
	int		strs_len;
	int		i;

	if (!size)
	{
		ret = ((char*)malloc(1));
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len = strs_len + ft_strlen(strs[i++]);
	ret = (char*)malloc(ft_strlen(sep) * (size - 1) + strs_len + 1);
	temp = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (ret);
}
