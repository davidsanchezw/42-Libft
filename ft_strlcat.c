/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasanch2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:45:54 by dasanch2          #+#    #+#             */
/*   Updated: 2022/09/14 17:15:45 by dasanch2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	while (*(dst + i) != '\0')
	{
		i++;
	}
	if (dstsize < i)
		return (i + dstsize);
	j = 0;
	while (i < dstsize - 1 && *(src + j))
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
	}
	*(dst + i) = '\0';
	return (i);
}
