#include <iostream>
#include <string>
using std::cout;

int main () 
{
    cout << "What is your name?\n";
    std::string name;
    std::cin >> name;
    std::cout << "Your name is "<< name << std::endl;
    system("pause");
    return 0;
}