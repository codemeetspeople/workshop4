#ifndef NOT_ENOUGH_CAPACITY_EXCEPTION_HPP
#define NOT_ENOUGH_CAPACITY_EXCEPTION_HPP

#include <iostream>

class NotEnoughCapacityException {
    private:
        std::string message;
    public:
        NotEnoughCapacityException(const std::string& message);
        const std::string& getMessage() const;
};

std::ostream& operator<<(std::ostream& out, const NotEnoughCapacityException& exc);

#endif