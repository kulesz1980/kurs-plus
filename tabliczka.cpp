#include <iostream>

using namespace std;

main (){
	
	for (int i =1; i<=33; i++) // ilosc wierszy, dlugosc kolumn
	{
		
		for (int j = 1; j<= 33; j++)// ilosc kolumn, dlugosc wierszy
		{
		
		cout.width(4);
			cout << i*j << " ";
		}
		cout << endl;
	}
	
	cout << "\n\n";
	
	system("pause"); 
	
}
