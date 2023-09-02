#ifndef WARLOCK_HPP
# define WARLOCK_HPP


#include <iostream>
#include <string>

class Warlock 
{
    private:
        std::string _name;
        std::string _title;
        Warlock(); //default
        Warlock(const Warlock &copy); //by copy

    public:
        Warlock(std::string name, std::string title);
        ~Warlock(); //destructor

        Warlock& operator=(const Warlock &rhs);
        std::string getName(void) const;
        std::string getTitle(void) const;
        void    setTitle(std::string title);
        void    introduce(void) const;

};


#endif