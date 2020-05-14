#include <iostream>

    class Squart {

    public:

     long double radi_kand;

             Squart ( long double radikand, long double itter_ation ) {  // Constructor

             long double sqrt ( long double radikand, long double itter_ation );  // Methode ermittelt n^2

             long double itteration ( float radi_kand, double zahl2_, long double zahl1_ ); // Methode. Waehlt die Anzahl der Itterationen
                                                         // (nach intuitiver Laufzeit)
                                                         // Ab 2 bis 100 Million ist die Rechenzeit ca. gleich
     }



    long double itteration ( float radi_kand ) {

            float itter_ation;

            if ( radi_kand <=     100 )                           { itter_ation = 0.00000001; }
            if ( radi_kand >      100 && radi_kand <=     10000 ) { itter_ation = 0.0000001; }
            if ( radi_kand >    10000 && radi_kand <=    100000 ) { itter_ation = 0.000001; }
            if ( radi_kand >   100000 && radi_kand <=   1000000 ) { itter_ation = 0.00001; }
            if ( radi_kand >  1000000 && radi_kand <=  10000000 ) { itter_ation = 0.0001; }
            if ( radi_kand > 10000000 )                           { itter_ation = 0.001; }

            std::cout << "\n  radikand Itteration ab  " << itter_ation <<"  bis 1" << std::endl;

            return itter_ation;
    }



    long double itteration ( long double zahl1_ ) {

            long double itter_ation;


            if ( zahl1_ <=     100 )                        { itter_ation = 0.00000001; }
            if ( zahl1_ >      100 && zahl1_ <=     10000 ) { itter_ation = 0.0000001; }
            if ( zahl1_ >    10000 && zahl1_ <=    100000 ) { itter_ation = 0.000001; }
            if ( zahl1_ >   100000 && zahl1_ <=   1000000 ) { itter_ation = 0.00001; }
            if ( zahl1_ >  1000000 && zahl1_ <=  10000000 ) { itter_ation = 0.0001; }
            if ( zahl1_ > 10000000 )                        { itter_ation = 0.001; }

            std::cout << "  Zahl 1   Itteration ab  " << itter_ation <<"  bis 1" << std::endl;

            return itter_ation;
    }



    long double itteration ( double zahl2_ ) {

            double itter_ation;


            if ( zahl2_ <=     100 )                        { itter_ation = 0.00000001; }
            if ( zahl2_ >      100 && zahl2_ <=     10000 ) { itter_ation = 0.0000001; }
            if ( zahl2_ >    10000 && zahl2_ <=    100000 ) { itter_ation = 0.000001; }
            if ( zahl2_ >   100000 && zahl2_ <=   1000000 ) { itter_ation = 0.00001; }
            if ( zahl2_ >  1000000 && zahl2_ <=  10000000 ) { itter_ation = 0.0001; }
            if ( zahl2_ > 10000000 )                        { itter_ation = 0.001; }

            std::cout << "  Zahl 2   Itteration ab  " << itter_ation <<"  bis 1" << std::endl;

            return itter_ation;

}


    long double sqrt ( long double radikand, long double ItteRation ) {

            long double quadratzahl;
            long double i;
            long double radik_and;


            if ( radikand ==           2 )                             { i =      i;  radik_and = radikand/1.999999; }
            if ( radikand >            2 && radikand <=          100 ) { i =      i;  radik_and = radikand/1.999999; }
            if ( radikand >          100 && radikand <=         1000 ) { i =     10;  radik_and = radikand/5;  }
            if ( radikand >         1000 && radikand <=        10000 ) { i =     30;  radik_and = radikand/20; }
            if ( radikand >        10000 && radikand <=       100000 ) { i =     99;  radik_and = radikand/95; }
            if ( radikand >       100000 && radikand <=      1000000 ) { i =    200;  radik_and = radikand/90; }
            if ( radikand >      1000000 && radikand <=     10000000 ) { i =    900;  radik_and = radikand/500; }
            if ( radikand >     10000000 && radikand <=    100000000 ) { i =   3000;  radik_and = radikand/3000; }
            if ( radikand >    100000000 && radikand <=   1000000000 ) { i =   9500;  radik_and = radikand/9400; }
            if ( radikand >   1000000000 && radikand <=  10000000000 ) { i =  31000;  radik_and = radikand/31000; }
            if ( radikand >  10000000000 && radikand <= 100000000000 ) { i =  95000;  radik_and = radikand/90000; }
            if ( radikand > 100000000000 )                             { i = 310000;  radik_and = radikand/310000; }


            for ( long double i = 1; i < radik_and; ++i ) {


            if ( i * i == radikand ) {

                quadratzahl = i;

                }


            if ( (i * i) != radikand )  {


                 for ( long double ii=0.00000001; ii < 0.99999999; ii+= ItteRation ) {


                    if  ( (i+ii) * (i+ii) <= (radikand - 0.00000001) )  {

                        quadratzahl = (i+ii);

                }
            }
        }
    }


    return quadratzahl;

    }


};
