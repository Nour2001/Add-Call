#ifndef Linkedlist_hpp
#define Linkedlist_hpp

#include <stdio.h>
#include "Node.hpp"
#include <string>


class Linkedlist{

public:
    Linkedlist();
    ~Linkedlist();
    void addtoList(long in_key, string in_value);
    void removefromList(long in_key);
    void searchlist(long in_key, int index);
    Node* get_head();
    void printL();
private:
    Node* head;
};

#endif
