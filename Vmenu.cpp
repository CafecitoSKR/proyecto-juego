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
void pixelfondo(int n) {
	for (int i = 0; i < n; i++) {
		cout << char(184);
	}
}
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
		Sleep( 100);
}
void puntero(int x, int y) {
	Console::SetCursorPosition(x, y);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	Console::SetCursorPosition(x, y+1);
	cout << char(186);
	Console::SetCursorPosition(x+16, y + 1);
	cout<<char(186) << endl;
	Console::SetCursorPosition(x, y+2);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	
}
void fondo() {
	Console::SetCursorPosition(7, 1);
	pixelfondo(72);
	for (int i = 0; i < 14; i++) {
		Console::SetCursorPosition(7, 2+i);
		pixelfondo(1);
		Console::SetCursorPosition(78, 2 + i);
		pixelfondo(1);
	}
	Console::SetCursorPosition(7, 16);
	pixelfondo(72);

}
void menu(int x, int y) {
	Console::SetCursorPosition(x + 6, y + 1);
	cout << "1 JUGADOR";
	Console::SetCursorPosition(x + 24, y + 1);
	cout << "CREDITOS";
	Console::SetCursorPosition(x + 6, y + 3);
	cout << "2 JUGADORES";
	Console::SetCursorPosition(x + 24, y + 3);
	cout << "INSTRUCCIONES";
	Console::SetCursorPosition(x + 6, y + 5);
	cout << "SALIR DEL JUEGO";
	Console::SetCursorPosition(x + 24, y + 5);
	cout << "XD";
}
int menufuncional(int x, int y) {
	int a = y;
	int b = x;
	int respuesta;				// 1 =2 jugadores, 2= 1 JUGADOR 3 = CERRAR EL JUEGO
	char tecla;
	while (tecla != teclaEspacio) {
		fondo();
		Seega(10, 3);
		menu(b, a);
		puntero(x+5, y+2);
		if (_kbhit()) {
			tecla = getch();
			if (tecla == teclaArriba) {
				y-=2;
			}
			if (tecla == teclaAbajo) {
				y+=2;
			}
			if (tecla==teclaArriba && y < a -2) {
				y+=2;
			}
			if (tecla == teclaAbajo && y > a+2) {
				y -= 2;
			}
			if (tecla == teclaIzquierda) {
				x -= 18;
			}
			if (tecla == teclaDerecha) {
				x += 18;
			}
			if (tecla == teclaIzquierda && x < b) {
				x += 18;
			}
			if (tecla == teclaDerecha && x > b+18 ) {
				x -= 18;
			}
			if (tecla == teclaEspacio && x == b && y == a) {// 2 JUGADORES
				system("cls");
				return 1;
			}
			if (tecla == teclaEspacio && x == b && y == a-2) {// 1 JUGADORES
				system("cls");
				return 2;
			}
			if (tecla == teclaEspacio && x == b  && y == a +2 ) {// Cerrar el juego
				system("cls");
				return 3;
			}
			if (tecla == teclaEspacio && x == b + 18 && y == a) {// INSTRUCCIONES
				system("cls");
				return 4;
			}
			if (tecla == teclaEspacio && x == b+18 && y == a - 2) {// CRÉDITOS
				system("cls");
				return 5;
			}
			if (tecla == teclaEspacio && x == b+18 && y == a + 2) {// XD
				system("cls");
				return 6;
			}


			system("cls");
		}

	}
}

int main() {
	srand(time(NULL));
	Console::SetWindowSize(86, 25);
	cout<<menufuncional(25, 17);
	
	_getch();
}