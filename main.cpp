#include "Evaluador.h"
#include <iostream>
using namespace std;

//Este trabajo se realizo entre Maynor Morales y Kevin Lanza

//Desrefencia ptr (dado) y devuelve su valor
int obtenerValor(int *ptr)
{
    return *ptr;//Devuelve  el valor del apuntador ptr.
}

//Desreferencia a (dado) y b (dado) y devuelve la suma de ambos
int sumar(int* a, int* b)
{
    return *a + *b;//Devuelve el resultado de la suma de los 2 apuntadores
}

//Devuelve true si a (dado) y b (dado) apuntan al mismo espacio de memoria
bool compararApuntadores(string *a, string *b)
{
    if(a == b)//Se hace un if para comparar los apuntadores
    return true;//Devuelve si es verdadero
    else
    return false;//DEvuelve si es falso
}

//Desrefencia a (dado) y b (dado), devuelve true si ambos valores son iguales de lo contrario devuelve false
bool comparar(string *a, string *b)
{
    if(*a == *b)//Se hace un if para comparar los apuntadores
    return true;//Devuelve si es verdadero
    else
    return false;//Devuelve si es falso
}

//Desreferencia a (dado) y devuelve su primera letra
char getPrimeraLetra(string* a)
{
    char obtener = a->at(0);//Se hace una variable char y mediante una funcion se obtiene el primer elemento de la palabra
    return obtener;//Devuelve el valor de la variable hecha
}

//Desreferencia a (dado) y devuelve true si es palindroma de lo contrario devuelve false
//Definicion de palindromo: http://es.wikipedia.org/wiki/Pal%C3%ADndromo
//Ejemplos de palindromos: Ana, arenera, arepera, anilina, ananá, Malayalam, Neuquén, Oruro, oso, radar, reconocer, rotor, salas, seres, somos, sometemos
bool esPalindromo(string* a)
{
    return false;
}

//Desreferencia base (dado) y exponente (dado) y devuelve la base elevado al exponente
int getExponente(int* base, int* exponente)
{
    int resultado = 0;//Se hace una variable int para escribir el resultado
    int num;//Se hace una variable int para contener un numero
    num = *base;//Se hace una igualacion de la variable hecha con el apuntador
    for (int i =1; i<(*exponente); i++)//Se hace un ciclo for para establecer un contador
    {
        resultado = (num)*= (*base);//Se evalua a lo que va ser igual el resultado
    }
    return resultado;//Devuelve el resultado


}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
