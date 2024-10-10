/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:23:37 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/12 10:23:38 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void to_uppercase(std::string &str)
{
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        str[i] = static_cast<char>(std::toupper(static_cast<unsigned char>(str[i])));
    }
}

int main(int argc, char **argv)
{
    std::string input;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    for (int i = 1; i < argc; i++)
    {
        //input = (std::string)argv[i]; bellow the direct use of the constructor is a preffered way
        input = std::string(argv[i]);
        to_uppercase(input);
        std::cout << input;
    }
    std::cout << std::endl;
    return (0);
}
