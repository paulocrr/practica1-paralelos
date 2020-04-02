// practica1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

constexpr auto MAX = 10000;
#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <ctime>

double A[MAX][MAX];
double x[MAX];
double y[MAX];


void generateRandomNumbers() {
	for (int i = 0; i < MAX; ++i)
	{
		x[i] = rand();
		y[i] = 0.0;
		for (int j = 0; j < MAX; ++j)
		{
			A[i][j] = rand();
		}
	}


}

void firstFunction() {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			y[i] += A[i][j] * x[j];
		}
	}
}

void secondFunction() {
	for (int j = 0; j < MAX; j++) {
		for (int i = 0; i < MAX; i++) {
			y[i] += A[i][j] * x[j];
		}
	}
}

int main()
{
	srand(time(0));
	generateRandomNumbers();
	unsigned t0, t1;
	t0 = clock();
	firstFunction();
	t1 = clock();
	double time = (double(t1 - t0) / CLOCKS_PER_SEC);
	std::cout << "Tiempo de ejecucion primera funcion: " << time << std::endl;
	generateRandomNumbers();
	t0 = clock();
	secondFunction();
	t1 = clock();
	time = (double(t1 - t0) / CLOCKS_PER_SEC);
	std::cout << "Tiempo de ejecucion segunda funcion: " << time << std::endl;


	return 0;
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
