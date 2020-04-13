/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanhan <sanhan@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:33:07 by sanhan            #+#    #+#             */
/*   Updated: 2020/04/12 22:55:37 by sanhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if ((long long)dst = (long long)src)
		return (dst);
	else if ((long long)dst < (long long)src)
		ft_memcpy(dst, src, len);
	else
		ft_rev_memcpy(dst, src, len);
	return (dst);
}
