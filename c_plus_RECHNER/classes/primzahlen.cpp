#include <iostream>
#include <algorithm>
class PrimZahlen {

public:

    PrimZahlen ( int summe );

    Prim_Zahlen ( int summe ) {

    int maxi;         // Obergrenze, bis zu der Primzahlen gesucht werden

    int max_2;       // halbe Obergrenze, da nur ungerade Zahlen angelegt werden

    int i = 0;
    int counter= 0;
    // int zaehler=0;

    int *value;

    int ii=0;
    int j=0;

    char *zeile;

    static int k;    // Devisor

    char meth;
    int auswahl;


    std::cout << "\n\n  BIS ZU WELCHER OBERGRENZE SOLLEN\n  PRIMZAHLEN GESUCHT WERDEN.\n\n  Geben Sie die Zahl ein: \n\n  ";
    std::cin >> maxi;

    std::cout << "\n\n\n";



    std::cout << "   Wie soll die Ausgabe erfolgen:\n";
    std::cout << "\n";
    std::cout << "   Auf der Console   ( 1 )\n";
    std::cout << "   In eine Datei     ( 2 )\n";
    std::cout << "   Beides            ( 3 )\n";
    std::cout << "   Nur Zeit messen   ( 4 )\n\n";
    std::cout << "   Treffen Sie Ihre Wahl:\n";


    std::cout << "\n  -- ";
    std::cin >> auswahl;
    std::cout << "\n";


    // Array deklarieren und initialisieren

    max_2 = maxi/2; // Halbe Anzahl, da nur ungeraden Zahlen in Frage kommen

    int array[max_2+1];

    array[0]=2; // erste Primzahl ist 2


    // Array mit ungeraden Zahlen gewäß Obergrenze befüllen

    for ( i = 3, ii = 1; ii < max_2; i+=2, ii++ ) {

            array[ii] = i;

            }

/////////////////////////////////////////////////////////////////////////////////////////////////////

       // Die Vielfachen von Prim 3, 5 und 7 mit 0 markieren
       // Hat sich als vorteilhaft rausgestellt

       for ( i = 4; i < max_2; i++ ) {

            if ( array[i] % 3 == 0 ) {

                 array[i] = 0;
            }

            if ( array[i] % 5 == 0 ) {

                 array[i] = 0;
            }

            if ( array[i] % 7 == 0 ) {

                 array[i] = 0;

            }

       }

/////////////////////////////////////////////////////////////////////////////////////////////////////



//    for ( i = 4 ; i < max_2; i++ ) {
//
//             k = i;
//
//        if ( k < sqrt(max_2) ) {
//
//
//            for ( ii = k; ii < max_2; ii++ ) {
//
//
//                if ( array[ii] > array[i] && array[i] > 0 ) {
//
//
//                    if ( array[ii] % array[i] == 0 ) { // nicht prim, mit 0 markieren
//
//                   array[ii] = 0;
//
//                }
//            }
//        }
//    }
//}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////


    FILE *fp;
    fp=fopen("primzahlen.csv","w");

    if( fp != NULL ) {


        for ( j = 0; j < max_2; j++ ) {

        if (array[j] > 0 ) { // Primzahlen ausgeben

            counter++;

        if (counter == 14 ) { zeile = "\n"; counter = 0; } // Zeilenumbruch


            if ( auswahl == 1 ) {

                printf("%6d %s", array[j], zeile );       // Ausgabe auf der Konsole

                zeile = " ";
            }

            if ( auswahl == 2 ) {
                fprintf(fp, "%6d %s", array[j], zeile );  // Ausgabe in Datei

                zeile = " ";
            }


            if ( auswahl == 3 ) {
                fprintf(fp, "%6d; %s", array[j], zeile );  // Ausgabe in Datei
                printf("%6d %s", array[j], zeile );        // Ausgabe auf der Konsole

                zeile = " ";
            }


            if ( auswahl == 4 ) {
            }

    }
 }

            if ( auswahl == 2 || auswahl == 3 ) {

                printf("\n\n  Die Datei \"primzahlen.csv\" liegt in dem Verzeichnis,\n  in welches die \"Sieb_des_Eratosthenes.exe\" kopiert wurde.\n  Die Datei ist evtl. anzulegen");
            }

    }


    if ( auswahl != 4 ) {

    printf("\n\n");

    printf("beenden mit \"0\": ");scanf("%s",&meth);

    if ( meth == 0 ) {

    EXIT_SUCCESS;

    }
    }

    if ( auswahl == 4 ) {

       EXIT_SUCCESS;

    }

}
};



