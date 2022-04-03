//Ordenamiento por seleción

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[]= {4, 3, 1, 5, 2 };
    int a, e, min, aux;
    
    for (a=0; a<5;a++){
        min = a;
        for (e=a+1;e<5;e++){
            if(numeros[e]<numeros[min]){
                min=e; 
            }
        }
    aux=numeros[a];
    numeros[a] = numeros [min];
    numeros[min] = aux;
}
 
    cout<<"Orden Ascecente: "<<endl;
    for(a=0; a<5;a++){
             cout<<numeros[a]<<" "<<endl;
    } 
    
    
    cout<<"Orden Descecente: "<<endl;
    for(a=4; a>=0;a--){
             cout<<numeros[a]<<" "<<endl;
    }     
                           
    getch();
    return 0 ;
}
