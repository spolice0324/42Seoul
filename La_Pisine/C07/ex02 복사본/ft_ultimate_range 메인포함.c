/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwso <hwso@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:50:03 by hwso              #+#    #+#             */
/*   Updated: 2021/03/18 10:32:03 by hwso             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	ret;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int*)malloc(sizeof(int) * ret);
	if (!*range)
		return (-1);
	ptr = *range;
	while (min < max)
	{
		*ptr = min;
		min++;
		ptr++;
	}
	return (ret);
}

#include <stdio.h>
int		main(void)
{
	int		**arr;
	int		min = 3;
	int		max = 10;
	int		i = 0;

	printf("%d\n", ft_ultimate_range(arr, min, max));
	for (; min < max; min++)
		printf("%d", arr[0][i++]);
	printf("\n");
	free(*arr);
}
