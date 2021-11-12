#include<iostream>
#include<conio.h>
#include<math.h>
#include<Windows.h>
#include<time.h>
using namespace std;
using namespace System;
#define teclaArriba 72
#define teclaAbajo 80
#define teclaIzquierda 75
#define teclaDerecha 77
#define teclaEspacio 32 
void cambiarColor(int x) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}
void pixel(int n, int color) {
	cambiarColor(color);
	for (int i = 0; i < n; i++) {
		cout << char(219);
	}
}
void Seega(int x, int y) {

		int n = 1 + rand() % 8;
		Console::SetCursorPosition(x, y);
		pixel(10, n);
		Console::SetCursorPosition(x, y + 1);
		pixel(10, n);
		Console::SetCursorPosition(x, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x, y + 5);
		pixel(10, n);
		Console::SetCursorPosition(x, y + 6);
		pixel(10, n);
		Console::SetCursorPosition(x + 7, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 7, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 7, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x, y + 10);
		pixel(10, n);
		Console::SetCursorPosition(x, y + 11);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y + 1);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 5);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y + 6);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 14, y + 10);
		pixel(10, n);
		Console::SetCursorPosition(x + 14, y + 11);
		pixel(10, n);

		Console::SetCursorPosition(x + 28, y);
		pixel(10, n);
		Console::SetCursorPosition(x + 28, y + 1);
		pixel(10, n);
		Console::SetCursorPosition(x + 28, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 5);
		pixel(10, n);
		Console::SetCursorPosition(x + 28, y + 6);
		pixel(10, n);
		Console::SetCursorPosition(x + 28, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 28, y + 10);
		pixel(10, n);
		Console::SetCursorPosition(x + 28, y + 11);
		pixel(10, n);

		Console::SetCursorPosition(x + 42, y);
		pixel(10, n);
		Console::SetCursorPosition(x + 42, y + 1);
		pixel(10, n);
		Console::SetCursorPosition(x + 42, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 5);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 6);
		pixel(3, n);
		Console::SetCursorPosition(x + 47, y + 6);
		pixel(5, n);
		Console::SetCursorPosition(x + 47, y + 7);
		pixel(5, n);
		Console::SetCursorPosition(x + 49, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 49, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 42, y + 10);
		pixel(10, n);
		Console::SetCursorPosition(x + 42, y + 11);
		pixel(10, n);

		Console::SetCursorPosition(x + 56, y);
		pixel(10, n);
		Console::SetCursorPosition(x + 56, y + 1);
		pixel(10, n);
		Console::SetCursorPosition(x + 56, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 5);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 6);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 10);
		pixel(3, n);
		Console::SetCursorPosition(x + 56, y + 11);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 2);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 3);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 4);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 5);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 6);
		pixel(3, n);
		Console::SetCursorPosition(x + 59, y + 6);
		pixel(4, n);
		Console::SetCursorPosition(x + 59, y + 7);
		pixel(4, n);
		Console::SetCursorPosition(x + 63, y + 7);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 8);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 9);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 10);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 11);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 10);
		pixel(3, n);
		Console::SetCursorPosition(x + 63, y + 11);
		pixel(3, n);
}
struct PunteroSeleccion {
	int x = 35, y = 20;
	char tecla;
	void mover(char tecla){
		switch (tecla) {
		case teclaArriba:
			y--;
			if (y == 18) {
				y++;
			}
			break;
		case teclaAbajo:
			y++;
			if (y == 22) {
				y--;
			}
			break;
		case teclaEspacio:
			if (y == 19) {
				system("cls");
				cout << "Heladito terrible ";
				break;
			}
			if (y == 20) {
				system("cls");
				cout << " Gerald terrible";
				break;
			}
			if (y == 21) {
				exit(0);
			}
			break;
		}
	}
	void Puntero() {
		Console::SetCursorPosition(x, y);
		cout << "*";
	}
};
void menu(int x, int y) {
	Console::SetCursorPosition(x + 1, y-1);
	cout << "1 JUGADOR";
	Console::SetCursorPosition(x + 1, y);
	cout << "2 JUGADORES";
	Console::SetCursorPosition(x + 1, y+1);
	cout << "SALIR DEL JUEGO.";
	Console::SetCursorPosition(x, y);
}
int main() {
	Console::SetWindowSize(86, 25);
	char tecla;
	PunteroSeleccion* puntero = new PunteroSeleccion;
	while (true) {
		Seega(10, 2);
		menu(35, 20);
		if (_kbhit()) {
			char tecla = _getch();
			system("cls");
			puntero->mover(tecla);
			puntero->Puntero();
		}
	}
	
}