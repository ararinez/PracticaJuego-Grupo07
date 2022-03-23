#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Juego1
{
public:
    int rule(char p, char c)
    {
        if (p == c)
        {
            return 0;
        }

        if (p == 'r' && c == 'p')
        {
            return -1;
        }
        else if (p == 's' && c == 'p')
        {
            return 1;
        }
        else if (p == 'p' && c == 'r')
        {
            return 1;
        }
        else if (p == 's' && c == 'r')
        {
            return -1;
        }
        else if (p == 'r' && c == 's')
        {
            return 1;
        }
        else if (p == 'p' && c == 's')
        {
            return -1;
        }
        return 0;
    }

    void iniciar()
    {
        char computer;
        char player;
        char playmore;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\t\t\t\t";
        cout << "\t BIENVENIDO A PIEDRA, PAPEL Y TIJERA" << endl;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        cout << "\t\t\t\t";
        cout << "\t\t *** IMPORTANTE *** " << endl;
        cout << "\t\t\t\t";
        cout << "\t\t r = Roca" << endl
             << "\t\t\t\t"
             << "\t\t p = Papel" << endl
             << "\t\t\t\t"
             << "\t\t s = Tijeras" << endl
             << "\t\t\t\t" << endl
             << endl;
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++)
        {
            cout << "-";
        }
        cout << endl;
        do
        {
            int number = 0;
            srand(time(0));        // initialized time to 0
            number = rand() % 100; // will choose a number in range 0 - 99
            // r - for rock
            // p - for paper
            // s - for scissors
            if (number < 33)
            {
                computer = 'r';
            }
            else if (number > 66)
            {
                computer = 's';
            }
            else
            {
                computer = 'p';
            }
            // cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
            cout << "\t\t\t\t";
            cout << "Elige tu opcion: ";
            cin >> player;

            int result = rule(player, computer);
            if (player == 'r' || player == 's' || player == 'p')
            {
                if (result == 1)
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligio: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t*** ¡GANASTE! ***" << endl;
                }
                else if (result == -1)
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligió: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t--- PERDISTE, NO TE DESANIMES---" << endl;
                }
                else
                {
                    cout << "\t\t\t\t";
                    cout << "El rival eligio: " << computer << endl;
                    cout << "\t\t\t\t\n";
                    cout << "\t\t\t\t\t///  ES UN EMPATE ///" << endl;
                }
            }
            else
            {
                cout << "\t\t\t\t";
                cout << "INGRESASTE UN CARACTER NO PERMITIDO" << endl;
                cout << "\t\t\t\t\n";
            }
            cout << "\n\t\t\t\t";
            cout << "¿QUIERES JUGAR DE NUEVO?" << endl;
            cout << "\t\t\t\t";
            cout << "Presiona 'n' para salir" << endl;
            cout << "\t\t\t\tPresiona cualquier tecla + Enter para jugar de nuevo: ";
            cin >> playmore;
            cout << "\t\t\t\t";
            for (int i = 0; i < 50; i++)
            {
                cout << "-";
            }
            cout << endl;
        } while (playmore != 'n');
    }
};

void menu()
{
    int opcion = -1;
    Juego1 play1;
    while (opcion != 0)
    {

        cout << "Menu\n";
        cout << "1. Piedra papel o tijera\n";
        cout << "0. Salir\n";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            play1.iniciar();
            break;

        case 0:
            exit(0);
            break;
        default:
            break;
        }
    }
}

int main()
{
    menu();
    return 0;
}
