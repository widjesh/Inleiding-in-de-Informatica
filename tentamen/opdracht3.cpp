/*
Schrijf een program-defined function genaamd priemGetal,
die als parameter een geheel getal ontvangt. 
De function moet nagaan als het getal een priemgetal is. 
Als resultaat moet dan true worden gegeven als het getal een priemgetal is 
en false indien van niet. Laat in de main function zien hoe jouw function gebruikt wordt. 
(Priemgetallen zijn gehele getallen, groter of gelijk aan 2, die alleen deelbaar zijn door 1 en door zichzelf). 
*/


#include <iostream>

bool isPrimeNumber(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int getal;

    // Gebruiker om invoer vragen
    std::cout << "Voer een geheel getal in: ";
    std::cin >> getal;

    // Controleren of het getal een priemgetal is en het resultaat weergeven
    if (isPrimeNumber(getal)) {
        std::cout << getal << " is een priemgetal." << std::endl;
    } else {
        std::cout << getal << " is geen priemgetal." << std::endl;
    }

    return 0;
}