/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 16:36:17 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/06 16:36:17 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}