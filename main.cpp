#include <iostream>

using namespace std;

class Auto
{
    public:

    string marka;
    string model;
    int rocznik;
    long double przebieg;

    void wczytaj()
    {
        cout << "Jaka marka?" << endl;      cin >> marka;
        cout << "Jaki model?" << endl;      cin >> model;
        cout << "Jaki rocznik?" << endl;    cin >> rocznik;
        cout << "Jaki przebieg?" << endl;   cin >> przebieg;
    }

    void wypisz()
    {
        cout << "Marka:" << marka << endl;
        cout << "Model:" << model << endl;
        cout << "Rocznik:" << rocznik << endl;
        cout << "Przebieg:" << przebieg << endl;
    }
};


int main()
{
    int ile;
    cout << "Ile aut?" << endl; cin >> ile;

    Auto S[ile];

    for (int i=0; i<ile; i++)
    {
        S[i].wczytaj();
        cout << "Auto numer: " << i+1 << ": " << endl;
        S[i].wypisz();
    }
    return 0;
}
