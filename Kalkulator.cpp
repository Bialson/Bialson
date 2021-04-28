#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

double dodawanie(){
    double a = 0, b = 0;
    cout << "Wprowadz pierwsza liczba: ";
    cin >> a;
    cout << "Wprowadz druga liczba: ";
    cin >> b;
    return a + b;
}

double odejmowanie(){
    double a = 0, b = 0;
    cout << "Wprowadz pierwsza liczba: ";
    cin >> a;
    cout << "Wprowadz druga liczba: ";
    cin >> b;
    return a - b;
}

double mnozenie(){
    double a = 0, b = 0;
    cout << "Wprowadz pierwsza liczba: ";
    cin >> a;
    cout << "Wprowadz druga liczba: ";
    cin >> b;
    return a * b;
}

double dzielenie(){
    double a = 0, b = 0;
    cout << "Wprowadz pierwsza liczba: ";
    cin >> a;
    cout << "Wprowadz druga liczba: ";
    cin >> b;
    if(b == 0){
        cout << "Nie dzieli sie przez zero!" << '\n';
    }
    return a / b;
}

double potegowanie(){
    double a = 0, pot = 0;
    cout << "Wprowadz liczbe: ";
    cin >> a;
    cout << "Wprowadz potege liczby: ";
    cin >> pot;
    return pow(a, pot);
}

double pierwiastkowanie(){
    double a = 0;
    int pierw = 0;
    cout << "Wprowadz liczbe: ";
    cin >> a;
    cout << "Wybierz pierwiastek: \n 1.Kwadratowy \n 2.Szescienny \n";
    cin >> pierw;
    switch(pierw){
        case 1:
            return sqrt(a);
        case 2:
            return cbrt(a);
            break;
        default:
            return 0;
            break;
    }
}

int main(){
    cout << "Kalkulator matematyczny" << '\n';
    cout << '\n';
    START: cout << "Wybierz operacje: \n 1.Dodawanie \n 2.Odejmowanie \n 3.Mnozenie \n 4.Dzielenie \n 5.Potegowanie \n 6.Pierwiastkowanie \n";
    int wybor = 0;
    double wynik;
    cin >> wybor;
    switch(wybor){
        case 1:
            wynik = dodawanie();
            cout << "Wynik dodawania wynosi: " << wynik << '\n';
            break;
        case 2:
            wynik = odejmowanie();
            cout << "Wynik odejmowania wynosi: " << wynik << '\n';
            break;
        case 3:
            wynik = mnozenie();
            cout << "Wynik mnozenia wynosi: " << wynik << '\n';
            break;
        case 4:
            wynik = dzielenie();
            cout << "Wynik dzielenia wynosi: " << wynik << '\n';
            break;
        case 5:
            wynik = potegowanie();
            cout << "Wynik potegowania wynosi: " << wynik << '\n';
            break;
        case 6:
            wynik = pierwiastkowanie();
            cout << "Wynik pierwiastkowania wynosi: " << wynik << '\n';
            break;
        default: 
            cout << "Nie wybrano zadnej opearcji. Czy chcesz sprobowac ponownie? ";
            string odp;
            cin >> odp;
            if(odp == "Tak"){
                goto START;
            }
            else{
                exit(0);
            }
            break;
    }
    return 0;
}