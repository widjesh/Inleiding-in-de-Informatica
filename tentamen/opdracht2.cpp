/*
Wat zijn de waarden van de variabelen a, b, c en d na het in 
aangegeven sequentie uitvoeren van de volgende C++ statements? 

Laat stapsgewijs na elke statement zien hoe je aan de antwoorden komt.
*/

#include <iostream>

int main() {
    int a = 15, b = 12, d = 13;
    float c = 6.5;
    c = a / 2 - c + b++; // 12.5
    d = 1 + 2 * 3 / 4 % 2 - 5 - ++a; // -19
    b = (a == 1); 
    a = d / 5 % 3;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;
    return 0;
}


// 101010100001110100101001
// 101010100001110100101001
// 101010100001110100101001
// 101010100001110100101001
// 101010100001110100101001
// 101010100001110100101001