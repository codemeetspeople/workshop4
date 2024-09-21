#ifndef LOCATION_HPP 
#define LOCATION_HPP

#include <iostream>

class Location {
    private:
        int x;
        int y;

    public:
        Location(int x = 0, int y = 0);
        
        int getX() const;
        int getY() const;
        
        double distance(const Location& other) const;
};

std::ostream& operator<<(std::ostream& out, const Location& loc);

#endif
