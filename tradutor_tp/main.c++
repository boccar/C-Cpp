#include <iostream>
using namespace std;
int main()
{
    int op;
    switch (op);

    do
    {
        string palavra;
        cout << "Qual a palavra q deseja traduzir? " << endl;
        cin >> palavra;

        string palavraB = palavra;

        for (int i = 0; i < palavra.size(); i++)
        // t e n i s
        // p o l a r
        {
            if (palavraB[i] == 't')
            {
                palavra[i] = 'p';
            }

            if (palavraB[i] == 'e')
            {
                palavra[i] = 'o';
            }
            if (palavraB[i] == 'n')
            {
                palavra[i] = 'l';
            }

            if (palavraB[i] == 'i')
            {
                palavra[i] = 'a';
            }
            if (palavraB[i] == 's')
            {
                palavra[i] = 'r';
            }

            if (palavraB[i] == 'p')
            {
                palavra[i] = 't';
            }
            if (palavraB[i] == 'o')
            {
                palavra[i] = 'e';
            }

            if (palavraB[i] == 'l')
            {
                palavra[i] = 'n';
            }
            if (palavraB[i] == 'a')
            {
                palavra[i] = 'i';
            }

            if (palavraB[i] == 'r')
            {
                palavra[i] = 's';
            }
        }
        cout << palavra << endl;
    } while (op != 9);
}