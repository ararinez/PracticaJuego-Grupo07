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

class Juego2
{
public:
    void instrucciones()
    {
        cout << "En Mastermind compiten 2 jugadores, el jugador que introduce el codigo y el jugador que lo intenta acertar. El jugador que hace el codigo coloca en secreto su combinacion compuesta por 4 numeros. El usuario para acertar la combinacion puede usar 4 numeros (del 1 al 4) que se pueden repetir, ademas saltara un aviso si alguno de los numeros introducidos no corresponde al abanico de numeros mencionado anteriormente. La persona que tiene que descifrar el codigo lo colocara a la espera de que el otro jugador le empiece a dar pistas. Para que el juego no sea imposible se le iran dando pistas: si el hueco en el que el usuario ha anadido el numero coincide en numero y posicion se le avisara y por cada numero acertado pero en un lugar equivocado de la secuencia tambien. El usuario tiene diez intentos para acertar el codigo y en el momento que gane saltara un mensaje diciendo ENHORABUENA HAS ACERTADO EL CODIGO! sino le saltara un mensaje diciendo LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO, INTENTA OTRA VEZ!" << endl;
    }

    void iniciar()
    {
        system("cls");
        int i;
        int datos[4];
        for (i = 0; i < 5; i++)
        {
            cout << "Estas en el intento " << (i + 1) << " por favor introduce cuatro numero del 1 al 4" << endl;
            cout << "Primer digito del codigo" << endl;
            cin >> datos[0];
            cout << "Segundo digito del codigo" << endl;
            cin >> datos[1];
            cout << "Tercer digito del codigo" << endl;
            cin >> datos[2];
            cout << "Cuarto digito del codigo" << endl;
            cin >> datos[3];

            if (datos[0] < 1 || datos[0] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[1] < 1 || datos[1] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[2] < 1 || datos[2] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }
            if (datos[3] < 1 || datos[3] > 4)
            {
                cout << "Has anadido un numero que no debes anadir, ten cuidado" << endl;
                cout << endl
                     << endl;
            }

            cout << "Tu numero es el ------>" << datos[0] << datos[1] << datos[2] << datos[3] << "<-----------" << endl;
            int correcto = 0;
            int aproximacion = 0;

            if (datos[0] == 1)
            {
                correcto++;
            }
            if (datos[1] == 2)
            {
                correcto++;
            }
            if (datos[2] == 4)
            {
                correcto++;
            }
            if (datos[3] == 4)
            {
                correcto++;
            }
            // Condicion
            if (datos[0] == 2 || datos[0] == 4)
            {
                aproximacion++;
            }
            if (datos[1] == 1 || datos[1] == 4)
            {
                aproximacion++;
            }
            if (datos[2] == 2 || datos[2] == 1)
            {
                aproximacion++;
            }
            if (datos[3] == 2 || datos[3] == 1)
            {
                aproximacion++;
            }

            cout << "Haz acertado " << correcto << " numeros en la posicion correcta" << endl;
            cout << "    " << endl;
            cout << "Haz acertado " << aproximacion << " numeros pero no en la posicion correcta" << endl;

            if (datos[0] == 1 && datos[1] == 2 && datos[2] == 4 && datos[3] == 4)
            {
                system("cls");
                cout << "ENHORABUENA HAS ACERTADO EL CODIGO!" << endl;
                exit(0);
            }
            cout << endl
                 << endl;
        }

        cout << "LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO,INTENTA OTRA VEZ!";
        }
};
void menu()
{
    int opcion = -1;
    Juego1 play1;
    Juego2 play2;
    while (opcion != 0)
    {

        cout << "\n\nMenu\n";
        cout << "1. Piedra papel o tijera\n";
        cout << "2. Mastermind\n";
        cout << "0. Salir\n";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            play1.iniciar();
            break;
        case 2:
            play2.instrucciones();
            play2.iniciar();
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
