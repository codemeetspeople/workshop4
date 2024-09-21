#include "NotEnoughCapacityException.hpp"

NotEnoughCapacityException::NotEnoughCapacityException(const std::string& message) {
    this->message = message;
}

const std::string& NotEnoughCapacityException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const NotEnoughCapacityException& exc) {
    out << exc.getMessage() << std::endl;
    return out;
}