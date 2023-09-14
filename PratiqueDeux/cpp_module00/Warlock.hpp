#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {

    private:
        std::string _name;
        std::string _title;
        Warlock(); //default
        Warlock(const Warlock &copy);
        Warlock& operator=(const Warlock& rhs);

    public:
        Warlock(std::string const name, std::string const title);
        ~Warlock(); //destructor

        std::string const & getName(void) const;
        std::string const & getTitle(void) const;
        void    setTitle(std::string const & title);
        void    introduce(void) const;

};

#endif