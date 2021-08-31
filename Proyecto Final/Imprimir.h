#pragma once
#include "windows.h"
#include <iostream>
#include <ostream>
#include <cstdlib>
#define CIRCULO "     rrrrrrrr\n    rrrrrrrrrr\n   rrrrrrrrrrrr\n  rrrrrrrrrrrrrr\n rrrrrrrrrrrrrrrr\nrrrrrrrrrrrrrrrrrr\n rrrrrrrrrrrrrrrr\n  rrrrrrrrrrrrr\n   rrrrrrrrrrr\n    rrrrrrrrr" 
#define RECTANGULO "---------------------------------\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n|\t\t\t\t|\n---------------------------------"

#define ARRIBA_1                   "---------------------------------\t---------------------------------\n|\t   RRRRRRRRRRRR   \t|\t|\t   RRRRRRRRRRRR   \t|\n|\t  R            R  \t|\t|\t  RRRRRRRRRRRRRR  \t|\n|\t R              R \t|\t|\t RRRRRRRRRRRRRRRR \t|\n|\tR                R\t|\t|\tRRRRRRRRRRRRRRRRRR\t|\n|\t R              R \t|\t|\t RRRRRRRRRRRRRRRR \t|\n|\t  R            R   \t|\t|\t  RRRRRRRRRRRRRR   \t|\n|\t   RRRRRRRRRRRR    \t|\t|\t   RRRRRRRRRRRR    \t|"
#define MEDIO_1                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   AAAAAAAAAAAA   \t|\t|\t   AAAAAAAAAAAA   \t|\n|\t  A            A  \t|\t|\t  A            A  \t|\n|\t A              A \t|\t|\t A              A \t|\n|\tA                A\t|\t|\tA                A\t|\n|\t A              A \t|\t|\t A              A \t|\n|\t  A            A   \t|\t|\t  A            A   \t|\n|\t   AAAAAAAAAAAA    \t|\t|\t   AAAAAAAAAAAA    \t|"
#define ABAJO_1                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   VVVVVVVVVVVV   \t|\t|\t   VVVVVVVVVVVV   \t|\n|\t  VVVVVVVVVVVVVV  \t|\t|\t  V            V  \t|\n|\t VVVVVVVVVVVVVVVV \t|\t|\t V              V \t|\n|\tVVVVVVVVVVVVVVVVVV\t|\t|\tV                V\t|\n|\t VVVVVVVVVVVVVVVV \t|\t|\t V              V \t|\n|\t  VVVVVVVVVVVVVV   \t|\t|\t  V            V   \t|\n|\t   VVVVVVVVVVVV    \t|\t|\t   VVVVVVVVVVVV    \t|\n---------------------------------\t---------------------------------\n"

#define ARRIBA_3                   "---------------------------------\t---------------------------------\n|\t   RRRRRRRRRRRR   \t|\t|\t   RRRRRRRRRRRR   \t|\n|\t  RRRRRRRRRRRRRR  \t|\t|\t  R            R  \t|\n|\t RRRRRRRRRRRRRRRR \t|\t|\t R              R \t|\n|\tRRRRRRRRRRRRRRRRRR\t|\t|\tR                R\t|\n|\t RRRRRRRRRRRRRRRR \t|\t|\t R              R \t|\n|\t  RRRRRRRRRRRRRR   \t|\t|\t  R            R   \t|\n|\t   RRRRRRRRRRRR    \t|\t|\t   RRRRRRRRRRRR    \t|"
#define MEDIO_3                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   AAAAAAAAAAAA   \t|\t|\t   AAAAAAAAAAAA   \t|\n|\t  A            A  \t|\t|\t  A            A  \t|\n|\t A              A \t|\t|\t A              A \t|\n|\tA                A\t|\t|\tA                A\t|\n|\t A              A \t|\t|\t A              A \t|\n|\t  A            A   \t|\t|\t  A            A   \t|\n|\t   AAAAAAAAAAAA    \t|\t|\t   AAAAAAAAAAAA    \t|"
#define ABAJO_3                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   VVVVVVVVVVVV   \t|\t|\t   VVVVVVVVVVVV   \t|\n|\t  V            V  \t|\t|\t  VVVVVVVVVVVVVV  \t|\n|\t V              V \t|\t|\t VVVVVVVVVVVVVVVV \t|\n|\tV                V\t|\t|\tVVVVVVVVVVVVVVVVVV\t|\n|\t V              V \t|\t|\t VVVVVVVVVVVVVVVV \t|\n|\t  V            V   \t|\t|\t  VVVVVVVVVVVVVV   \t|\n|\t   VVVVVVVVVVVV    \t|\t|\t   VVVVVVVVVVVV    \t|\n---------------------------------\t---------------------------------\n"


#define ARRIBA_4                   "---------------------------------\t---------------------------------\n|\t   RRRRRRRRRRRR   \t|\t|\t   RRRRRRRRRRRR   \t|\n|\t  RRRRRRRRRRRRRR  \t|\t|\t  R            R  \t|\n|\t RRRRRRRRRRRRRRRR \t|\t|\t R              R \t|\n|\tRRRRRRRRRRRRRRRRRR\t|\t|\tR                R\t|\n|\t RRRRRRRRRRRRRRRR \t|\t|\t R              R \t|\n|\t  RRRRRRRRRRRRRR   \t|\t|\t  R            R   \t|\n|\t   RRRRRRRRRRRR    \t|\t|\t   RRRRRRRRRRRR    \t|"
#define MEDIO_4                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   AAAAAAAAAAAA   \t|\t|\t   AAAAAAAAAAAA   \t|\n|\t  A            A  \t|\t|\t  AAAAAAAAAAAAAA  \t|\n|\t A              A \t|\t|\t AAAAAAAAAAAAAAAA \t|\n|\tA                A\t|\t|\tAAAAAAAAAAAAAAAAAA\t|\n|\t A              A \t|\t|\t AAAAAAAAAAAAAAAA \t|\n|\t  A            A   \t|\t|\t  AAAAAAAAAAAAAA   \t|\n|\t   AAAAAAAAAAAA    \t|\t|\t   AAAAAAAAAAAA    \t|"
#define ABAJO_4                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   VVVVVVVVVVVV   \t|\t|\t   VVVVVVVVVVVV   \t|\n|\t  V            V  \t|\t|\t  V            V  \t|\n|\t V              V \t|\t|\t V              V \t|\n|\tV                V\t|\t|\tV                V\t|\n|\t V              V \t|\t|\t V              V \t|\n|\t  V            V   \t|\t|\t  V            V   \t|\n|\t   VVVVVVVVVVVV    \t|\t|\t   VVVVVVVVVVVV    \t|\n---------------------------------\t---------------------------------\n"

#define ARRIBA_2                   "---------------------------------\t---------------------------------\n|\t   RRRRRRRRRRRR   \t|\t|\t   RRRRRRRRRRRR   \t|\n|\t  R            R  \t|\t|\t  RRRRRRRRRRRRRR  \t|\n|\t R              R \t|\t|\t RRRRRRRRRRRRRRRR \t|\n|\tR                R\t|\t|\tRRRRRRRRRRRRRRRRRR\t|\n|\t R              R \t|\t|\t RRRRRRRRRRRRRRRR \t|\n|\t  R            R   \t|\t|\t  RRRRRRRRRRRRRR   \t|\n|\t   RRRRRRRRRRRR    \t|\t|\t   RRRRRRRRRRRR    \t|"
#define MEDIO_2                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   AAAAAAAAAAAA   \t|\t|\t   AAAAAAAAAAAA   \t|\n|\t  AAAAAAAAAAAAAA  \t|\t|\t  A            A  \t|\n|\t AAAAAAAAAAAAAAAA \t|\t|\t A              A \t|\n|\tAAAAAAAAAAAAAAAAAA\t|\t|\tA                A\t|\n|\t AAAAAAAAAAAAAAAA \t|\t|\t A              A \t|\n|\t  AAAAAAAAAAAAAA   \t|\t|\t  A            A   \t|\n|\t   AAAAAAAAAAAA    \t|\t|\t   AAAAAAAAAAAA    \t|"
#define ABAJO_2                                    "\n|\t                  \t|\t|\t                  \t|\n|\t   VVVVVVVVVVVV   \t|\t|\t   VVVVVVVVVVVV   \t|\n|\t  V            V  \t|\t|\t  V            V  \t|\n|\t V              V \t|\t|\t V              V \t|\n|\tV                V\t|\t|\tV                V\t|\n|\t V              V \t|\t|\t V              V \t|\n|\t  V            V   \t|\t|\t  V            V   \t|\n|\t   VVVVVVVVVVVV    \t|\t|\t   VVVVVVVVVVVV    \t|\n---------------------------------\t---------------------------------\n"


class MostrarSemaforo
{
public:
	//Constrcutor por Omision
	MostrarSemaforo() {}
	//Limpia la terminal para poder imprimir nuevamente semaforos
	void ClearScreen(){
		std::cout << std::string(100, '\n');
	}
	//Recibe el caso a imprimir 
	void imprimir(int num){
		switch (num)
		{
		case 0:
			system("cls"); //Primero en Verde y segundo en Rojo
			std::cout << ARRIBA_1 << MEDIO_1 << ABAJO_1 << std::endl;
			break;
		case 1:
			system("cls"); // Primero en Amarillo y segundo en Rojo
			std::cout << ARRIBA_2 << MEDIO_2 << ABAJO_2 << std::endl;
			break;
		case 2:
			system("cls"); //Primero en Rojo y segundo en Verde
			std::cout << ARRIBA_3 << MEDIO_3 << ABAJO_3 << std::endl;
			break;
		case 3:
			system("cls"); //Primero en Rojo y segundo en Amarillo 
			std::cout << ARRIBA_4 << MEDIO_4 << ABAJO_4 << std::endl;
			break;

		}

	}

};
