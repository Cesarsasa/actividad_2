#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona
{
    //atributos 
    private: string cd_e; string puesto;

    //constructor  
    public:
    Empleado(){

    }
     Empleado(string nom, string ape, string dir, int tel, string cod, string pues_to) : Persona(nom, ape, dir, tel){

        cd_e= cod;
        puesto = pues_to;


    }
   
  // METODOS
  //set (modificar)
        void setCD(string cd){ cd_e= cd;}
        void setPuesto(string pu){puesto=pu;}
        void setNombres(string nom){nombres = nom;}
        void setApellidos(string ape){apellidos = ape;}
        void setDireccion(string dir){direccion = dir;}
        void setTelefono(int tel){telefono = tel;}
  //get (mostrar)
        string getCD(){	return cd_e;}
        string getPuesto(){	return puesto;}
        string getNombres(){	return nombres;}
        string getApellidos(){	return apellidos;}
        string getDireccion(){	return direccion;}
        int getTelefono(){	return telefono;}
};

