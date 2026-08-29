//queue.h - clase de un queue que tienes las funciones enqueue y dequeue
//Daniel Aviles Gerena
//NUM ESTUDIANTE: 801-24-5453

#include <iostream>
using namespace std;

//tamano maximo del Queue
#define MAX_QUEUE 100
class queue{
    
    //Aqui definimos el arreglo y n es el indice del proximo elemento
    private:
        int arr[MAX_QUEUE]; //Aqui definimos el arreglo
        int n; //n es el indice del proximo elemento
    public:
        queue() //Definimos un constructor vacio
        {
            n = 0;
        }
    void enqueue(int x)// Anade x al final de la cola
    {
        arr[n++] = x;
    }
    
    int dequeue() //Devuelve y borra el primer valor de la cola 
    { 
        if (n > 0) {
            int x = arr[0];
            //Para poder borrar el primer valor tenemos que empujar todos los valores -1 espacio
            for (int i = 1; i < n; i++) 
            {
                arr[i - 1] = arr[i];
            }
            n--;
            return x;
        }
        else {
            throw runtime_error("exception"); //Si esta vacio devuelve "exception"
        }
    }
};