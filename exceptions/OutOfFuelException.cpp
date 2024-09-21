#include "OutOfFuelException.hpp"

OutOfFuelException::OutOfFuelException(const std::string& message) {
    this->message = message;
}

const std::string& OutOfFuelException::getMessage() const {
    return this->message;
}

std::ostream& operator<<(std::ostream& out, const OutOfFuelException& exc) {
    out << exc.getMessage() << std::endl;
    return out;
}
