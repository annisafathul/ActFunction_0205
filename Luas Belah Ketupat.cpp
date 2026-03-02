#include <iostream>
using namespace std;

float Luaas, D1, D2;

void ProsedurInputData ()
{
    cout << "Masukkan Diagonal 1 : ";
    cin >> D1;
    cout << "Masukkan Diagonal 2 : ";
    cin >> D2;
}

float ProsedurHitungLuasBerparameter(float D1,float D2)
{
    return 0.5 * D1 * D2; 
}