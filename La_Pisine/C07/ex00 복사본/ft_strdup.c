/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:53:13 by yesong            #+#    #+#             */
/*   Updated: 2021/03/16 22:10:40 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		len;

	len = 0;
	while (src[len])
		len++;
	ret = (char*)malloc(sizeof(char*) * (len + 1));
	ret[len] = '\0';
	while (len >= 0)
	{
		ret[len] = src[len];
		len--;
	}
	return (ret);
}
