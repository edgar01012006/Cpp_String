#include "String.hpp"

String::~String() {
    delete[]data;
    data = nullptr;
}
