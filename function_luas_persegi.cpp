#include <iostream>
using namespace std;

int p, l;

void input()
{
    cout << "Masukkan Panjang :";
    cin >> p;
    cout << "Masukkan Lebar :";
    cin >> l;
}

int luaspersegi()
{
    return p * l;
}

void output()
{
    cout << "Hasilnya : " << luaspersegi();
}

int main()
{
    input();
    output();
}