
#include<iostream>
using namespace std;

void mostrarinstrucciones()
{
   cout<<"En Mastermind compiten 2 jugadores, el jugador que introduce el codigo y el jugador que lo intenta acertar. El jugador que hace el codigo coloca en secreto su combinacion compuesta por 4 numeros. El usuario para acertar la combinacion puede usar 4 numeros (del 1 al 4) que se pueden repetir, ademas saltara un aviso si alguno de los numeros introducidos no corresponde al abanico de numeros mencionado anteriormente. La persona que tiene que descifrar el codigo lo colocara a la espera de que el otro jugador le empiece a dar pistas. Para que el juego no sea imposible se le iran dando pistas: si el hueco en el que el usuario ha anadido el numero coincide en numero y posicion se le avisara y por cada numero acertado pero en un lugar equivocado de la secuencia tambien. El usuario tiene diez intentos para acertar el codigo y en el momento que gane saltara un mensaje diciendo ENHORABUENA HAS ACERTADO EL CODIGO! sino le saltara un mensaje diciendo LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO, INTENTA OTRA VEZ!"<<endl;
}

void jugada()
{
system("cls");
int i;
int datos[4];
for (i=0; i<5; i++)
{
cout<<"Estas en el intento "<<(i+1)<<" por favor introduce cuatro numero del 1 al 4"<<endl;
cout<<"Primer digito del codigo"<<endl;
cin>>datos[0];
cout<<"Segundo digito del codigo"<<endl;
cin>>datos[1];
cout<<"Tercer digito del codigo"<<endl;
cin>>datos[2];
cout<<"Cuarto digito del codigo"<<endl;
cin>>datos[3];

if (datos[0]<1||datos[0]>4)
{
    cout<<"Has anadido un numero que no debes anadir, ten cuidado"<<endl;
cout<<endl<<endl;
}
if (datos[1]<1||datos[1]>4)
{
cout<<"Has anadido un numero que no debes anadir, ten cuidado"<<endl;
cout<<endl<<endl;
}
if (datos[2]<1||datos[2]>4)
{
cout<<"Has anadido un numero que no debes anadir, ten cuidado"<<endl;
cout<<endl<<endl;
}
if (datos[3]<1||datos[3]>4)
{
cout<<"Has anadido un numero que no debes anadir, ten cuidado"<<endl;
cout<<endl<<endl;
}

cout<< "Tu numero es el ------>"<< datos[0]<<datos[1]<<datos[2]<<datos[3]<<"<-----------"<<endl;
int correcto=0;
int aproximacion=0;

if (datos[0]==1)
{
    correcto++;
}
if (datos[1]==2)
{
    correcto++;
}
if (datos[2]==4)
{
    correcto++;
}
if (datos[3]==4)
{
    correcto++;
}
//Condicion
if(datos[0]==2||datos[0]==4)
{
    aproximacion++;
}
if(datos[1]==1||datos[1]==4)
{
    aproximacion++;
}
if(datos[2]==2||datos[2]==1)
{
    aproximacion++;
}
if(datos[3]==2||datos[3]==1)
{
    aproximacion++;
}

cout<<"Haz acertado "<<correcto<<" numeros en la posicion correcta"<<endl;
cout<<"    "<<endl;
cout<<"Haz acertado "<<aproximacion<<" numeros pero no en la posicion correcta"<<endl;

if(datos[0]==1&&datos[1]==2&&datos[2]==4&&datos[3]==4)
{
system("cls");
 cout<<  "ENHORABUENA HAS ACERTADO EL CODIGO!"<<endl;
 exit(0);
}
cout<<endl<<endl;
}
system("cls");
cout<<"LO SIENTO NO HAS CONSEGUIDO ADIVINAR EL CODIGO,INTENTA OTRA VEZ!";
exit(0);
}
void menuinicial()
{
system("cls");
int opcion;
do
{
cout<<"1.- Juego"<<endl;
cout<<"2.- Intrucciones"<<endl;
    cin>> opcion;
    if(opcion==1)
    {
        jugada();
    }
    if(opcion==2)
    {
     mostrarinstrucciones();
    }
        }
    while(opcion!=1||opcion!=2);
}
int main()
{
menuinicial();
    return 0;
}


