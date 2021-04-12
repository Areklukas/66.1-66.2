#include <iostream>
#include <fstream>
using namespace std;
const int SIZE = 1000;
void cyfry(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
}
int sumaCyfr(int n)
{
    int suma = 0;
    while (n > 0)
    {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}
void zadanie1()
{
    cout << "Zadanie 66.1:" << endl;
    ifstream in("trojki.txt");
    int a, b, c;
    for (int i = 0; i < SIZE; i++)
    {
        in >> a >> b >> c;
        if (sumaCyfr(a) + sumaCyfr(b) == c) cyfry(a, b, c);
    }
    in.close();
    cout << endl;
}
bool pierwsze(int n)
{
    if (n <= 1) return false;
    if (n % 2 == 0 && n!= 2) return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0) return false;
    }
return true;
}
void zadanie2()
{
    cout << "Zadanie 66.2:" << endl;
    ifstream in("trojki.txt");
    int a, b, c;
    for (int i = 0; i < SIZE; i++)
    {
        in >> a >> b >> c;
        if (pierwsze(a) && pierwsze(b) && a * b == c) cyfry(a, b, c);
    }
in.close();
cout << endl;
}
int main()
{
 zadanie1();
 zadanie2();
}
