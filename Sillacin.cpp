#include <string>
using namespace std;

class Sillacin{
private:
    char letra, x;
    int numero;
    bool ocupada;
public:
    Sillacin(){}
    Sillacin(bool ocup){
    ocupada=ocup;
    }

void setLetra(char let){
letra = let;
}

char getLetra(){
return letra;}

void setX(char x_){
x=x_;
}

char getX(){
return x;
}

void setNumero(int nume){
numero=nume;
}

int getNumero(){
return numero;
}

void setOcupada(bool ocup){
ocupada=ocup;
}

bool getOcupada(){
return ocupada;
}


};










