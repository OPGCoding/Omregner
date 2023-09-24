/*
Lav et program, der kan konvertere mellem imperiske og metriske mål, og temperatur mellem fahrenheit og celsius.
*/


#include <iostream>
using namespace std;


int main() {
    // Variabler
    double Mile = 1609.344;
    double Fahrenheit = 33.8;
    double Miles = 1609.344;
    double Foot = 0.0833;

    string fejl = "Der skete en fejl!\n";


    // Input variabler
    string GraderType;
    double AmountInput;
    string ImperiskMile;
    string ImperiskInch;
    string MetriskKg;
    string MetriskLiter;
    string MetriskSekunder;

    int Type;
    cout << "\n==========================================\n";
    cout << "Vælge 1 eller 2: \n 1) Grader\n 2) Miles\n 3) Inch\n 4) Kg\n 5) Liter\n 6) Sekunder\n";
    cin >> Type;

    switch (Type) {
    case 1:
        // Input for grader
        cout << "Vælge 1 eller 2: \n 1) Celsius\n 2) Fahrenheit\n";
        cin >> GraderType;

        if (GraderType == "1" || GraderType == "Celcius") {
            cout << "Hvor mange celcius skal konverteres til Fahrenheit? ";
            cin >> AmountInput;

            // Output
            double CelToFah = (AmountInput * 1.8) + 32;
            cout << AmountInput << " celcius svarer til " << CelToFah << " fahrenheit\n";
        }
        else if (GraderType == "2" || GraderType == "Fahrenheit") {
            cout << "Hvor mange Fahrenheit skal konverteres til celsius? ";
            cin >> AmountInput;

            // Output 5/9 i decimal = 0.56
            double dec = 5.0 / 9.0;
            double FahToCel = (AmountInput - 32) * dec;
            cout << AmountInput << " fahrenheit svarer til " << FahToCel << " celsius\n";
        }
        else {
            cout << fejl;
        }
        break;
    case 2:
        cout << "Vælge 1,2 eller 3: \n 1) Miles\n 2) Meter\n 3) Km\n";
        cin >> ImperiskMile;

        if (ImperiskMile == "1" || ImperiskMile == "Miles") {
            // Input for miles
            double MilesInput;
            cout << "Hvor mange miles skal konverteres: ";
            cin >> MilesInput;

            double MilesOutput = MilesInput * Mile;
            cout << MilesInput << " miles --> " << MilesOutput << " meter --> " << MilesOutput / 1000 << " Km. \n";
        }
        else if (ImperiskMile == "2" || ImperiskMile == "Meter") {
            // Input for miles
            double MeterInput;
            cout << "Hvor mange Meter skal konverteres: ";
            cin >> MeterInput;

            double MilesOutput = MeterInput / Mile;
            cout << MilesOutput << " miles --> " << MeterInput << " meter --> " << MeterInput / 1000 << " Km. \n";
        }
        else if (ImperiskMile == "3" || ImperiskMile == "Km") {
            // Input for miles
            double KmInput;
            cout << "Hvor mange Km skal konverteres: ";
            cin >> KmInput;

            double MilesOutput = KmInput / Mile;
            cout << MilesOutput * 1000 << " miles --> " << KmInput * 1000 << " meter --> " << KmInput << " Km. \n";
        }
        else {
            cout << fejl;
        }
        break;
    case 3:
        // Input for Inch
        cout << "Vælge 1,2 & 3: \n 1) Inch\n 2) Centimeter\n 3) Foot\n";
        cin >> ImperiskInch;

        if (ImperiskInch == "1" || ImperiskInch == "Inch") {
            // Input Inch
            double InchInput;
            cout << "Hvor mange Inch skal konverteres: ";
            cin >> InchInput;

            double CmOutput = InchInput * 2.54;
            cout << InchInput << " inch --> " << CmOutput << " cm. --> " << InchInput / 12 << " foot\n";
        }
        else if (ImperiskInch == "2" || ImperiskInch == "Centimeter") {
            // Input Centimeter
            double CmInput;
            cout << "Hvor mange Centimeter skal konverteres: ";
            cin >> CmInput;

            double CmOutput = CmInput / 2.54;
            double FootOutput = CmInput / 30.48;
            cout << CmOutput << " inch --> " << CmInput << " cm. --> " << FootOutput << " foot\n";
        }
        else if (ImperiskInch == "3" || ImperiskInch == "Foot") {
            // Input Foot
            double FootInput;
            cout << "Hvor mange foot skal konverteres: ";
            cin >> FootInput;

            double CmOutput = FootInput / 2.54;
            double InchOutput = FootInput * 12.0;
            cout << InchOutput << " inch --> " << FootInput * 30.48 << " cm. --> " << FootInput << " foot.\n";
        }

        break;

    case 4:
        // Input for Kg
        cout << "Vælge 1,2 & 3: \n 1) Miligram\n 2) Gram\n 3) Kilogram\n";
        cin >> MetriskKg;

        if (MetriskKg == "1" || MetriskKg == "Miligram") {
            // Input for miligram
            double MgInput;
            cout << "Hvor mange miligram skal konverteres: ";
            cin >> MgInput;

            double MgOutput = MgInput / 1000;
            cout << MgInput << " mg --> " << MgOutput << " g. " << MgOutput / 1000 << " kg.\n";
        }
        else if (MetriskKg == "2" || MetriskKg == "Gram") {
            // Input for Gram
            double GInput;
            cout << "Hvor mange gram skal konverteres: ";
            cin >> GInput;

            double GOutput = GInput / 1000;
            cout << GInput * 1000 << " mg --> " << GInput << " g. " << GOutput << " kg.\n";
        }
        else if (MetriskKg == "3" || MetriskKg == "Kilogram") {
            // Input for Kilogram
            double KgInput;
            cout << "Hvor mange kilogram skal konverteres: ";
            cin >> KgInput;

            double KgOutput = KgInput * 1000;
            cout << KgOutput * 1000 << " mg --> " << KgOutput << " g. " << KgInput << " kg.\n";
        }
        else {
            cout << fejl;
        }

        break;
    case 5:
        // Input for Liter
        cout << "Vælge 1 & 2: \n 1) Milliliter\n 2) Liter\n";
        cin >> MetriskLiter;

        if (MetriskLiter == "1" || MetriskLiter == "Milliliter") {
            // Input for milliliter
            double MlInput;
            cout << "Hvor mange milliliter skal konverteres: ";
            cin >> MlInput;

            double MlOutput = MlInput / 1000;
            cout << MlInput << " ml --> " << MlOutput << " liter\n";
        }
        else if (MetriskLiter == "2" || MetriskLiter == "Liter") {
            // Input for liter
            double LInput;
            cout << "Hvor mange milliliter skal konverteres: ";
            cin >> LInput;

            double MlOutput = LInput * 1000;
            cout << MlOutput << " ml --> " << LInput << " liter\n";
        }
        else {
            cout << fejl;
        }
        break;
    case 6:
        cout << "Vælge 1,2 & 3: \n 1) Sekunder\n 2) Minutter\n 3) Timer\n";
        cin >> MetriskSekunder;

        if (MetriskSekunder == "1" || MetriskSekunder == "Sekunder") {
            // Input for sekunder
            double SekInput;
            cout << "Hvor mange sekunder skal konverteres: ";
            cin >> SekInput;

            double SekOutput = SekInput / 60;
            cout << SekInput << " sek. --> " << SekOutput << " min. --> " << SekOutput / 60 << " hour(s)\n";
        }
        else if (MetriskSekunder == "2" || MetriskSekunder == "Minutter") {
            // Input for minutter
            double MinInput;
            cout << "Hvor mange minutter skal konverteres: ";
            cin >> MinInput;

            double MinOutput = MinInput / 60;
            cout << MinInput * 60 << " sek. --> " << MinInput << " min. --> " << MinOutput << " hour(s)\n";
        }
        else if (MetriskSekunder == "3" || MetriskSekunder == "Timer") {
            // Input for timer
            double TimerInput;
            cout << "Hvor mange timer skal konverteres: ";
            cin >> TimerInput;

            double TimerOutput = TimerInput * 60;
            cout << TimerOutput * 60 << " sek. --> " << TimerOutput << " min. --> " << TimerInput << " hour(s)\n";
        }
        else {
            cout << fejl;
        }
        break;

    default:
        cout << fejl;
        break;
    }
}