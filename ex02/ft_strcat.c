/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:28:16 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 14:28:16 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	to;
	int	from;

	to = 0;
	while (*(dest + to) != '\0')
		to++;
	from = 0;
	while (*(src + from) != '\0')
	{
		*(dest + to) = *(src + from);
		from++;
		to++;
	}
	*(dest + to) = '\0';
	return (dest);
}
