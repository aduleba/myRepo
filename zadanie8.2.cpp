#include <iostream>
using namespace std;                  
                                //Reference value
                                //Zdefiniuj dwie zmienne a i b typu int. 
                                //Przypisz dowolne wartości do nich. 
                                //Zdefiniuj referencje zmiennej dla zmiennej a. Zmodyfikuj wartości zmiennych a i b. 
                                //Wyświetl wszystkie wartości zmiennych a, b i ref. 
                                //Jeśli adresy ref i a są takie same, wyświetl komunikat „Great, you got the reference right.”
int main() {
int a=5, b=10;

cout << "a= " << a << "\t adres: " << &a << endl;
cout << "b= " << b << "\t adres: " << &b << endl;

int &ref =a;
cout << "ref= " << ref << "\t adres: " << &ref << endl;

a=88;       //Modyfikacja wartosci zmiennej
b=55;

cout << "a= " << a << "\t adres: " << &a << endl;
cout << "b= " << b << "\t adres: " << &b << endl;
cout << "ref= " << ref << "\t adres: " << &ref << endl;

if(&a==&ref)
{
    cout << "Świetnie masz prawidłowe odnieniesienie!" << endl;
} 
return 0;    
}
