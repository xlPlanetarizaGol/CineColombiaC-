#include <iostream>
#include <windows.h>
#include "Sillacin.cpp"


using namespace std;
//variables globales
Sillacin S [5][6];

int fila,columna;
char zonavip,zonanormal;
bool salir=false;
int opcion;
//funciones prototipo
void registrar();
void pantalla();

int main()
{

    while(!salir){
     //funcion que muestra en pantalla la mediatriz actualizada
       pantalla();
    //este es el menu que contiene el main
        cout<<"1: Adquirir puesto del Bus y su respectivo precio..."<<endl;
        cout<<"2. Ver pasajeros"<<endl;
        cout<<"3: Salir de la sala..."<<endl;
        cin>>opcion;

            switch(opcion){

            case 1:
            registrar();
            break;

            case 2:


            break;

            case 3:
            salir=true;
            break;
            }

            system("cls");
    }


    return 0;
};

void pantalla(){
    cout<<endl<<"                                 CineColombia"<<endl<<endl;
     cout<<endl<<"   Bienvenido a CineColombia, por favor escoja donde quiere ver su pelicula. "<<endl<<endl;
     cout<<endl<<"           Buena suerte, y ojala vuelvas pronto. Att: CineColombia."<<endl<<endl;

            cout<<endl<<"  123  456"<<endl<<endl;

            for(int i=0; i<5; i++){
            cout<<i+1<<" ";

            for(int j=0; j<6; j++){

              if(S[i][j].getOcupada()==false){
                cout<<"O";
              }
                else {
                    cout<<"X";
                    }
              if (j==2 or j==2){
                cout<<"  ";
              }
            }

           cout<<endl;
            }

}

void registrar(){

    cout<< "Elija el numero de la fila: "<<endl;
    cin>>fila;
    cout<<"Elija el numero de la columna: "<<endl;
    cin>>columna;

    if(S[fila-1][columna-1].getOcupada()==true){
        cout<<"Lo sentimos, está silla ya se encuentra reservada..."<<endl;
    }

    else{
        if((fila==4 or fila==5) && (columna>3 and columna<4)){
        cout<<"Esta silla es VIP"<<endl;
        cout<<"Su valor es de 90.000"<<endl;
        cout<<"¿Tiene suficiente dinero s/n?"<<endl;
        cin>>zonavip;
        }
        else{
            cout<<"Esta silla es normal"<<endl;
            cout<<"Su valor es de 58.000"<<endl;
            cout<<"¿Tiene suficiente dinero s/n?"<<endl;
            cin>>zonanormal;
        }
    }

           for(int i=0; i<5;i++){
           for(int j=0; j<6;j++){
              if(zonavip=='s' or zonanormal=='s'){
              if(fila-1==i && columna-1==j){
                    S[i][j]=Sillacin(true);
      }
    }
  }
}

}

