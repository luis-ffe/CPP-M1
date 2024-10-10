/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-ffe <luis-ffe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:51:10 by luis-ffe          #+#    #+#             */
/*   Updated: 2024/09/24 15:26:21 by luis-ffe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>

int    ft_replace( std::string s1, std::string s2 , char *filename)
{
    std::size_t pos;
    std::string buffer;
    std::string newBuffer;
    std::ifstream i_file(filename);
	
    if (!i_file.is_open()) {
        std::cerr << "Error opening the file" << std::endl;
        return (EXIT_FAILURE);
    }
    std::ofstream newFile( (std::string(filename) + ".replace").c_str() );
    if (!newFile.is_open()){
        std::cerr << "Error creating file" << std::endl;
        return (EXIT_FAILURE);
    }
    while ( i_file.good()) {
        newBuffer = i_file.get();
        if (!i_file.eof())
            buffer += newBuffer;
    }
    pos = buffer.find( s1 );
    while ( pos != std::string::npos ) {
        try {
            buffer.erase(pos, s1.length());
            buffer.insert(pos, s2);
        }
        catch (std::out_of_range&) {
            std::cerr << "Out of range in buffer" << std::endl;
        }
        catch (std::length_error&) {
            std::cerr << "Length error in buffer" << std::endl;
        }
        pos = buffer.find( s1 );
    }
    newFile << buffer;
    return (EXIT_SUCCESS);
}

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "wrong arguments" << std::endl << "Use:  ./replace <file_name> <search> <replace>" << std::endl;
	}
	else {
		const std::string	search = argv[2];
		const std::string	replace = argv[3];
		
		if (ft_replace(search, replace, argv[1])) {
			return(EXIT_FAILURE);
		}
		return(EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}

