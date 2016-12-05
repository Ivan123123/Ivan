#include <iostream>
#include <string>
 
void trim(std::string &str)
{
    int pos = str.find_first_not_of(" \t\r\n");
    str.erase(0, pos);
    pos = str.find_last_not_of(" \t\r\n");
    str.erase(pos+1, str.size()-pos);
}
 
int main()
{
    std::string text;
    std::getline(std::cin, text);
    trim(text);
    int begin_word = 1, end_word;
    char temp;
    while ((begin_word = text.find_first_not_of(" \t\r\n", begin_word)) != std::string::npos)
    {
        
        end_word = text.find_first_of(' ', begin_word);
        if (end_word == std::string::npos)
            end_word = text.size();
        end_word -= 1;
        temp = text[begin_word];
        text[begin_word] = text[end_word];
        text[end_word] = temp;
        begin_word = end_word+1;
    }
    
    std::cout << text << std::endl;
    getchar();

    return 0;
}
