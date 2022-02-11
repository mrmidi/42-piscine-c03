/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:58:54 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 20:58:54 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	to;
	unsigned int	from;
	unsigned int	srcl;

	srcl = ft_strlen(src);
	if (size == 0)
		return (srcl);
	to = 0;
	while (*(dest + to) != '\0')
		to++;
	from = 0;
	while ((*(src + from) != '\0') && (to < size - 1))
	{
		*(dest + to) = *(src + from);
		from++;
		to++;
	}
	*(dest + to) = '\0';
	if (src[from] == '\0')
		return (to);
	return (to + 1);
}
