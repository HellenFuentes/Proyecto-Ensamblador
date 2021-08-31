#ifndef _SEMAFORO
#define _SEMAFORO
#pragma once
#include <iostream>
#include <string>
class Semaforo {
private: 
	int color; 
public:
	Semaforo(int color); 
	~Semaforo(); 
	void SwitchColor(); 
	int getColor(); 

};

#endif