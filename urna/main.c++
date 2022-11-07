#include <iostream>
using namespace std;

int main()
{

    int op, cpf, voto, cpf2, s;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int n = 0;
    int b = 0;
    int smn, smb;
    double smnm, smbm;

    cout << endl;
    cout << "Bem vindo a urna\n";
    cout << endl;
    cout << "Digite os 3 primeiros digitos do seu cpf para votar\n";
    cin >> cpf;
    cout << endl;

    cout << "1. Candidato Jair Rodrigues\n";
    cout << "2. Candidato Carlos Luz\n";
    cout << "3. Candidato Neves Rocha\n";
    cout << "4. Nulo\n";
    cout << "5. Branco\n";
    cout << endl;
    do
    {
        cout << "Entre com seu voto:\n";
        cin >> voto;

        switch (voto)
        {
        case 1:
        {
            cand1 = cand1 + 1;
        }
        break;
        case 2:
        {
            cand2 = cand2 + 1;
        }
        break;
        case 3:
        {
            cand3 = cand3 + 1;
        }
        break;
        case 4:
        {
            n = n + 1;
        }
        break;
        case 5:
        {
            b = b + 1;
        }
        break;
        }
    } while (voto != 6);
    cout << endl;

    s = cand1 + cand2 + cand3 + n + b;
    smn = s - n;
    smb = s - b;
    smnm = s - smn;
    smbm = s - smb;
    cout << endl;

    cout << "Para exibir o resultado digite os 3 primeiros digitos do seu cpf\n";
    cin >> cpf2;

    do
    {
        cout << "cpf errado, digite novamente\n";
        cin >> cpf2;
    } while (cpf2 != cpf);

    cout << "O canditado 1 teve: " << cand1 << " votos.\n";
    cout << "O canditado 2 teve: " << cand2 << " votos.\n";
    cout << "O canditado 3 teve: " << cand3 << " votos.\n";
    cout << "A votação teve " << (smnm / s) * 100.0 << "% de votos nulos.\n";
    cout << "A votação teve " << (smbm / s) * 100.0 << "% de votos em branco.\n";

    if ((cand3 > 0) || (cand1 > 0) || (cand2 > 0))
    {
        if (cand1 > (cand2 || cand3))
        {
            cout << "O candidato 1 ganhou com: " << cand1 << " votos.\n";
        }
        else if (cand2 > (cand1 || cand3))
        {
            cout << "O candidato 2 ganhou com: " << cand2 << " votos.\n";
        }
        else if (cand3 > (cand2 || cand1))
        {
            cout << "O candidato 3 ganhou com: " << cand3 << " votos.\n";
        }
        else if (((cand1 == cand2) != cand3) && (cand1 > 0 && cand2 > 0))
        {
            cout << "O candito 1 empatou com o candidato 2\n"
                 << "A votação vai para o 2º turno\n";
        }
        else if (((cand1 == cand3) != cand2) && (cand1 > 0 && cand3 > 0))
        {
            cout << "O candito 1 empatou com o candidato 3\n"
                 << "A votação vai para o 2º turno\n";
        }
        else if (((cand2 == cand3) != cand1) && (cand2 > 0 && cand3 > 0))
        {
            cout << "O candito 2 empatou com o candidato 3\n"
                 << "A votação vai para o 2º turno\n";
        }
        else if (cand1 == cand2 == cand3)
        {
            cout << "O candito 1 empatou com o candidato 2 e com o candidato 3.\n"
                 << "A votação vai para o 2º turno\n";
        }
    }

    return 0;
}