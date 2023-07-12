#include <iostream>
#include "Windows.h"
#include <string>
#include <ctime>

using namespace std;



const char symbols[] = "+-/*!&$#?=@<>abcdefghijklnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
size_t symbols_size = sizeof(symbols) - 1;

void password_generator(size_t amount, size_t length);
char randomize_char();


int main()
{

    srand(time(NULL));

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    size_t amount = 0, length = 0; 

    std::cout << "Input amount password's: " << endl;
    cin >> amount;

    std::cout << "Input length password's: " << endl;
    cin >> length;

    password_generator(amount, length);



    return 0;
}
void password_generator(size_t amount, size_t length)
{
    string pass;
    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j < length; j++)
        {
            pass += randomize_char();
        }
        cout << pass << endl;
        pass = "";
    }
}

char randomize_char()
{
    return symbols[rand() % symbols_size];
}