/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilveir <asilveir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:06:29 by asilveir          #+#    #+#             */
/*   Updated: 2024/12/10 21:14:07 by asilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	// if (argc < 5)
	// 	write(1, "Error\nNumber of arguments is less than 5.", 41);
	char	*args[];
	char	*env[];

	args = {argv[1], "-l", NULL};
	env = {NULL};
	execve(argv[1], args, )

	// Execute another program in C, using exec
	// Use exec family of functions 
	execlp(
		"/bin/ping", 
		"ping",
		"google.com",
		NULL
	);
	printf("Ping finished executing!\n");
	return (0);
}
// Your program will be executed as follows:
// ./pipex file1 cmd1 cmd2 file2
// It must take 4 arguments:
// • file1 and file2 are file names.
// • cmd1 and cmd2 are shell commands with their parameters