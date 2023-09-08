/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 20:30:24 by yesong            #+#    #+#             */
/*   Updated: 2021/03/17 20:43:08 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int len;

	while(src[len])
		len++;
	dest = (char *)malloc(sizeof(int*) * (len + 1));
	dest[len] = 0;
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}
