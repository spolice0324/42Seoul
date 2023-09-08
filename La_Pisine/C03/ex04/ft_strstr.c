/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:59:18 by yesong            #+#    #+#             */
/*   Updated: 2021/03/09 13:20:40 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;

	temp = to_find;
	if (!*to_find)
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
			if (!(*to_find))
				return (str - (to_find - temp));
		}
		else
		{
			str++;
			to_find = temp;
		}
	}
	return (0);
}
