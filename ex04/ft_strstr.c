/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashabeln <ashabeln@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:17:58 by ashabeln          #+#    #+#             */
/*   Updated: 2022/02/10 17:17:58 by ashabeln         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int				i;
	unsigned int	len;
	char			*ptr;

	len = ft_strlen(to_find);
	if (len == 0)
		return (str);
	ptr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (!ft_strncmp(str + i, to_find, len))
				return (str + i);
		}
		i++;
	}
	return (ptr);
}
