#include "String.hpp"

int main() {
    const char* str = "Picsart";
    String obj(str);
    obj.print();
    std::cout << "Length = " << obj.getLength() << std::endl;
    std::cout << "obj = " << obj.getString() << std::endl;
}
