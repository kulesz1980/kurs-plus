#include <iostream>
using namespace std;

int main()
{
	
	cout << " what was a year when your home was build ?\n ";
	int year;
	cin >> year;
	cin.get(); // you must add here cin.get because upper cin is gettin a sing of new line after a int of year
	cout << "What is your street name ? \n";
	char adress[80];
	cin.getline(adress, 80); // getline()  is reading sign of new line at start- that sign was insert in 9 line of code, so without line 10 code will not work well.
	cout << "home was buid in :" << year << endl;
	cout << "at  Adress : " << adress << endl;
	cout << "Done ! \n";
	return 0;
}
