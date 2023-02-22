
#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string nit, nombres, apellidos, direccion, cd_e, puesto;
    int telefono;
    int op;
     void empleado();
     void cliente();
     void crud();
     cout<<"Menu"<<endl;
     cout<<"1.Ingresar Empleado"<<endl;
     cout<<"2.Ingresar Cliente"<<endl; 
     cout<<"elegir op:";
     cin>>op;
     switch (op)
     {
     case 1:
        empleado();
        crud();
        break;
    case 2:
        cliente();
        crud();
    break;
     
     }
    system("pause");
}

void cliente(){
            #include "Cliente.cpp"
            string nit, nombres, apellidos, direccion, cd_e, puesto;
            int telefono;
            char mod;
            int op;
            cout<<"Ingrese nit:"<<endl;
            cin>>nit;
            cout<<"Ingrese nombres:"<<endl;
            cin>>nombres;
            cout<<"Ingrese apellidos:"<<endl;
            cin>>apellidos;
            cout<<"Ingrese direccion:"<<endl;
            cin>>direccion;
            cout<<"Ingrese teñefono:"<<endl;
            cin>>telefono;
            Cliente obj = Cliente( nombres, apellidos, direccion, telefono, nit);
            cout<<"______________________"<<endl;
            cout<<"Nit: "<<obj.getNit()<<endl;
            cout<<"Nombres: "<<obj.getNombres()<<endl;
            cout<<"Apellidos: "<<obj.getApellidos()<<endl;
            cout<<"Direccion: "<<obj.getDireccion()<<endl;
            cout<<"Telefono: "<<obj.getTelefono()<<endl;
            cout<<"------------------"<<endl;
            cout<<"DESEA modificar: s/n"<<endl;
            cin>>mod;
            if (mod == 'S' || mod == 's')
            {
                system("cls");
                cout<<"Que desea modificar:"<<endl;
                cout<<"1.Nit"<<endl;
                cout<<"2.Nombre"<<endl;
                cout<<"3.Apellidos"<<endl;
                cout<<"4.Direccion"<<endl;
                cout<<"5.Telefono"<<endl;
                cout<<"elegir op:";
                cin>>op;
                if (op==1)
                {
                    cout<<"Ingrese Nit: ";
                    cin>>nit;
                    obj.setNit(nit);
                    cout<<"________SE CAMBIO EL NIT______________"<<endl;
                    cout<<"Nit: "<<obj.getNit()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                if (op==2)
                {
                    cout<<"Ingrese NOMBRE: ";
                    cin>>nombres;
                    obj.setNombres(nombres);
                    cout<<"________SE CAMBIO EL NOMBRE____________"<<endl;
                    cout<<"Nit: "<<obj.getNit()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                 if (op==3)
                {
                    cout<<"Ingrese Apellido: ";
                    cin>>apellidos;
                    obj.setApellidos(apellidos);
                    cout<<"________SE CAMBIO EL APELLIDO____________"<<endl;
                    cout<<"Nit: "<<obj.getNit()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                 if (op==4)
                {
                    cout<<"Ingrese Direccion: ";
                    cin>>direccion;
                    obj.setDireccion(direccion);
                    cout<<"________SE CAMBIO EL Direccion____________"<<endl;
                    cout<<"Nit: "<<obj.getNit()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                   if (op==5)
                {
                    cout<<"Ingrese telefono : ";
                    cin>>telefono;
                    obj.setTelefono(telefono);
                    cout<<"________SE CAMBIO EL TELEFONO____________"<<endl;
                    cout<<"Nit: "<<obj.getNit()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
             
            }
            if (mod == 'n' || mod == 'N')
            {
               cout<<"....."<<endl; 
            }else{
                 cout<<"--"<<endl;
            }
            



        }
void empleado(){
         #include "Empleado.cpp"
        string nit, nombres, apellidos, direccion, cd_e, puesto;
            int telefono;
            char mod;
            int op;
            cout<<"Ingrese codigo Empleado:"<<endl;
        cin>>cd_e;
        cout<<"Ingrese puesto:"<<endl;
        cin>>puesto;
        cout<<"Ingrese nombres:"<<endl;
        cin>>nombres;
        cout<<"Ingrese apellidos:"<<endl;
        cin>>apellidos;
        cout<<"Ingrese direccion:"<<endl;
        cin>>direccion;
        cout<<"Ingrese teñefono:"<<endl;
        cin>>telefono;

        Empleado obj = Empleado( nombres, apellidos, direccion, telefono, cd_e, puesto);
        cout<<"______________________"<<endl; 
        cout<<"Codigo: "<<obj.getCD()<<endl;
        cout<<"Puesto: "<<obj.getPuesto()<<endl;
        cout<<"Nombres: "<<obj.getNombres()<<endl;
        cout<<"Apellidos: "<<obj.getApellidos()<<endl;
        cout<<"Direccion: "<<obj.getDireccion()<<endl;
        cout<<"Telefono: "<<obj.getTelefono()<<endl;
        cout<<"------------------"<<endl;
        cout<<"DESEA modificar: s/n"<<endl;
            cin>>mod;
            if (mod == 'S' || mod == 's')
            {
                system("cls");
                cout<<"Que desea modificar:"<<endl;
                cout<<"1.CD Empleado"<<endl;
                cout<<"2.Puesto"<<endl;
                cout<<"3.Nombre"<<endl;
                cout<<"4.Apellidos"<<endl;
                cout<<"5.Direccion"<<endl;
                cout<<"6.Telefono"<<endl;
                cout<<"elegir op:";
                cin>>op;
                if (op==1)
                {
                    cout<<"Ingrese CODIGO: ";
                    cin>>cd_e;
                    obj.setCD(cd_e);
                    cout<<"________SE CAMBIO EL CODIGO______________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                 if (op==2)
                {
                    cout<<"Ingrese PUESTO: ";
                    cin>>puesto;
                    obj.setPuesto(puesto);
                    cout<<"________SE CAMBIO EL PUESTO______________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                if (op==3)
                {
                    cout<<"Ingrese NOMBRE: ";
                    cin>>nombres;
                    obj.setNombres(nombres);
                    cout<<"________SE CAMBIO EL NOMBRE____________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                 if (op==4)
                {
                    cout<<"Ingrese Apellido: ";
                    cin>>apellidos;
                    obj.setApellidos(apellidos);
                    cout<<"________SE CAMBIO EL APELLIDO____________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                 if (op==5)
                {
                    cout<<"Ingrese Direccion: ";
                    cin>>direccion;
                    obj.setDireccion(direccion);
                    cout<<"________SE CAMBIO EL Direccion____________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
                   if (op==6)
                {
                    cout<<"Ingrese telefono : ";
                    cin>>telefono;
                    obj.setTelefono(telefono);
                    cout<<"________SE CAMBIO EL TELEFONO____________"<<endl;
                    cout<<"Codigo: "<<obj.getCD()<<endl;
                    cout<<"Puesto: "<<obj.getPuesto()<<endl;
                    cout<<"Nombres: "<<obj.getNombres()<<endl;
                    cout<<"Apellidos: "<<obj.getApellidos()<<endl;
                    cout<<"Direccion: "<<obj.getDireccion()<<endl;
                    cout<<"Telefono: "<<obj.getTelefono()<<endl;
                    cout<<"------------------"<<endl;
                }
             
            }
            if (mod == 'n' || mod == 'N')
            {
               cout<<"....."<<endl; 
            }else{
                 cout<<"--"<<endl;
            }
}

void crud(){
    int op;
     cout<<"1.Crear"<<endl;
     cout<<"2.Leer"<<endl; 
     cout<<"3.Modificar"<<endl; 
     cout<<"4.Eliminar"<<endl; 
     cout<<"5.Salir"<<endl; 
     cin>>op;
     if(op == 1){
        cout<<"Ha entrado al metodo CREAR"<<endl;

     }
     if(op == 2){
        cout<<"Ha entrado al metodo LEER"<<endl;

     }
     if(op == 3){
        cout<<"Ha entrado al metodo MODIFICAR"<<endl;

     }
     if(op == 4){
        cout<<"Ha entrado al metodo ELIMINAR"<<endl;

     }
       if(op == 5){
        exit(5);

     }

}
    
