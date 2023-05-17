#include <string>
#include <iostream>

#include "function.h"

int main()
{
    int forbidden_length = 0;
    
    std::cout << "Enter forbidden length: ";
    std::cin >> forbidden_length;
    
    bool forbidden_word_entered = false;
    while(!forbidden_word_entered)
    {
        std::cout << "Enter your word: ";
        std::string user_word;
        std::cin >> user_word;
        
        int length = 0;
        
        try
        {
            length = function(user_word, forbidden_length);
        }
        catch(const std::string& ex)
        {
            forbidden_word_entered = true;
            std::cout << ex << std::endl;
            continue;
        }
        
        std::cout << "The length of the word \'" << user_word << "\' is " << length << std::endl;
    }
    
    return 0;
}
