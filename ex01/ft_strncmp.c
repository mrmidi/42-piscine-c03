/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:43:35 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 14:28:16 by ashabeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int			i;
	unsigned char			a;
	unsigned char			b;

	if (n == 0)
		return (0);
	i = 1;
	while ((i < n - 1) && (s1[i] == s2[i]))
		i++;
	a = 0;
	b = 0;
	a += s1[i];
	b += s2[i];
	return (a - b);
}
