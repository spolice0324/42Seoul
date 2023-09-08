/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:09:10 by yesong            #+#    #+#             */
/*   Updated: 2021/03/09 13:27:45 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	char	a;

	i=0;
	while(str[i] != '\0')
	{
		a = str[i];
		if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
		{
			return(0);
		}
		i++;
	}
	return(1);
}