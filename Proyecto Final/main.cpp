#include "Semaforo.h"
#include <iostream>
#include <math.h>
#include <Windows.h>
#include "Imprimir.h"

#define AMARILLO = 1; 
#define VERDE = 0; 
#define ROJO = 2; 
using namespace std;
int main() {
	cout << "Semaforo vial\tProyecto Integrador de Lenguaje Ensamblador y Fundamenos de Arquitectura\nEstudiantes:\nLuis Bolaños B91145\nCarlos Espinoza B92786\nSebastian Montero B95016\nGreivin Sanchez B97248\nJarod Venegas B98410\nNota: En la pantalla se presentan 2 semaforos\nEl cambio de color corresponder al color del semaforo de ariba\n\n<--------La pantalla de inicio se quitara en 10 segundos-------->" << endl;
	Sleep(10000);
	system("cls");
	Semaforo uno(0); //Construye un semaforo en verde
	Semaforo dos(2); //Construye un semaforo en rojo 
	MostrarSemaforo estado; 
	char continua = 'y';
	estado.imprimir(uno.getColor());
	Sleep(2000);
	int cantCarros = rand()%10; 
	bool cambio = false; 
	/*Ciclo con los estados del semaforo, donde se toman en cuenta los carros que cruzan mientras que el semaforo 
	se encuentra en verde*/
	do {
		int random;
		uno.SwitchColor(); //Cambia a Amarillo
		random = rand() % 1;
		_asm {
			mov ecx, random;
			mov eax, cantCarros;
			add ecx, eax;
			mov cantCarros, ecx;
		}
		estado.imprimir(uno.getColor());
		Sleep(2000);

		uno.SwitchColor(); //Cambia a Rojo
		dos.SwitchColor(); //Cambia a Verde
		random = rand() % 10;
		_asm {
			mov ecx, random;
			mov eax, cantCarros;
			add ecx, eax;
			mov cantCarros, ecx;
		}
		estado.imprimir(uno.getColor());
		Sleep(2000);

		dos.SwitchColor(); //Cambia a Amarillo
		random = rand() % 1;
		_asm {
			mov ecx, random;
			mov eax, cantCarros;
			add ecx, eax;
			mov cantCarros, ecx;
		}
		estado.imprimir(uno.getColor() + 1);
		Sleep(2000);

		uno.SwitchColor(); //Cambia a Verde
		dos.SwitchColor(); //Cambia a Rojo
		random = rand() % 10;
		_asm{
			mov ecx, random;
			mov eax, cantCarros;
			add ecx, eax; 
			mov cantCarros, ecx; 
		}
		
		estado.imprimir(uno.getColor());
		Sleep(2000);

		cout << "Desea continuar? 'Y' o 'N'" << endl;
		cin >> continua; 
		
	} while (continua!= 'n');
	cout << "Transitaron " << cantCarros << " carros en total" << endl; 
	return 0;
}