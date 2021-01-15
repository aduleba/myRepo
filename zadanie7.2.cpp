#include <iostream>
using namespace std;
                            // Program,który oblicza liczbe minimalna oraz maksymalna wszystkich wartości w tablicy
                            //Napisz program, który zdefiniuje tablicę 20 losowo wybranych liczb od 0 do 999. 
                            //Napisz funkcję, która wskaże minimalne i maksymalne wartości w tablicy. 
                            //Wyświetl całą tablicę, maksimum i minimum na ekranie.

int min (int []);
int max (int []);

int main() 
{

int tablica[20];
srand(time(0));

for(int i=0; i<20; i++)
{
    tablica[i] = rand()%1000;        // określa nam zakres liczb do 1000
    printf ("tablica[%d] = %d \n", i, tablica[i]);  

}
cout << "Liczba minimalna to: " << min(tablica) << endl;
cout << "Liczba maksymalna to: " << max(tablica) << endl;
return 0;    
}

int min (int tablica [])
{
    int minimum=tablica[0];
    for (int i=1; i<20; i++)
    {
        if (minimum > tablica[i])
        minimum = tablica[i];
    }
    return minimum;
}

int max (int tablica [])
{
    int maximum=tablica[0];
    for (int i=1; i<20; i++)
    {
        if (maximum <tablica[i])
        maximum = tablica[i];
    }
    return maximum;
}