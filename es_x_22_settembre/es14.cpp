#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    float p,A;
    cout << "Inserisci i lati di un triangolo(in cm) e il programmma ne calcolera l'area" << endl;
    do
    {
        cout << "Inserisci lato a:";
        cin >>a;
    }
    while(a <= 0);

    do
    {
        cout << "Inserisci lato b:";
        cin >>b;
    }
    while(b <= 0);

    do
    {
        cout << "Inserisci lato c:";
        cin >>c;
    }
    while(c <= 0);


    if((a < b+c)&&(b < a+c)&&(c < a+b)) // controlla tramite le disuguaglianze triangolari
    {                                   // se un traingolo con i lati inseriti dall'utente puo' esistere
        p = (a+b+c)/2;
        A = sqrt(p*(p-a)*(p-b)*(p-c));

        cout << "L'area del triangolo e' " << A << " cm2";
    }
    else
    {
        cout <<"Non esiste un triangolo avente i lati inseriti.";
    }
    return 0;
}
