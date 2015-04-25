#include <iostream>
#include <stdlib.h>
#include "queue.h"

using namespace std;

int main(){
    char choice;
	Queue q(10);
	do{
        q.Doubling();
        while(!q.isFull()) q.enqueue(rand() % 1000);
        cout << "Press Y/y to expand your server." << endl;
        cin >> choice;
    }while(choice == 'Y' || choice == 'y');
}
