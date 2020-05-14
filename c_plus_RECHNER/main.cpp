#include <iostream>
#include "classes\addieren.cpp"
#include "classes\rechner.cpp"
#include "classes\sqrt.cpp"
#include "classes\primzahlen.cpp"




int main() {

    float ItteRation;
    long double ItteRation_1;
    double ItteRation_2;
    long double zahl1_;
    double zahl2_;
    char rechenzeichen;

        std::cout << " " << std::endl;
        std::cout << "  Zahl 1 eingeben: ";
        std::cin >> zahl1_;


        std::cout << "  Zahl 2 eingeben: ";
        std::cin >> zahl2_;
        std::cout << " " << std::endl;


        Rechnen rechner(zahl1_,zahl2_);  // Objekt "rechner" von class Rechnen erzeugen

        Addieren add(zahl1_, rechenzeichen, zahl2_); // Objekt "add" von class Addieren erzeugen


        float radi_kand = rechner.addieren(zahl1_, zahl2_);       // gibt die Summe aus
                          rechner.subtrahieren(zahl1_, zahl2_);   // und die
                          rechner.multiplizieren(zahl1_, zahl2_); // anderen Objekte
                          rechner.dividieren(zahl1_, zahl2_);     // von class Rechner


        Squart sqart (radi_kand, ItteRation); // Objekt sqrt von Squart erzeugen

        ItteRation = sqart.itteration( radi_kand );  // die Itterationen
        ItteRation_1 = sqart.itteration( zahl1_ );   // getrennt festlegen
        ItteRation_2 = sqart.itteration( zahl2_ );   // Zahl1, Zahl 2 und Summe



        std::cout << "\n " << std::endl;
        std::cout << "  n^2 von Summe  =  " << sqart.sqrt(radi_kand, ItteRation) << std::endl;
        std::cout << " " << std::endl;
        std::cout << "  n^2 von Zahl 1 =  " << sqart.sqrt(zahl1_, ItteRation_1) << std::endl;
        std::cout << " " << std::endl;
        std::cout << "  n^2 von Zahl 2 =  " << sqart.sqrt(zahl2_, ItteRation_2) << std::endl;



    add.add(zahl1_, rechenzeichen, zahl2_); // ganz am Schluss kann man hier die
                                            // Summe modifizieren (Grundrechenarten)

}
