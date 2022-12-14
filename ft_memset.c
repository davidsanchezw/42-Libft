/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:25:12 by dasanch2          #+#    #+#             */
/*   Updated: 2022/09/13 14:47:17 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		*(b + i) = (unsigned char)c;
		i ++;
	}
	return (b);
}
