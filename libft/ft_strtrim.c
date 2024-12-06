/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-10 17:00:21 by abreuil           #+#    #+#             */
/*   Updated: 2024-09-10 17:00:21 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(const char *s)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*new;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] && ft_isspace(s[start]) == 1)
		start++;
	if (s[start] == '\0')
		return (ft_strdup(""));
	end = ft_strlen(s) - 1;
	while (end > start && ft_isspace(s[end]) == 1)
		end--;
	len = end - start + 1;
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	ft_strncpy(new, s + start, len);
	new[len] = '\0';
	return (new);
}

/*int main() 
{
    // Test cases for ft_strtrim
    const char *test1 = "   Hello, World!   ";
    const char *test2 = "NoSpaces";
    const char *test3 = "      ";
    const char *test4 = "\t  Trimming\tExample  \n";
    
    // Trimming results
    char *result1 = ft_strtrim(test1);
    char *result2 = ft_strtrim(test2);
    char *result3 = ft_strtrim(test3);
    char *result4 = ft_strtrim(test4);

    // Print results
    printf("Original: \"%s\" -> Trimmed: \"%s\"\n", test1, result1);
    printf("Original: \"%s\" -> Trimmed: \"%s\"\n", test2, result2);
    printf("Original: \"%s\" -> Trimmed: \"%s\"\n", test3, result3);
    printf("Original: \"%s\" -> Trimmed: \"%s\"\n", test4, result4);

    // Free allocated memory
    free(result1);
    free(result2);
    free(result3);
    free(result4);

    return 0;
}*/