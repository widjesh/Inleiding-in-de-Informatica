/*
Je krijgt de opdracht om een programma te schrijven, 
waarbij de gebruiker een willekeurig aantal positieve gehele getallen moet invoeren. 
Het invoeren moet stoppen, zodra een waarde kleiner of gelijk aan 0 wordt ingevoerd. 
Het programma moet de som van de ingevoerde even getallen en de som van de ingevoerde oneven getallen bepalen. 
De resultaten moeten daarna op het scherm worden getoornd.
Stel een algoritme op voor het kunnen schrijven van het programma.
*/

#include <iostream>

int main() {
    int evenSum = 0, oddSum = 0;
    int userInput;

    do {
        std::cout << "Voer een positief geheel getal in (stop met invoeren als de waarde <= 0 is): ";
        std::cin >> userInput;

        if (userInput > 0) {
            if (userInput % 2 == 0) {
                evenSum = evenSum + userInput;
            } else {
                oddSum = oddSum + userInput;
            }
        }

    } while (userInput > 0);

    std::cout << "Som van even getallen: " << evenSum << std::endl;
    std::cout << "Som van oneven getallen: " << oddSum << std::endl;

    return 0;
}