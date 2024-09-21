#include "Location.hpp"
#include <cmath>

Location::Location(int x, int y) {
    this->x = x;
    this->y = y;
}

int Location::getX() const { return this->x; }
int Location::getY() const { return this->y; }

double Location::distance(const Location& other) const {
    return hypot(this->x-other.x, this->y-other.y);
}

std::ostream& operator<<(std::ostream& out, const Location& loc) {
    out << "(" << loc.getX() << ", " << loc.getY() << ")";
    return out;
}