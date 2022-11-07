#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    string nome;
    char sexo;
    int idade = 0;
    int fome, higiene, inteligencia, ativo, energia, felicidade, saude = 0;
    int op;
    int life;

    cout << "Seu tamagotchi acabou de sair do ovo!" << endl;
    cout << "Qual nome que voce quer dar pra ele? " << endl;
    cin >> nome;

    cout << "Sexo: ('M' para macho, 'F' femea ou 'A' para aleatorio):" << endl;
    cin >> sexo;

    if (sexo == 'A')
    {
        srand(time(0));
        int sexoa = rand() % 10 + 1;

        if (sexoa % 2 != 0)
        {
            sexo = 'M';
        }
        else
        {
            sexo = 'F';
        }
    }
    else
    {
        sexo = sexo;
    }

    cout << "Nome:" << nome << endl;
    cout << "Sexo:" << sexo << endl;
    cout << "Idade:" << idade << endl;
    cout << endl;

    fome = rand() % 50 + 51;
    cout << "Fome:" << fome << endl;
    higiene = rand() % 50 + 51;
    cout << "Higiene:" << higiene << endl;
    saude = rand() % 50 + 51;
    cout << "Saude:" << saude << endl;
    inteligencia = rand() % 50 + 51;
    cout << "Inteligencia:" << inteligencia << endl;
    ativo = rand() % 50 + 51;
    cout << "Atividade:" << ativo << endl;
    energia = rand() % 50 + 51;
    cout << "Energia:" << energia << endl;
    felicidade = rand() % 50 + 51;
    cout << "Felicidade:" << felicidade << endl;
    cout << endl;
    cout << "Agora voce pode interagir com ele!\n";
    cout << endl;

    do
    {
        cout << "Opçoes:\n";
        cout << "1 - comer\n";
        cout << "2 - esportes\n";
        cout << "3 - ler\n";
        cout << "4 - jogar\n";
        cout << "5 - tomar banho\n";
        cout << "6 - tomar remedio\n";
        cout << "7 - dormir\n";
        cout << "8 - eutanasia\n";
        cin >> op;

        switch (op)

        {
        case 1:
            if (fome < 100 && (saude > 50 || felicidade > 50))
            {
                fome = fome + 30;
                felicidade = felicidade + 5;
                saude = saude + 10;
                higiene = higiene - 10;
                energia = energia + 20;
            }
            else if (fome >= 100 && (felicidade > 70 || felicidade < 30))
            {
                saude = saude - 10;
                felicidade = felicidade + 10;
            }
            else
            {
                cout << "Ele se recusa a comer\n";
            }
            break;
        case 2:
            if (energia > 40 && saude > 50)
            {
                fome = fome - 20;
                energia = energia - 30;
                saude = saude + 20;
                felicidade = felicidade + 10;
                ativo = ativo + 10;
                higiene = higiene - higiene;
            }
            else
            {
                cout << "Ele se recusa a tomar banho\n";
            }
            break;
        case 3:
            if (fome && energia > 30)
            {
                inteligencia = inteligencia + 10;
                energia = energia - 5;
            }
            else
            {
                cout << "Ele se recusa a ler\n";
            }
            break;
        case 4:
            if (energia > 10 || felicidade > 50)
            {
                felicidade = felicidade + 10;
                inteligencia = inteligencia + 5;
                higiene = higiene - 5;
            }
            else
            {
                cout << "Ele se recusa a jogar\n";
            }
            break;
        case 5:
            if (higiene < 30 && felicidade > 10)
            {
                higiene = 100;
                felicidade = felicidade + 10;
                saude = saude + 10;
            }
            else
            {
                cout << "Ele se recusa a tomar banho\n";
            }
            break;
        case 6:
            if (saude < 30)
            {
                saude = saude + 10;
            }
            else
            {
                cout << "Ele se recusa a tomar remedio\n";
            }
            break;
        case 7:
            if (energia < 30 && (saude > 50 || saude < 30))
            {
                idade = idade + 1;
                if (energia > 50)
                {
                    energia = 100;
                }
                else if (saude < 30)
                {
                    energia = energia + 30;
                    saude = saude + 10;
                }
                else
                {
                    cout << "Ele se recusa a dormir\n";
                }
            }
        }
        cout << "Fome:" << fome << endl;
        cout << "Higiene:" << higiene << endl;
        cout << "Saude:" << saude << endl;
        cout << "Inteligencia:" << inteligencia << endl;
        cout << "Atividade:" << ativo << endl;
        cout << "Energia:" << energia << endl;
        cout << "Felicidade:" << felicidade << endl;
        cout << "Idade:" << idade << endl;
    } while (op != 8 && (saude > 0 || energia < 0));
    {
        cout << "Ele desfaleceu :( \n";
        cout << "Sua pontuação foi de:\n";
        cout << "Fome:" << fome << endl;
        cout << "Higiene:" << higiene << endl;
        cout << "Saude:" << saude << endl;
        cout << "Inteligencia:" << inteligencia << endl;
        cout << "Atividade:" << ativo << endl;
        cout << "Energia:" << energia << endl;
        cout << "Felicidade:" << felicidade << endl;
        cout << "Idade:" << idade << endl;
    }
}