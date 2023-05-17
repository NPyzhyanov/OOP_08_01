#include <string>

#include "function.h"

int function(std::string str, int forbidden_length)
{
    int length = str.length();
    
    if (length == forbidden_length)
    {
        std::string ex = "You have entered a forbidden word! Goodbye";
        throw ex;
    }
    
    return length;
}
