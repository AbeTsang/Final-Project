#include <iostream>
#include <stdlib.h>
#include "queue.h"

Queue q(10);

using namespace std;

void menu(){

    cout << "Please choose one of the following:" << endl;
    cout << "1. Start the Server" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Check if it is full" << endl;
    cout << "4. Check if it is empty" << endl;
    cout << "5. Check the amount of people" << endl;
    cout << "6. Check certain person in the server" << endl;
    cout << "7. Deliver message" << endl;
    cout << "8. Expand the Server" << endl;
    cout << "Type anything else to quit" << endl;



}

void choose(int choice){

    int arrsize;

    if(choice == 1) while(!q.isFull()) q.enqueue(rand() % 1000);
    else if(choice == 2) q.dequeue();
    else if(choice == 3) q.isFull();
    else if(choice == 4) q.isEmpty();
    else if(choice == 5) q.queuesize();
    else if(choice == 6) {cout << "Number: "; cin >> arrsize; q.who(arrsize);}
    else if(choice == 7) q.message();
    else if(choice == 8) q.Doubling();

}

int main(){
    int choice;

    cout << "Welcome to the Server!!!" << endl;
	do{
        //q.Doubling();
        //while(!q.isFull()) q.enqueue(rand() % 1000);
        menu();
        cin >> choice;
        choose(choice);

    }while(choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8);
}
