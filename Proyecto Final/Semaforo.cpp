#include "Semaforo.h"
#include "Windows.h"
/*
* 0  = verde
* 1  = amarillo
* 2  = rojo
*/
/*\Cosntructor de semaforo, recibe un numreo que representa un color y lo establece en el semaforo*/
Semaforo::Semaforo(int color) {
	this->color = color;
}
/*Destructor por omision*/
Semaforo::~Semaforo() {}
/*Cambia de color para el semaforo, este se cambia solo analizando el color que tiene en el momento del cambio
(si es verde pasa a amarillo)
(si es amarillo pasa a rojo)
(si es rojo pasa a verde)*/
void Semaforo::SwitchColor() {
	int colorTemp = this->color; 
	_asm
	{
		cmp colorTemp, 0; // es verde cambia a rojo
		je amarillo
		cmp colorTemp, 1; // es amarillo y cambia a rojo
		je rojo
		mov colorTemp,0; //es rojo y cambia a verde 
		jmp salir

	amarillo:
		mov colorTemp, 1; //cambia amarillo
		jmp salir 
	rojo: 
		inc colorTemp; //cambia a rojo
		jmp salir
	salir: 
	}
	this->color = colorTemp;
}
/*Get para obtener el color actual del semaforo*/
int	Semaforo::getColor() {
	return color; 
}
