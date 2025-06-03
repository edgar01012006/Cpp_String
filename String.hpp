#ifndef STRING_H
#define STRING_H
#include <iostream>

class String {
    private:
        char* data;
        size_t size;
    public:
        String();
        String(const char*);
        ~String();
        size_t getLength() const; // excluding the null terminator
        const char* getString() const;
        void print() const;
};

#endif /* STRING_H */
            
