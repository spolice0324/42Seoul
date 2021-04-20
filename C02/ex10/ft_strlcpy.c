/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:50:01 by yesong            #+#    #+#             */
/*   Updated: 2021/03/02 15:14:30 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{

	unsigned int	i;

	i = 0;
	while ( src[i] && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest [i] = '\0';
	while (src[i])
		i++;
	return(i);
}
