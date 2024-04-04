#ifndef OBJPOSSTACK_H
#define OBJPOSSTACK_H

#include "objPos.h"
#include "objPosList.h"

class objPos;

class objPosStack  // use Composition
{
    private:
        objPosList* myList;  // objPosDLinkedList

        void generateObjects(int count);
        void sortByTenScoreBS();  

    public:
        objPosStack();
        ~objPosStack();

        void populateRandomElements(int size);

        void push(const objPos &thisPos) const;
        objPos pop();
        objPos top();
        int size();        

        void printMe();
};

#endif