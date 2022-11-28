#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int a = 0, b = 0,d = 0, id = 1, limite = 0, op = 0;
float iva = 0;
bool c = true, f = true;
struct videojuegos{
	string nm, desc, carac, genero, clasi, precio, anio, impuesto;
}juegos[100];

void lista();
void agregar();
void modificar();
void eliminar();
void main() {

	while (c) {
		cout << "---------------Bienvenidos al Calabozo de Dan -------------" << endl;
		cout << "------------------- Men\243 Principal ---------------------" << endl;
		cout << "Bienvenido: Usuario. Selecciona una opci\242n, porfavor: " << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "\t1.- Agregar articulo " << endl;
		cout << "\t2.- Modificar articulo. " << endl;
		cout << "\t3.- Eliminar articulo. " << endl;
		cout << "\t4.- Lista de articulos vigentes. " << endl;
		cout << "\t5.- Limpiar pantalla. " << endl;
		cout << "\t6.- Salir " << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cin >> a;

		switch (a)
		{
		case 1:
		{
			agregar();
			cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			break;
		}
		case 2:
		{
			modificar();
			break;
		}
		case 3:
		{
			eliminar();
			break;
		}
		case 4: {
			system("cls");
			lista();
			cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			break;
		}
		case 5: {
			system("cls");
			break;
		}
		case 6: {
			system("cls");
			cout << "::::::::::::::::SALIENDO DEL PROGRAMA::::::::::::::::" << endl;
			system("pause>null");
			c = false;
		}
		default: {
			cout << "Error, ingrese una opci\242n correcta" << endl;;
			break;
		}
		}

	}

}

void agregar() {
	cout << "Ingrese la cantidad de juegos a agregar: " << endl;
	cin >> limite;
	cin.ignore();
	for (int i = 0; i < limite; i++) {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese t\241tulo de videojuego : " << endl;
		getline(cin, (juegos[i].nm));
		cout << "Ingrese descripci\242n breve del juego: " << endl;
		getline(cin, (juegos[i].desc));
		cout << "Agrege caracter\241stica del juego:" << endl;
		getline(cin, (juegos[i].carac));
		cout << "Agrege genero del juego: " << endl;
		getline(cin, (juegos[i].genero));
		cout << "Agrege a\244o del videojuego: " << endl;
		getline(cin, (juegos[i].anio));
		cout << "Agrege clasificacion del videojuego: " << endl;
		getline(cin, (juegos[i].clasi));
		cout << "Agrege precio del videojuego: " << endl;
		getline(cin, (juegos[i].precio));

	}
	system("cls");
	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "             Juegos agregados exitosamente.             " << endl;
	}

void lista() {

	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "                  Lista de art\241culos             " << endl;

	for (int i = 0; i < limite; i++) {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << id + i << ": " << juegos[i].nm << endl;
		cout << "Caracter\241sticas: " << juegos[i].carac << endl;
		cout << "Descripci\242n: " << juegos[i].desc << endl;
		cout << "Genero: " << juegos[i].genero << endl;
		cout << "A\244o de lanzamiento: " << juegos[i].anio << endl;
		cout << "Clasificaci\242n: " << juegos[i].clasi << endl;
		cout << "Precio Total: " << endl;


	}
}


void modificar() {
	int op = 0, nti = 0;

	cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << "Ingrese opcion a modificar: " << endl;
	cout << "\t1.- Titulo del videojuego " << endl;
	cout << "\t2.- Descripcion breve. " << endl;
	cout << "\t3.- Caracteristica. " << endl;
	cout << "\t4.- A\244o de videojuego. " << endl;
	cout << "\t5.- Clasificacion del videojuego. " << endl;
	cout << "\t6.- Precio de videojuego. " << endl;
	cin >> op;
	switch (op) {
	case 1: {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op; //0 = 1 juego, 1 = 2do juego, y asi.
		cin.ignore();
			if (op < 3) {
				cout << "Ingrese nuevo titulo a modificar: " << endl;
				getline(cin, (juegos[op].nm));
				
			}
			else {

				cout << "No existe valor agregado en la opcion." << endl;

			}
			
			cout << "Titulo cambiado exitosamente!" << endl;
			cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
			break;
			
	}
	case 2: {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op;
		cin.ignore();
		if (op < 3) {
			cout << "Ingrese descripcion a modificar: " << endl;
			getline(cin, (juegos[op].desc));

		}
		else {

			cout << "No existe valor agregado en la opcion." << endl;

		}

		cout << "Descripcion cambiada exitosamente!" << endl; 
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		break;

	}
	case 3: {
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op;
		cin.ignore();
		if (op < 3) {
			cout << "Ingrese caracteristica a modificar: " << endl;
			getline(cin, (juegos[op].carac));

		}
		else {

			cout << "No existe valor agregado en la opcion." << endl;

		}

		cout << "Caracteristicas cambiada exitosamente!" << endl;
		break;

	}
	case 4: {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op;
		cin.ignore();
		if (op < 3) {
			cout << "Ingrese A\244o a modificar: " << endl;
			getline(cin, (juegos[op].anio));

		}
		else {

			cout << "No existe valor agregado en la opcion." << endl;

		}
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "A\242o cambiado exitosamente!" << endl;
		break;

	}
	case 5: {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op;
		cin.ignore();
		if (op < 3) {
			cout << "Ingrese clasificacion a modificar: " << endl;
			getline(cin, (juegos[op].clasi));

		}
		else {

			cout << "No existe valor agregado en la opcion." << endl;

		}
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Clasificacion cambiada exitosamente!" << endl;
		break;

	}
	case 6: {
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Ingrese el ID del videojuego a modificar: " << endl;
		cin >> op;
		cin.ignore();
		if (op < 3) {
			cout << "Ingrese precio a modificar: " << endl;
			getline(cin, (juegos[op].precio));

		}
		else {

			cout << "No existe valor agregado en la opcion." << endl;

		}
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Precio cambiada exitosamente!" << endl;
		break;

	}
	default: {
		cout << "Error, ingrese una opci\242n correcta" << endl;;
		break;
	}








	}


}

void eliminar() {
	int op = 0 , elim = 0; 
	cout << "Ingrese el ID del videojuego a eliminar: " << endl;
	cin >> op;
	if (op < 3) {
		juegos[op].nm = elim;
		juegos[op].carac = elim;		
		juegos[op].desc = elim;
		juegos[op].genero = elim;
		juegos[op].anio = elim;
		juegos[op].clasi = elim;
		juegos[op].precio = elim;
	}
	else {

		cout << "No existe valor agregado en la opcion." << endl;

	}
	cout << "Juego eliminado exitosamente!." << endl;


}

