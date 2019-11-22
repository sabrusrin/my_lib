/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermist <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 04:08:26 by chermist          #+#    #+#             */
/*   Updated: 2019/11/21 19:16:15 by chermist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_qat(t_q *q, size_t at)
{
	if (q)
		return ((void*)&q->data[at * q->type_sz]);
	return (0);
}
