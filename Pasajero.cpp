#include <iostream>

    using namespace std;

    class Pasajero{
    private:
    string nombre, apellido,cedula, edad;
    public:

    Pasajero(){};

    Pasajero(string N,string A,string C,string E){
    nombre=N;
    apellido=A;
    cedula=C;
    edad=E;
};

    void setNombre(string N){
    nombre=N;
}

    string getNombre(){
    return nombre;
}

    void setApellido(string A){
    apellido=A;
}

    string getApellido(){
    return apellido;
}

    void setCedula(string C){
    cedula=C;
}

    string getCedula(){
    return cedula;
}

    void setEdad(string E){
    edad=E;
}

    string getEdad(){
    return edad;
    }

};
