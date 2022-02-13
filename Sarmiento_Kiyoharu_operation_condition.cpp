#include <iostream>
#include <cctype>
using namespace std;

int main() {
	
	string lastName;
	string firstName;
	string middleInitial;
	int age;
	string country;
	char answer;
	
	
	cout << "TRAVEL PASS APPLICATION\n\n";
	cout << "Please fill out your information below.\n";
	cout << "LAST NAME: ";
	cin >> lastName;
	cout << "FIRST NAME: ";
	cin >> firstName;
	cout << "MIDDLE INITIAL: ";
	cin >> middleInitial;
	
	if(middleInitial == "n/a") {
		
		middleInitial = " ";
		
	}
	
	cout << "AGE: ";
	cin >> age;
	
	if(age < 12) {
		
		cout << "\n";
		cout << "Hi " << firstName << ", " << "you cannot be issued a travel pass since you are under-aged.\n";
		cout << "You must be 12 or above 12 years old to be issued a travel pass.";
		
		return 0;
		
	}
	
	
	cout << "ARE YOU FROM PHILIPPINES? (y/n) ";
	cin >> answer;
	
	if(answer == 'n') {
		
		cout << "\n" << "WHERE ARE YOU FROM? ";
		cin >> country;
		
	}
	else if (answer == 'y') {
	
		country = "Philippines";
		
	}
		
	cout << "ARE YOU VACCINATED? (y/n) ";
	cin >> answer;
		
	if(answer == 'y') {
		
		cout << "\n" << "TRAVEL PASS CONFIRMED.\n";
		
	}
	
	else if(answer == 'n') {
		
		cout << "\n" << "Sorry, you must be vaccinated to be issued a travel pass.\n";
		cout << "(Applicants from outside the country can still  be issued a travel pass as long as he/she is vaccinated.)";
		
		return 0;
	}

	cout << "\nHere is your Travel Pass.\n\n";
	
	cout << "NAME: " << lastName << ", " << firstName << middleInitial << "\n";
	cout << "AGE: " << age << "\n";
	cout << "COUNTRY: " << country << "\n";
	cout << "FULLY VACCINATED\n\n";
	cout << "ENJOY YOUR TRIP!!";
	
	return 0;
}
	

	
	

