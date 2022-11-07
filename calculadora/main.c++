#include <iostream>
using namespace std;

int main() {
	int op, x, y, resultado;
	string senha;
	string senhab;

	cout << "cadastre sua senha:\n";
	cin >> senhab;
	cout << endl;
	cout << "boa senha\n";

	do {
		cout << endl;
		cout << "Qual a senha da calculadora?\n";
		cin >> senha;
		if (senha != senhab) {
			cout << "\033[0;31m" << endl;
			cout << "senha incorreta\n";
			cout << "\033[0;0m" << endl;
		}

	} while (senha != senhab);

	cout << "Bem vindo\n";
	cout << endl;
	do {
		cout << "\033[0;36m1\033[0;0m - para somar\n\033[0m";
		cout << "\033[0;36m2\033[0;0m - para diminuir\n";
		cout << "\033[0;36m3\033[0;0m - para multiplicar\n";
		cout << "\033[0;36m4\033[0;0m - para dividir\n";
		cout << "\033[0;36m5\033[0;0m - para sair\n";
		cin >> op;

		switch (op) {
		case 1:
			cout << "digite o numero x e y\n";
			cin >> x;
			cin >> y;
			resultado = x + y;
			cout << "o resultado é de: " << resultado << endl;
			break;
		case 2:
			cout << "digite x e y\n";
			cin >> x;
			cin >> y;
			resultado = x - y;
			cout << "o resultado é de:" << resultado << endl;
			break;
		case 3:
			cout << "digite x e y\n";
			cin >> x;
			cin >> y;
			resultado = x * y;
			cout << "o resultado é de:" << resultado << endl;
			break;
		case 4:
			cout << "digite x e y\n";
			cin >> x;
			cin >> y;
			resultado = x / y;
			cout << "o resultado é de:" << resultado << endl;
			break;
		}
	} while (op != 5);
	cout << "Valeu\n";
	return 0;
}