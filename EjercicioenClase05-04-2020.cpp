/*
Una empresa necesita llevar el control de los datos personales de sus 10 empleados contratados, por la motivo la empresa lo ha contratado para la implementacion de este proyecto, los datos a almacenar son:

Codigo Empleado,
Nombre Empleado,
Puesto,
Departamento,
Salario.

Existen 3 departamentos, 1 Gerencia, 2 Administracion y 3 Produccion.  El programa debera de desplegar la lista de empleados almacenados y el total de la planilla.

Nota: Se debe utilizar ciclos, punteros, arreglos y estructuras. */

#include<iostream>
#include<string>

using namespace std;

int main(){
	int *datos = NULL;//Para que empiece a reservar en memoria
	int i,id,depto,salario,total=0;
	char nombre,puesto;
	//int id[10];
	int arreglo[2];
	datos = arreglo;//Posicion de memoria
	cout<<"<<<<<<<<INGRESO DE DATOS DE LOS EMPLEADOS>>>>>>>>>>>> "<<endl<<endl;
	for(i=0;i<2;i++){
		cout<<"EMPLEADO # "<<i+1<<endl<<endl;
		cout<<"Ingresar ID de empleado: "<<endl;
		cin>>id;
		datos[i] = id;
		fflush(stdin);
		cout<<"Ingresar nombre del empleado: "<<endl;
		//cin.getline(datos[i],30,'\n');
		cin>>nombre;
		datos[i] = nombre;
		fflush(stdin);
		cout<<"Ingresar puesto del empleado: "<<endl;
		//cin.getline(datos[i].puesto,30,'\n');
		cin>>puesto;
		datos[i] = puesto;
		fflush(stdin);
		cout<<"Ingresar departamento del empleado: "<<endl<<endl;
		cout<<"<<< 1. GERENCIA ---- 2. ADMINISTRACION ---- 3. PRODUCCION >>> "<<endl;
		cin>>depto;
		datos[i] = depto;
		cout<<"Ingresar salario del empleado: "<<endl;
		cin>>salario;
		datos[i] = salario;	
		system("cls");
		total+=salario;
	}
	for(i=0;i<2;i++){//Recorrido del arreglo
		cout<<"EMPLEADO # "<<i+1<<"\t : Q"<<*datos<<endl;
		/*cout<<"ID: "<<datos[i]<<endl;
		cout<<"Nombre: "<<datos[nombre]<<endl;
		cout<<"Puesto: "<<datos[puesto]<<endl;
		cout<<"Departamento: "<<datos[depto]<<endl;
		cout<<"Salario "<<datos[salario]<<endl;*/
	
	}
	cout<<"\n El total de la planilla es: Q"<<total<<endl;
	delete [] datos;//Borrado de datos de tipo puntero
}
