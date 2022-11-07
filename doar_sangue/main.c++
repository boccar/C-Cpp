#include <iostream>
using namespace std;

int main()
{
    // variáveis
    int qtdA, qtdB, qtdO, qtdAB, idade;
    string tipoSangue, paciente;
    char resposta, novoDoador, s, n;
    novoDoador = 's';

    while (novoDoador == 's')
    {
        cout << "Informe a idade: \n";
        cin >> idade;

        if (idade >= 18)
        {
            if (idade >= 70)
            {
                cout << "Doador supera idade maxima \n";
            }

            else
            {

                if (idade > 60)
                {
                    cout << "Doou antes dos 60?\n";
                    cin >> resposta;

                    if (resposta != 's')
                    {
                        cout << "Doador supera idade maxima \n";

                        if (resposta == 'n')
                        {
                            cout << "Deseja cadastrar outro doador? \n";
                        }
                    }

                    else
                    {
                        cout << "Informe o tipo sanguineo: (A,B,O,AB) \n";
                        cin >> tipoSangue;
                    }
                }

                else
                {
                    cout << "Informe o tipo sanguineo: (A,B,O,AB) \n";
                    cin >> tipoSangue;
                }

                if (tipoSangue == "A" || tipoSangue == "B" || tipoSangue == "O" || tipoSangue == "AB")
                {
                    if (tipoSangue == "A")
                    {
                        qtdA = qtdA + 1;
                    }
                    if (tipoSangue == "B")
                    {
                        qtdB = qtdB + 1;
                    }
                    if (tipoSangue == "O")
                    {
                        qtdO = qtdO + 1;
                    }
                    if (tipoSangue == "AB")
                    {
                        qtdAB = qtdAB + 1;
                    }
                }
                else
                {
                    cout << "tipo sanguineo invaldo \n";
                }
                cout << "Deseja cadastrar um novo doador ? 's'/'n' \n";
                cin >> novoDoador;
            }
        }

        else
        {
            cout << "Doador não possui idade minima para doar \n";
        }

        cout << "Qual o tipo sanguineo do paciente? (A,B,O,AB)\n";
        cin >> tipoSangue;

        if (tipoSangue == "A" || tipoSangue == "B" || tipoSangue == "O" || tipoSangue == "AB")
        {
            if (tipoSangue == "A")
            {
                cout << "Ha " << qtdA << " doador tipo A \n";
            }
            if (tipoSangue == "B")
            {
                cout << "Ha " << qtdB << " doador tipo B \n";
            }
            if (tipoSangue == "O")
            {
                cout << "Ha " << qtdO << " doador tipo O \n";
            }
            if (tipoSangue == "AB")
            {
                cout << "Ha " << qtdAB << " doador tipo AB \n";
            }
        }
    }
    return 0;
}