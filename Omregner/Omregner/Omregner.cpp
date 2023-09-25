/*
Lav et program, der kan konvertere mellem imperiske og metriske mål, og temperatur mellem fahrenheit og celsius.
*/


#include <iostream>
using namespace std;



/*#####################################
    Grader
#####################################*/
double celsiusToFahrenheit(double Celsius) {
	return (Celsius * 9.0 / 5.0) + 32;
}
double fahrenheitToCelsius(double Fahrenheit) {
	return (Fahrenheit - 32) * 5.0/9.0;
}

/*#####################################
    Metrisk
#####################################*/
double LængdeInput;
// Længde
double Kilometer = 1000;
double Meter;
double Centimeter = 0.01;
double Millimeter = 0.001;

// Konventere fra Kilometer
void convertLengthFromKilometers(double kilometers, double &meters, double &centimeters, double &millimeters) {
    meters = kilometers * 1000;
    centimeters = meters * 100;
    millimeters = meters * 1000;
}

// Konventere fra Meter
void convertLengthFromMeters(double meters, double& kilometers, double& centimeters, double& millimeters) {
	kilometers = meters / 1000;
	centimeters = meters * 100;
	millimeters = meters * 1000;
}

// Konventere fra Centimeter
void convertLengthFromCentimeters(double centimeters, double& meters, double& kilometers, double& millimeters) {
	meters = centimeters / 100;
	kilometers = meters / 1000;
	millimeters = centimeters * 10;
}

// Konventere fra Millimeter
void convertLengthFromMillimeters(double millimeters, double &meters, double &centimeters, double &kilometers) {
    meters = millimeters / 1000;
    centimeters = millimeters / 10;
    kilometers = meters / 1000;
}

// Vægt
double Kilogram;
double Gram;
double Milligram;

void convertWeightFromKilograms(double kilograms, double &grams, double &milligrams) {
    grams = kilograms * 1000;
    milligrams = kilograms * 1000000;
}

void convertWeightFromGrams(double grams, double &kilograms, double &milligrams) {
    kilograms = grams / 1000;
    milligrams = grams * 1000;
}

void convertWeightFromMilligrams(double milligrams, double &kilograms, double &grams) {
    kilograms = milligrams / 1000000;
    grams = milligrams / 1000;
}

// Volumen (Vand)
double Liter;
double Milliliter;
double Kubikscentimeter;

// Konvertere fra Liter
void convertVolumeFromLiters(double liters, double &milliliters, double &cubicCentimeters) {
    milliliters = liters * 1000;
    cubicCentimeters = liters * 1000;
}

// Konvertere fra Milliliters
void convertVolumeFromMilliliters(double milliliters, double &liters, double &cubicCentimeters) {
    liters = milliliters / 1000;
    cubicCentimeters = milliliters;
}

// Konvertere fra Cubic Centimeters
void convertVolumeFromCubicCentimeters(double cubicCentimeters, double &liters, double &milliliters) {
    liters = cubicCentimeters / 1000;
    milliliters = cubicCentimeters;
}


// Areal
double Kvdratmeter;
double kvadratdecimeter;
double kvadratcentimeter;

// Konvertere fra Kvadratmeter
void convertAreaFromSquareMeters(double squareMeters, double& squareDecimeters, double& squareCentimeters) {
    squareDecimeters = squareMeters * 100;
    squareCentimeters = squareMeters * 10000;
}

// Konvertere fra Kvadratdecimeter
void convertAreaFromSquareDecimeters(double squareDecimeters, double& squareMeters, double& squareCentimeters) {
    squareMeters = squareDecimeters / 100;
    squareCentimeters = squareDecimeters * 100;
}

// Konvertere fra Kvadratcentimeter
void convertAreaFromSquareCentimeters(double squareCentimeters, double& squareMeters, double& squareDecimeters) {
    squareMeters = squareCentimeters / 10000;
    squareDecimeters = squareCentimeters / 100;
}


/*#####################################
    Imperisk
#####################################*/

// Længde
double Inch;
double Foot;
double Yard;
double Mile;

// Konvertere fra Inch
void convertLengthFromInches(double inches, double &feet, double &yards, double &miles) {
    feet = inches / 12.0;
    yards = feet / 3.0;
    miles = yards / 1760.0;
}

// Konvertere fra Foot
void convertLengthFromFeet(double feet, double &inches, double &yards, double &miles) {
    inches = feet * 12.0;
    yards = feet / 3.0;
    miles = yards / 1760.0;
}

// Konvertere fra Yard
void convertLengthFromYards(double yards, double &inches, double &feet, double &miles) {
    feet = yards * 3.0;
    inches = feet * 12.0;
    miles = yards / 1760.0;
}

// Konvertere fra Mile
void convertLengthFromMiles(double miles, double &inches, double &feet, double &yards) {
    yards = miles * 1760.0;
    feet = yards * 3.0;
    inches = feet * 12.0;
}

// Vægt
double Pound;
double Ounce;
double Stone;

// Konvertere fra Pound
void convertWeightFromPounds(double pounds, double &ounces, double &stones) {
    ounces = pounds * 16.0;
    stones = pounds / 14.0;
}

// Konvertere fra Ounce
void convertWeightFromOunces(double ounces, double &pounds, double &stones) {
    pounds = ounces / 16.0;
    stones = pounds / 14.0;
}

// Konvertere fra Stone
void convertWeightFromStones(double stones, double &pounds, double &ounces) {
    pounds = stones * 14.0;
    ounces = pounds * 16.0;
}


// Volumen (vand)
double Gallon;
double Quart;
double Pint;
double FluidOunce;

// Konvertere fra Gallon
void convertVolumeFromGallons(double gallons, double &quarts, double &pints, double &fluidOunces) {
    quarts = gallons * 4.0;
    pints = quarts * 2.0;
    fluidOunces = pints * 16.0;
}

// Konvertere fra Quart
void convertVolumeFromQuarts(double quarts, double &gallons, double &pints, double &fluidOunces) {
    gallons = quarts / 4.0;
    pints = quarts * 2.0;
    fluidOunces = pints * 16.0;
}

// Konvertere fra Pint
void convertVolumeFromPints(double pints, double &gallons, double &quarts, double &fluidOunces) {
    gallons = pints / 8.0;
    quarts = pints / 2.0;
    fluidOunces = pints * 16.0;
}

// Konvertere fra Fluid Ounce
void convertVolumeFromFluidOunces(double fluidOunces, double &gallons, double &quarts, double &pints) {
    gallons = fluidOunces / 128.0;
    quarts = gallons * 4.0;
    pints = quarts * 2.0;
}


// Areal
double SquareInch;
double SquareFoot;
double SquareYard;

// Konvertere fra Square Inch
void convertAreaFromSquareInches(double squareInches, double &squareFeet, double &squareYards) {
    squareFeet = squareInches / 144.0;
    squareYards = squareFeet / 9.0;
}

// Konvertere fra Square Foot
void convertAreaFromSquareFeet(double squareFeet, double &squareInches, double &squareYards) {
    squareInches = squareFeet * 144.0;
    squareYards = squareFeet / 9.0;
}

// Konvertere fra Square Yard
void convertAreaFromSquareYards(double squareYards, double &squareInches, double &squareFeet) {
    squareInches = squareYards * 1296.0;
    squareFeet = squareYards * 9.0;
}


int main() {
	// FEJL
	string KategoriFejl = "Der blev ikke valgt nogen kategori!";

	// ## Variabler ##
	double Celsius;
	double Fahrenheit;


// Input variabler
	// Grader
	int Kategorier;
	int GraderKat;
	// Metrisk
	int MetriskKat;
	int ImperiskKat;
	int VolumenKat;
	int ArealKat;
	double Input;
	int Længde;
	// Imperisk
	int LængdeInput;
	int VægtInput;
	int VolumenInput;
	int ArealInput;


	// Vælge kategori
	cout << "\n ======================================================\n";
	cout << "Skriv 1,2 eller 3:\n 1) Grader\n 2) Metrisk \n 3) Imperisk\n";
	cin >> Kategorier;


// Kategorier
// ############################ Grader ############################
	if (Kategorier == 1) {
		// Grader | Celsius, Fahrenheit
		cout << "Skriv 1 eller 2: \n 1) Celsius til Fahrenheit\n 2) Fahrenheit til Celsius\n";
		cin >> GraderKat;

		if (GraderKat == 1) {
			cout << "Hvor mange celcius skal konventeres til fahenheit: ";
			cin >> Input;

			double CelToFah = celsiusToFahrenheit(Input);
			cout << Input << " celcius svarer til " << CelToFah << " fahrenheit\n";
		}
		else if (GraderKat == 2) {
			cout << "Hvor mange fahenheit skal konventeres til celcius: ";
			cin >> Input;

			double FahToCel = fahrenheitToCelsius(Input);
			cout << Input << " fahrenheit svarer til " << FahToCel << " celsius\n";
		}
		else {
			cout << KategoriFejl;
		}
	}

// ############################ Metrisk ############################

	else if (Kategorier == 2) {
		// Metrisk | Længde, Vægt, Volumen(Vand), Areal
		cout << "Skriv 1,2,3 eller 4: \n 1) Længde\n 2) Vægt\n 3) Volumen\n 4) Areal\n";
		cin >> MetriskKat;

		switch (MetriskKat) {
		case 1:
			// Længde kategori
			cout << "Skriv 1,2,3 eller 4: \n 1) Kilometer\n 2) Meter\n 3) Centimeter\n 4) Millimeter\n";
			cin >> Længde;


           if (Længde == 1) {
                double input, meters, centimeters, millimeters;
                // Kilometer
                cout << "Hvor mange kilometer skal konverteres: ";
                cin >> input;

                convertLengthFromKilometers(input, meters, centimeters, millimeters);
                cout << input << " kilometer svarer til:\n";
                cout << input << " kilometer --> " << meters << " meter --> " << centimeters << " centimeter --> " << millimeters << " millimeter\n";
           }
			else if (Længde == 2) {
			    double input, kilometers, centimeters, millimeters;
			    // Meter
				cout << "Hvor mange meter skal konventeres: ";
				cin >> input;

				convertLengthFromMeters(input, kilometers, centimeters, millimeters);
				cout << input << " meter svarer til:\n";
				cout << kilometers << " kilometer --> " << input << " meter --> " << centimeters << " centimeter --> " << millimeters << " millimeter\n";
			}
			else if (Længde == 3) {
			    double input, kilometers, meters, millimeters;
			    // Centimeter
			    cin >> input;

			    convertLengthFromCentimeters(input, kilometers, meters, millimeters);
			    cout << input << " centimeter svarer til:\n";
			    cout << kilometers << " kilometer --> " << meters << " meter --> " << input << " centimeter --> " << millimeters << " millimeter\n";

			}
			else if (Længde == 4) {
			    double input, kilometers, meters, centimeters;
			    // Millimeters
			    cin >> input;

			    convertLengthFromMillimeters(input, meters, centimeters, kilometers);
			    cout << input << " millimeter svarer til:\n";
			    cout << kilometers << " kilometer --> " << meters << " meter --> " << centimeters << " centimeter --> " << input << " millimeter\n";
			}
			else {
			    cout << KategoriFejl;
			}

				break;
		case 2:
			// Vægt
			cout << "Skriv 1,2 eller 3: \n 1) Kilogram\n 2) Gram\n 3) Milligram\n";
			cin >> Længde;

			if (Længde == 1){
			    double input, grams, milligrams;
                // Kilogram
                cout << "Hvor mange kilogram skal konverteres: ";
                cin >> input;

                convertWeightFromKilograms(input, grams, milligrams);
                cout << input << " kilogram svarer til:\n";
                cout << input << " kilogram --> " << grams << " gram --> " << milligrams << " milligram\n";

			}
			else if (Længde == 2){
			    double input, kilograms, milligrams;
                // Gram
                cout << "Hvor mange gram skal konverteres: ";
                cin >> input;

                convertWeightFromGrams(input, kilograms, milligrams);
                cout << input << " gram svarer til:\n";
                cout << kilograms << " kilogram --> " << input << " gram --> " << milligrams << " milligram\n";

			}
			else if (Længde == 3){
			    double input, kilograms, grams;
                // Milligram
                cout << "Hvor mange milligram skal konverteres: ";
                cin >> input;

                convertWeightFromMilligrams(input, kilograms, grams);
                cout << input << " milligram svarer til:\n";
                cout << kilograms << " kilogram --> " << grams << " gram --> " << input << " milligram\n";
			}
			else {
			    cout << KategoriFejl;
			}
			break;

		case 3:
			// Volumen
            cout << "Skriv 1, 2 eller 3:\n 1) Liter\n 2) Milliliter\n 3) Kubikscentimeter\n";
            cin >> VolumenKat;

            if (VolumenKat == 1){
                double input, milliliters, cubicCentimeters;
                // Liter
                cout << "Hvor mange liter skal konverteres: ";
                cin >> input;

                convertVolumeFromLiters(input, milliliters, cubicCentimeters);
                cout << input << " liter svarer til:\n";
                cout << input << " liter --> " << milliliters << " milliliter --> " << cubicCentimeters << " kubikscentimeter\n";
            }
            else if (VolumenKat == 2){
                double input, liters, cubicCentimeters;
                // Milliliter
                cout << "Hvor mange milliliter skal konverteres: ";
                cin >> input;

                convertVolumeFromMilliliters(input, liters, cubicCentimeters);
                cout << input << " milliliter svarer til:\n";
                cout << liters << " liter --> " << input << " milliliter --> " << cubicCentimeters << " kubikscentimeter\n";
            }
            else if (VolumenKat == 3) {
                double input, liters, milliliters;
                // Kubikscentimeter
                cout << "Hvor mange kubikscentimeter skal konverteres: ";
                cin >> input;

                convertVolumeFromCubicCentimeters(input, liters, milliliters);
                cout << input << " kubikscentimeter svarer til:\n";
                cout << liters << " liter --> " << milliliters << " milliliter --> " << input << " kubikscentimeter\n";
            }
            else {
                cout << KategoriFejl;
            }

			break;
		case 4:
			// Areal
            cout << "Skriv 1, 2 eller 3:\n 1) Kvadratmeter\n 2) Kvadratdecimeter\n 3) Kvadratcentimeter\n";
            cin >> ArealKat;

            if (ArealKat == 1) {
                double input, squareDecimeters, squareCentimeters;
                // Kvadratmeter
                cout << "Hvor mange kvadratmeter skal konverteres: ";
                cin >> input;

                convertAreaFromSquareMeters(input, squareDecimeters, squareCentimeters);
                cout << input << " kvadratmeter svarer til:\n";
                cout << input << " kvadratmeter --> " << squareDecimeters << " kvadratdecimeter --> " << squareCentimeters << " kvadratcentimeter\n";
            }
            else if (ArealKat == 2) {
                double input, squareMeters, squareCentimeters;
                // Kvadratdecimeter
                cout << "Hvor mange kvadratdecimeter skal konverteres: ";
                cin >> input;

                convertAreaFromSquareDecimeters(input, squareMeters, squareCentimeters);
                cout << input << " kvadratdecimeter svarer til:\n";
                cout << squareMeters << " kvadratmeter --> " << input << " kvadratdecimeter --> " << squareCentimeters << " kvadratcentimeter\n";
            }
            else if (ArealKat == 3) {
                double input, squareMeters, squareDecimeters;
                // Kvadratcentimeter
                cout << "Hvor mange kvadratcentimeter skal konverteres: ";
                cin >> input;

                convertAreaFromSquareCentimeters(input, squareMeters, squareDecimeters);
                cout << input << " kvadratcentimeter svarer til:\n";
                cout << squareMeters << " kvadratmeter --> " << squareDecimeters << " kvadratdecimeter --> " << input << " kvadratcentimeter\n";
            }
            else {
                cout << KategoriFejl;
            }
			break;
		default:
			cout << KategoriFejl;
			break;
			}


// ############################ Imperisk ############################
	}
	else if (Kategorier == 3) {
		// Imperisk | Længde, Vægt, Volumen(Vand), Areal
		cout << "Skriv 1,2,3 eller 4: \n 1) Længde\n 2) Vægt\n 3) Volumen\n 4) Areal\n";
		cin >> ImperiskKat;

		switch(ImperiskKat){
		case 1:
		    double input;
            double inches, feet, yards, miles;
            // Længde
		    cout << "Skriv 1, 2, 3 eller 4:\n 1) Inch\n 2) Foot\n 3) Yard\n 4) Mile\n";
            cin >> LængdeInput;

            if (LængdeInput == 1){
                // Inch
                cout << "Hvor mange inch skal konverteres: ";
                cin >> input;

                convertLengthFromInches(input, feet, yards, miles);
                cout << input << " inch svarer til:\n";
                cout << input << " inch --> " << feet << " fod --> " << yards << " yard --> " << miles << " mile\n";
            }
            else if (LængdeInput == 2){
                // Foot
                cout << "Hvor mange fod skal konverteres: ";
                cin >> input;

                convertLengthFromFeet(input, inches, yards, miles);
                cout << input << " fod svarer til:\n";
                cout << inches << " inch --> " << input << " fod --> " << yards << " yard --> " << miles << " mile\n";
            }
            else if (LængdeInput == 3){
                // Yard
                cout << "Hvor mange yard skal konverteres: ";
                cin >> input;

                convertLengthFromYards(input, inches, feet, miles);
                cout << input << " yard svarer til:\n";
                cout << inches << " inch --> " << feet << " fod --> " << input << " yard --> " << miles << " mile\n";
            }
            else if (LængdeInput == 4){
                // Mile
                cout << "Hvor mange mile skal konverteres: ";
                cin >> input;

                convertLengthFromMiles(input, inches, feet, yards);
                cout << input << " mile svarer til:\n";
                cout << inches << " inch --> " << feet << " fod --> " << yards << " yard --> " << input << " mile\n";
            }
            else {
                cout << KategoriFejl;
            }


		    break;
		case 2:
            double pounds, ounces, stones;
		    // Vægt
            cout << "Skriv 1, 2 eller 3:\n 1) Pound\n 2) Ounce\n 3) Stone\n";
            cin >> VægtInput;

            if (VægtInput == 1){
                // Pound
                cout << "Hvor mange pund skal konverteres: ";
                cin >> input;

                convertWeightFromPounds(input, ounces, stones);
                cout << input << " pund svarer til:\n";
                cout << input << " pund --> " << ounces << " ounce --> " << stones << " stone\n";
            }
            else if (VægtInput == 2){
                // Ounce
                cout << "Hvor mange ounce skal konverteres: ";
                cin >> input;

                convertWeightFromOunces(input, pounds, stones);
                cout << input << " ounce svarer til:\n";
                cout << pounds << " pund --> " << input << " ounce --> " << stones << " stone\n";
            }
            else if (VægtInput == 3){
                // Stone
                cout << "Hvor mange stone skal konverteres: ";
                cin >> input;

                convertWeightFromStones(input, pounds, ounces);
                cout << input << " stone svarer til:\n";
                cout << pounds << " pund --> " << ounces << " ounce --> " << input << " stone\n";
            }
            else {
                cout << KategoriFejl;
            }

		    break;
		case 3:
            double gallons, quarts, pints, fluidOunces;
            // Volumen
            cout << "Skriv 1, 2, 3 eller 4:\n 1) Gallon\n 2) Quart\n 3) Pint\n 4) Fluid Ounce\n";
            cin >> VolumenInput;

            if (VolumenInput == 1){
                // Gallon
                cout << "Hvor mange gallon skal konverteres: ";
                cin >> input;

                convertVolumeFromGallons(input, quarts, pints, fluidOunces);
                cout << input << " gallon svarer til:\n";
                cout << input << " gallon --> " << quarts << " quart --> " << pints << " pint --> " << fluidOunces << " fluid ounce\n";
            }
            else if (VolumenInput == 2){
                // Quart
                cout << "Hvor mange quart skal konverteres: ";
                cin >> input;

                convertVolumeFromQuarts(input, gallons, pints, fluidOunces);
                cout << input << " quart svarer til:\n";
                cout << gallons << " gallon --> " << input << " quart --> " << pints << " pint --> " << fluidOunces << " fluid ounce\n";
            }
            else if (VolumenInput == 3){
                // Pint
                cout << "Hvor mange pint skal konverteres: ";
                cin >> input;

                convertVolumeFromPints(input, gallons, quarts, fluidOunces);
                cout << input << " pint svarer til:\n";
                cout << gallons << " gallon --> " << quarts << " quart --> " << input << " pint --> " << fluidOunces << " fluid ounce\n";
            }
            else if (VolumenInput == 4){
                // Fluid Ounce
                cout << "Hvor mange fluid ounce skal konverteres: ";
                cin >> input;

                convertVolumeFromFluidOunces(input, gallons, quarts, pints);
                cout << input << " fluid ounce svarer til:\n";
                cout << gallons << " gallon --> " << quarts << " quart --> " << pints << " pint --> " << input << " fluid ounce\n";
            }
            else {
                cout << KategoriFejl;
            }


		    break;
		case 4:
		    //Areal
            double squareInches, squareFeet, squareYards;

            cout << "Skriv 1, 2 eller 3:\n 1) Square Inch\n 2) Square Foot\n 3) Square Yard\n";
            cin >> ArealInput;

		    if (ArealInput == 1){
		        // Square Inch
                cout << "Hvor mange square inches skal konverteres: ";
                cin >> input;

                convertAreaFromSquareInches(input, squareFeet, squareYards);
                cout << input << " square inches svarer til:\n";
                cout << input << " square inches --> " << squareFeet << " square feet --> " << squareYards << " square yards\n";
		    }
		    else if (ArealInput == 2){
		        // Square Foot
                cout << "Hvor mange square feet skal konverteres: ";
                cin >> input;

                convertAreaFromSquareFeet(input, squareInches, squareYards);
                cout << input << " square feet svarer til:\n";
                cout << squareInches << " square inches --> " << input << " square feet --> " << squareYards << " square yards\n";
		    }
		    else if (ArealInput == 3){
		        // Square Yard
                cout << "Hvor mange square yards skal konverteres: ";
                cin >> input;

                convertAreaFromSquareYards(input, squareInches, squareFeet);
                cout << input << " square yards svarer til:\n";
                cout << squareInches << " square inches --> " << squareFeet << " square feet --> " << input << " square yards\n";
		    }
            else {
                cout << KategoriFejl;
            }

		    break;
		default:
		    cout << KategoriFejl;
		    break;
		}
	}
	else {
		cout << "Du har ikke valgt nogen kategori!";
	}

	main();
}
