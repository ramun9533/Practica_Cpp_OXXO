#include<iostream>
using namespace std;
#define SEMANA 7 
#define OXXO 2
int main(){
    const char* semana[] = {"Lunes     ", "Martes    ", "Miercoles ", "Jueves    ", "Viernes   ", "Sabado    ", "Domingo   "}; 
    int vector[7][2];
    int count = 0;
    int acum = 0;
    int totalDia[7];
    for (int i = 0; i < OXXO; i++)
    {
        /* code */
        for (int j = 0; j < SEMANA; j++)
        {
            /* code */
            cout<<"Dame la venta del "<<semana[j]<<" "<<" del OXXO"<<i + 1<<endl;
            cin>>vector[j][i];
        }
        
    }
    
    cout<<"             OXXO1 "<<"OXXO2   TotalDia"<<endl;
    for (int j = 0;j < 7; j++){
        cout<<semana[j]<<"  |"<<vector[j][count]<<"|"<<vector[j][count + 1]<<"|"<<vector[j][count] + vector[j][count +1]<<endl;
        acum = acum + vector[j][count] + vector[j][count +1];

    }
    cout<<endl<<endl;
    cout<<"El total de la venta de OXXO1 mas OXXO2 es:  "<<acum<<endl;
        
    
}
