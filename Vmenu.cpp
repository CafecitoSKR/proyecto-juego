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
void instrucciones() {
	Console::SetCursorPosition(7, 1);
	pixelfondo(72);
	for (int i = 0; i < 32; i++) {
		Console::SetCursorPosition(7, 2 + i);
		pixelfondo(1);
		Console::SetCursorPosition(78, 2 + i);
		pixelfondo(1);
	}
	Console::SetCursorPosition(7, 34);
	pixelfondo(72);
	//FLECHA
	Console::SetCursorPosition(80, 5);
	cout << "SCROLL";
	Console::SetCursorPosition(83, 6);
	cout << char(203);
	for (int i = 0; i < 7; i++) {
		Console::SetCursorPosition(83, 7+i);
		cout << char(186);
	}
	Console::SetCursorPosition(82, 12);
	cout << char(186);
	Console::SetCursorPosition(81, 11);
	cout << char(186);
	Console::SetCursorPosition(84, 12);
	cout << char(186);
	Console::SetCursorPosition(85, 11);
	cout << char(186);
	// Instrucciones
	Console::SetCursorPosition(10, 2);
	cout << "1.Cada jugador tiene 12 fichas de un color (blancas o negras) y las \n";
	Console::SetCursorPosition(10, 3);
	cout << "va colocando de a dos por turno sobre el tablero.";
	Console::SetCursorPosition(10, 4);
	cout << "2.Las siguientes fichas pueden ser colocadas en cualquier casilla \n";
	Console::SetCursorPosition(10, 5);
	cout << ", excepto la del centro del tablero marcada con una x que "<<endl;
	Console::SetCursorPosition(10, 6);
	cout << "permanecerá vacía.";
	Console::SetCursorPosition(10, 7);
	cout << "3.El jugador que coloca el último par de fichas comienza la";
	Console::SetCursorPosition(10, 8);
	cout << " siguiente etapa del juego.";
	Console::SetCursorPosition(10, 9);
	cout << "4.Las fichas se mueven de manera ortogonal como el rey del Ajedrez";
	Console::SetCursorPosition(10, 10);
	cout<<"a una casilla adyacente vacía, incluyendo la del centro";
	Console::SetCursorPosition(10, 11);
	cout << "5. No pueden moverse en diagonal. ";
	Console::SetCursorPosition(10, 12);
	cout << "6.Una ficha es capturada y removida si ésta es encerrada entre dos";
	Console::SetCursorPosition(10, 13);
	cout << " fichas contrarias (no en sentido diagonal.";
	Console::SetCursorPosition(10, 14);
	cout << "7.Un solo movimiento puede implicar el encierro y la captura";
	Console::SetCursorPosition(10, 15);
	cout << "de varias piezas a la vez.";
	Console::SetCursorPosition(10, 16);
	cout << "8. El jugador que realiza una captura puede seguir moviendo";
	Console::SetCursorPosition(10, 17);
	cout << "la misma ficha que realizó el último movimiento";
	Console::SetCursorPosition(10, 18);
	cout << "mientras siga capturando.";
	Console::SetCursorPosition(10, 19);
	cout << "9.Una ficha puede colocarse entre dos fichas contrarias";
	Console::SetCursorPosition(10, 20);
	cout << " sin ser capturada y la ficha que ocupa la casilla";
	Console::SetCursorPosition(10, 21);
	cout << " central (marcada con x) no puede ser capturada";
	Console::SetCursorPosition(10, 22);
	cout << "10.Cuando un jugador no puede mover le pasa el turno al ";
	Console::SetCursorPosition(10, 23);
	cout << "contrario. Se gana si se capturan todas las fichas contrarias.";
	Console::SetCursorPosition(10, 24);
	cout << " Cada jugador puede construir una barrera (o muro) con fichas detrás";
	Console::SetCursorPosition(10, 25);
	cout << "de la cual solo se encuentran sus propias fichas que pueden moverse ";
	Console::SetCursorPosition(10, 26);
	cout << "sin peligro de ser capturadas.";
	Console::SetCursorPosition(10, 27);
	cout << "11.En el caso de existir una barrera gana el jugador que tiene la";
	Console::SetCursorPosition(10, 28);
	cout << "mayor cantidad de fichas, si tienen la misma cantidad es un empate.";
	Console::SetCursorPosition(13,31);
	//RECUADRO
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
	Console::SetCursorPosition(13, 31 + 1);
	cout << char(186);
	Console::SetCursorPosition(13 + 40, 31 + 1);
	cout << char(186) << endl;
	Console::SetCursorPosition(13, 31 + 2);
	cout << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
	//Texto
	Console::SetCursorPosition(13 + 2, 31 + 1);
	cout <<"APRETAR ESPACIO PARA REGRESAR AL MENU" << endl;
}
void Seleccion(int *respuesta) {
	switch (*respuesta)
	{
	case 1:

			break;
	case 2:

		break;
	case 3:

		break;

	case 4:
		instrucciones();
		break;

	case 5:
		
		break;
	case 6:

		break;
	default:
		break;
	}
}
int main() {
	srand(time(NULL));
	int* respuesta = new int;
	Console::SetWindowSize(86, 25);
	*respuesta = menufuncional(25, 17);
	Seleccion(respuesta);
	
	_getch();
}