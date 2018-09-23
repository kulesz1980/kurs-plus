// obliczanie pola 
#include <iostream>
#define PI 3.14

using namespace std;
void initMenuBox(); // deklaracja ze bedzie menu
void decyzjaMenu(int); //deklaracja opcji wyboru z menu, gdzie wybieramy liczbe
double poleKola(double); // deklaracja opcji dla pola kola
double poleKwadratu(double);
double poleProstokata(double, double);
double poleTrojkata(double, double);

int main()
{
	char zn = 'T';
	int wybor;
	
	do
	{
	system("cls"); // czyli wyczysc ekran
	initMenuBox();
	
	cin >> wybor;
	
	decyzjaMenu(wybor);
	
	do
	{
	
	cout << " Czy chcesz kontynuowac program ? (T/N) " << endl;
	cin >> zn;
	}while (zn !='t' && zn !='T' && zn !='n' && zn !='N');
	
	}
	while(zn == 't' || zn == 'T');
	
	system("pause");
	
}
void initMenuBox() // definicja menu 
{
	cout << "Wybierz opcje : " << endl;
	cout << "  1. Pole Kola " << endl;
	cout << "  2. Pole Kwadratu " << endl;
	cout << "  3. Pole Prostokata" << endl;
	cout << "  4. Pole Trojkata " << endl;
	cout << " --- -------------------\n" << endl;	
}
void decyzjaMenu(int wybor)//definicja wyboru z menu za pomoca switch
{
	double a,b,h,r;
	switch(wybor)
	{
		
		case 1:
			cout << " Podaj promien :" << endl;
			cin >> r;
			poleKola(r);
			break;
		case 2:
			cout << "Podaj bok :" << endl;
			cin >> a;
			poleKwadratu(a);
	 		 break;
		case 3:
			cout << "Podaj szerokosc oraz wysokosc prostokata :" << endl;
			cin >> a >> b;
			poleProstokata(a,b);
			break;
		case 4:
			cout << "Podaj podstawe oraz wysokosc trojkata :" << endl;
			cin >> a >> h;
			poleTrojkata(a,h);
			break;
		defaut:
			cout << "Nie wybrales opcji dostepnej w menu..." << endl;
	}	
}
double poleKola(double r)
{
	double wynik = PI *r*r;
	
	cout << "Pole kola o promieniu :" << r << "wynosi : " << wynik << endl;
	return wynik;
	
	
}
double poleKwadratu(double a)
{
	double wynik = a*a;
	
	cout << "Pole kwadratu o boku :" << a << "wynosi : " << wynik << endl;
	return wynik;
	
	
}
double poleProstokata(double a, double b)
{
	double wynik = a*b;
	
	cout << "Pole prostokata o szerokosci :" << a << " i wys. : " << b << " wynosi : " << wynik << endl;
	return wynik;
	
	
}
double poleTrojkata(double a, double h)
{
	double wynik = 0.5*a*h;
	
	cout << "Pole trojkata o podstawie :" << a << "i wys. : " << h << " wynosi : " << wynik << endl;
	return wynik;
	
	
}
