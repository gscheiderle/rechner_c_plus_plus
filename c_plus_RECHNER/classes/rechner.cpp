#include <iostream>

    class Rechnen{
        public:
            Rechnen(float zahl1,float zahl2){

                float addieren(float zahl1, float zahl2 );
                float multiplizieren(float zahl1, float zahl2);
                float dividieren(float zahl1, float zahl2);
                float subtrahieren(float zahl1, float zahl2);
                }

        float addieren(float zahl1, float zahl2 ) {
                float summe;

                summe = zahl1 + zahl2;
                std::cout << "  Summe =           " << summe << std::endl;
                return summe;
        }


float subtrahieren(float zahl1, float zahl2) {
float ergebnis;

ergebnis = zahl1 - zahl2;
std::cout << std::endl;
std::cout << "  Ergebnis Sub. =   " <<  ergebnis << std::endl;
return ergebnis;
}


float multiplizieren(float zahl1, float zahl2) {
float produkt;

produkt = zahl1 * zahl2;
std::cout << std::endl;
std::cout << "  Produkt =         " << produkt << std::endl;
return produkt;
}

float dividieren(float zahl1, float zahl2) {
float ergebnis;

ergebnis = zahl1 / zahl2;
std::cout << std::endl;
std::cout << "  Ergebnis Div. =   " << ergebnis << std::endl;
return ergebnis;

}

private:
    float zahl1_;
    float zahl2_;



};
