/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 15:53:54 by yesong            #+#    #+#             */
/*   Updated: 2021/03/01 15:55:08 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int		main(void)
{
	char *str_valid;
	char *str_invalid;

	str_valid = "hello";
	str_invalid = "hellO";
	printf("should be 1: %d\n", ft_str_is_lowercase(str_valid));
	printf("should be 0: %d\n", ft_str_is_lowercase(str_invalid));
}

