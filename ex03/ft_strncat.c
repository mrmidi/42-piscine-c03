/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:01:03 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 15:01:03 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	to;
	unsigned int	from;

	to = 0;
	while (*(dest + to) != '\0')
		to++;
	from = 0;
	while ((*(src + from) != '\0') && (from < nb))
	{
		*(dest + to) = *(src + from);
		from++;
		to++;
	}
	*(dest + to) = '\0';
	return (dest);
}
