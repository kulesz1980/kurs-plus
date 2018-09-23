#include <iostream>

using namespace std;

int power(int, int);
void power(double, int);
int main()
{
    int w;
    double x;
    cout << "Podaj podstawe potegi: " << endl;
    cin >> x;
    
    cout << "Podaj wykladnik potegi dla podanej liczby: " << endl;
    cin >> w;
    
    
    power(x, w);
    system("pause");
    return 0;
}
/*
    2 ^ 3 = 2 * 2 * 2 

*/
int power(int x, int w) //x = 8, w = 1, x0 = 2, 
{
    int x0 = x;
    
    while(w-- > 1)
       x *= x0;
       
    return x;
}
void power(double x, int w)
{
    double x0 = x;
    
    int i = 0;
    
    while(i++ < w)
    {
       cout << x0 << " ^ " << i << " = " << x << endl;
       x *= x0;     
    }
       
    return;   
}
