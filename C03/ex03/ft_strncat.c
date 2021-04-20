/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:27:15 by yesong            #+#    #+#             */
/*   Updated: 2021/03/09 11:21:26 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*origin;

	i = 0;
	origin = dest;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}
