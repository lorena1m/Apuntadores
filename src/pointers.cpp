#include <iostream>
#include <cstdlib>
using namespace std;


int main (void) {
    
    //Variables
    int dia=5, mes=9, axo=2020;
    int *apEntero;                    //Declarar apuntador 
    
    float sueldo= 12544.67;
    float *apReal = &sueldo;
    
    double calculo=123.456789;
    double *apDoble = &calculo;
    
    char cu[15]= "LTIN";
    char *apCadena = &cu[0];
    
    
    //Asignacion
    apEntero = &dia;    //Apuntador y tipo de dato (apEntero)
    cout << "Direccion RAM variable dia: " 
         << apEntero << endl;
    cout << "Dia = " << dia <<endl;
    cout << "Dia = " << *apEntero <<endl;
      
    apEntero = &mes;
    cout << "Direccion RAM variable mes: " 
         << apEntero << endl;
    cout << "Mes = " << mes <<endl;
    cout << "Mes = " << *apEntero <<endl;
    
    apEntero = &axo;
    cout << "Direccion RAM variable axo: " 
         << apEntero << endl;
    cout << "Axo = " << axo <<endl;
    cout << "Axo = " << *apEntero <<endl;

   
    cout << "Direccion RAM variable sueldo: " 
         << apReal << endl;
    cout << "Sueldo = " << sueldo <<endl;
    cout << "Sueldo = " << *apReal <<endl;
    
    
    cout << "Direccion RAM variable calculo: " 
         << apDoble << endl;
    cout << "Calculo = " << calculo <<endl;
    cout << "Calculo = " << *apDoble <<endl;
    
    
    cout << "Direccion RAM variable cu: " 
         << &cu << endl;
    cout << "cu = " << cu <<endl;
    
    
    while ( *apCadena != '\0') {
       cout << "cu = " << *apCadena <<endl;
       apCadena++;
}


    system("pause");
    return 0;
 } 
           