#pragma once

#include <string>
#include <iostream>

class Brain 
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        Brain(const Brain &src);
        ~Brain();

        Brain &operator=(const Brain &copy);
        const std::string	getIdea(size_t i) const;
        void	setIdea(size_t i, std::string idea) ;
};
