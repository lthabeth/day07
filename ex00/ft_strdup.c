/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:04:00 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/26 17:10:18 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
#include<string.h>
char *ft_strdup(char *src)
{
	char array1[]="hello";
	char *p;
	printf("%s\n",array1);
	p = strdup(array1);
	return(0);
}
int main()
{
	ft_strdup();
}
