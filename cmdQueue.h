#ifndef CMDQUEUE_H
#define CMDQUEUE_H

#include "DLinkedList.h"

// use template doubly linked list from lecture, make it type char

// each player object needs one cmd queue
// place it in either GameMechs or Player class, 
// so to allow simultaneous control


class cmdQueue
{
    private:
        DLinkedList<char> *myQueue;

    public:
        cmdQueue();
        ~cmdQueue();

        void enqueue(char thisCmd);
        char dequeue();
        int getSize();
        void clearQueue();

        void printMe();
};

#endif