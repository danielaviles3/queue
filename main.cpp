//Daniel Aviles Gerena
//NUM ESTUDIANTE: 801-24-5453
#include <iostream>
using namespace std;

#include "queue.h"

int main() {
    
    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    


    return 0;
}