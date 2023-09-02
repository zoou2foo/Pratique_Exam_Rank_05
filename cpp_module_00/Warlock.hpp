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
        Warlock& operator=(const Warlock &rhs);

    public:
        Warlock(std::string name, std::string title); //do I need to add const + &??
        ~Warlock(); //destructor

        std::string getName(void) const; //add const with string?? for both
        std::string getTitle(void) const;
        void    setTitle(std::string title); //const + &???
        void    introduce(void) const;

};


#endif