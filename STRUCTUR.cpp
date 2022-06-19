#include <iostream>
#include <string>
using namespace std;

struct company{
	string surname;
	string name;
	int year_birth;
	string position;
	float salary;
};

int main()
{
	int worker;
	company workers[10] = {
		{"Minenok", "Nikita", 2004, "Director", 500000},
		{"Goldobin", "Nikolay", 1995, "Programmer", 150000},
		{"Bolsunovsky", "Maxim", 1982, "Administrator", 70540},
		{"Trofimov", "Oleg", 1980, "Accauntant", 50530}, 
		{"Chernyshenko", "Igor", 1976, "Ingineer", 33567},
		{"Doroshenko", "Alexey", 1994, "Economist", 94780},
		{"Petrushin", "Dmitry", 1990, "Technician", 54557},
		{"Biryukov", "Ilya", 2002, "Translator", 89700},
		{"Blinov", "Makar", 1980, "Cleaner", 15500},
		{"Savin", "Savely", 1976, "Security_guard", 45000} 
	};
	int A;
	double B;
	for (int i=0; i<10; i++){
		A+=workers[i].salary;
	}
	B=A/10;
	cout<<" Average salary is "<<B<<" rubles "<<endl;
	for (int i=0; i<10; i++){
		if (2022-workers[i].year_birth > 30){
			cout<<workers[i].name<<" "<<workers[i].surname<<endl;
		}
	}
	return 0;
}
