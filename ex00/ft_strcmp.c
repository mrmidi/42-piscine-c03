/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:08:08 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 14:28:16 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int						i;
	unsigned char			a;
	unsigned char			b;

	i = 0;
	a = 0;
	b = 0;
	while ((s1[i]) && (s1[i] == s2[i]))
		i++;
	a += s1[i];
	b += s2[i];
	return (a - b);
}
