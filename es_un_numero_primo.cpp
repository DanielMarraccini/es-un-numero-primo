/*Actividad
 *
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */

#include <iostream>

using namespace std;

int main(){

    int contador = 0;

    cout<<"Números primos del 1-100: ";


    for (int i = 2; i <= 100; i++){

        switch(i){

            case 2:
            case 3:
            case 5:
            case 7:
                cout<<i<<" "; break;
            default:

                if(i%2 != 0 && i%3 != 0 && i%5 != 0 && i%7 != 0){

                    cout<<i<<" ";

                }break;
        }
    }

    cout<<endl<<endl;

    cout<<"Presione ENTER para finalizar...";
    cin.get();
    return 0;
}
