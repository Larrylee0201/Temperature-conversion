//Temperature conversion
#include <iostream>

using namespace std;

int main() {
	int optn = 0;
	double amount;
		cout << "\nWhich coversion of temperature do you want: \n 1.Celcius to Fahrenheit \n 2.Fahrenheit to Celcius\n";
		cin >> optn; 
		switch (optn)
		{
			case 1 :
				cout << "\nYou choose Celcius to Farenheit!!!!!\n";
				cout << "Enter the temperature of Celcius: ";
				cin >> amount;
				cout << "Here is how much temperature of Farenheit: " << amount * 9/5 + 32;
				cout << "°F";
				break;
			case 2 :
				cout << "\nYou choose Farenheit to Celcius!!!!!\n";
				cout << "Enter the temperature of Farenheit :";
				cin >> amount;
				cout << "Here is how much temperature of Celcius: " << (amount - 32) *5/9;
				cout << "°C";
				break;
		}
}