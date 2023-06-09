/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npaolett <npaolett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:25:57 by npaolett          #+#    #+#             */
/*   Updated: 2023/04/07 10:25:57 by npaolett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
  int i;

  i = 0;
  if (i < 1)
    return (0);
  if (nb == 1)
    return (1);
  while (i < 46340 && i * i < nb)
  {
    i++;
    if (i * i == nb)
      return (i);
  }
  return (0);
}