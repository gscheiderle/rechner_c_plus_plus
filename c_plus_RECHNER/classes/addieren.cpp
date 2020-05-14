class Addieren {

public:
    Addieren ( float zahl1, char rechenzeichen, float zahl2 ) {

    float add(float zahl1, char rechenzeichen, float zahl2 );

    }

float add(float zahl1, char rechenzeichen, float zahl2 ) {

    float summe;

    summe += (zahl1+zahl2);
    std::cout << "\n" << std::endl;
    std::cout << "  Die Summe " << summe << "  manipulieren mit den Grundrechnungsarten" << std::endl;
    std::cout << "  Beenden mit 'x'    " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "  Zuerst Rechenzeichen(+, -, /, *) eingeben: " << std::endl;
    std::cout << "  ";
    std::cin >> rechenzeichen;

    while ( rechenzeichen != 'x' ) {

    while ( rechenzeichen == '+' ) {
    std::cin >> zahl2;
    summe += zahl2;
    std::cout << "  ";
    std::cin >> rechenzeichen;
     }

    while ( rechenzeichen == '-' ) {
    std::cin >> zahl2;
    summe -= zahl2;
    std::cout << "  ";
    std::cin >> rechenzeichen;
    }

    while ( rechenzeichen == '/' ) {
    std::cin >> zahl2;
    summe /= zahl2;
    std::cout << "  ";
    std::cin >> rechenzeichen;
    }

    while ( rechenzeichen == '*' ) {
    std::cin >> zahl2;
    summe *= zahl2;
    std::cout << "  ";
    std::cin >> rechenzeichen;
    }

}

std::cout << " " << std::endl;
std::cout << "Summe = " << summe << std::endl;

if ( rechenzeichen == 'x') {
return 0;
}

    }

};
