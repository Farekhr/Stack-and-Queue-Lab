#include "cmdQueue.h"

#include <iostream>
using namespace std;

// Available Data Members from objPosStack.h (Must Review)
//
//      DLinkedList<char>* myQueue
//      
//  This is the character-type template Doubly Linked List class to support
//   all the character command Queue operations
//
//  You should also review the DLinkedList<> template class (identical to the lecture examples)


cmdQueue::cmdQueue()
{
    // Constructor
    //  Instantiate myQueue as DLinkedList<char> type to support the queue implementations

    myQueue = new DLinkedList<char>;
}

cmdQueue::~cmdQueue()
{
    // Destructor 
    //  Destroy myQueue on the heap (and also for all other heap members, if any)

    delete myQueue;
}

void cmdQueue::enqueue(char thisCmd)
{
    // Enqueue thisCmd into the Queue
    //  Think about what underlying DLinkedList method can support this operation

    myQueue->addLast(thisCmd);
}

char cmdQueue::dequeue()
{
    // Dequeue the oldest character command from the queue and return
    // If no more commands to dequeue, return NULL character ('\0')
    //  Think about what underlying DLinkedList method can support this operation  

    if(myQueue->getSize() == 0)
    {
        return '\0';
    }
    
    else
    {
        myQueue->removeFirst();  
    }
    
}

int cmdQueue::getSize()
{
    // Return the size of the Queue
    //  Think about what underlying DLinkedList method can support this operation

    return myQueue->getSize();
}

void cmdQueue::clearQueue()
{
    // Clear all tbe elements in the queue
    //  Think about what underlying DLinkedList method can support this operation

    myQueue->makeEmpty();
}

void cmdQueue::printMe()
{
    // NOT GRADED
    //  Print the contents of the Queue
    //  Think about which DLinkedList method can partially realize this operation.

    // IMPORTANT: USE THIS METHOD FOR DEBUGGING!!!

    myQueue->printList();
}