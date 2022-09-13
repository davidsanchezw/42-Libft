/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:05:52 by dasanch2          #+#    #+#             */
/*   Updated: 2022/09/13 19:04:55 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			*(dst + i) = *(src + i);
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(dst + i) = *(src + i);
			i--;
		}
	}
	return (dst);
}
