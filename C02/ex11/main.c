/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yesong <yesong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 16:23:46 by yesong            #+#    #+#             */
/*   Updated: 2021/03/02 16:39:08 by yesong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char src[80] = "Coucou\ntu vas bien ?";
	
	ft_putstr_non_printable(src);

	return (0);
}
