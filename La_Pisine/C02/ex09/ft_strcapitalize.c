/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 16:53:47 by yesong            #+#    #+#             */
/*   Updated: 2021/03/11 11:47:35 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase(char *c)
{
	if(*c >= 'A' && *c <= 'Z')
		*c +=32;
}

void	uppercase(char *c)
{
	if(*c >= 'a' && *c <= 'z')
		*c -=32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			lowercase(&str[i]);
		else if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			lowercase(&str[i]);
		else if (str[i - 1] >= '0' && str[i - 1] <= '9')
			lowercase(&str[i]);
		else
			uppercase(&str[i]);
		i++;
	}
	return (str);
}
