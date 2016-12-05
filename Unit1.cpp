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
   

    std::cout << text << std::endl;
    getchar();

    return 0;
}

