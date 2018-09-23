#include <iostream>
#include <string>
using namespace std;

main (){

    cout << "---------------------------------------" << endl;
    cout << "       | Kalkulator v. 1.0  |"              << endl;
    cout << "       | by Tomasz Kulesza  |"              << endl;
    cout << "       | All rights reserved|"              << endl;
    cout << "---------------------------------------" << endl;


	double zm1, zm2;
	
	poczatek:
	
	cout << "Podaj pierwsza liczbe" << endl;
	cin >> zm1 ;
	cout << "Podaj druga liczbe" << endl;
		cin >> zm2 ;
		
		cout << "co chcesz zrobic z liczbami ? " << endl;
		cout << "+ -dodac " <<  endl;
		cout << "-  -odjac " << endl;
		cout << "*  -pomnozyc " << endl;
		cout << "/ - podzielic " << endl;
		cout << "---------------------------------------" << endl;
		
		char znak;
		
		cin >> znak;
		
		switch (znak){
			
			case '+' :
				cout << zm1 << " + " <<  zm2 << " = " << (zm1 + zm2) << endl;
				break;
			case '-' :
				cout << zm1 << " - " <<  zm2 << " = " << (zm1 - zm2) << endl;
				break;
			case '*' :
				cout << zm1 << " * " <<  zm2 << " = " << (zm1 * zm2) << endl;
				break;
			case '/' :
				
				if (zm2 != 0)
					cout << zm1 << " : " <<  zm2 << " = " << (zm1 / zm2) << endl;
				else
					cout << "cholero nie dziel przez zero ;)) " << endl ;
				break;
		
		
		
		}
		
		string znak2;
		cout << "---------------------------------------" << endl;
		cout << "Czy chcesz kontynuowac program ? (T = tak / N = Nie)" << endl;
		cout << "---------------------------------------" <<  endl;
		cin >> znak;
		if (znak2 =="t" || znak2 =="T")
		goto poczatek;
			
    

}
