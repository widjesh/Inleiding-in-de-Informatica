/*
Gegeven het volgend programma:
*/
#include <iostream>

int main(){
    int x,y,z;
    std::cin >> x;
    while(x<6){
        y = 3;
        while (y<5){
            for(z=0;z<2;z++){
                std::cout << x << y << z << std::endl;
            }
            y++;
        }
        x++;
    }
    return 0;
}


/*
a) Wat zal op het scherm worden afgedrukt, als voor de variabele x de waarde 2 wordt ingevoerdt? (20 punten)
b) Voor welke x waarden zal dit programma geen resultaten op het scherm afdrukken? (5 punten)
*/