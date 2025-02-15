#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::string input = "turpentine and turtles";

    //Creating a vector
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    std::vector<char> result; 

    //Nested loop for checking vowels in dialogue1
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 0; j < vowels.size(); j++)
        {
            if(input[i] == vowels[j])
                result.push_back(input[i]);
        }

        if(input[i] == 'e' || input[i] == 'u')
            result.push_back(input[i]);
    }

    for(int k = 0; k < result.size(); k++)
        {
            std::cout << result[k];
            std::cout << "\n";
        }
}