/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 04:31:32 by yesong            #+#    #+#             */
/*   Updated: 2021/03/19 04:54:12 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdllib.h>

char *ft_strdup(char *src);
{
	char *dest;
	int	len;

	len = 0;
	while (src[len])
		len++;
	dest = (char*)malloc(sizeof(char) * (len + 1));
	dest[len] = '\0';
	while (--len >= 0)
		dest[len] = src[len];

	return(dest);
}
