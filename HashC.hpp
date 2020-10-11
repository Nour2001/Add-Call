#ifndef HashC_hpp
#define HashC_hpp

#include "Node.hpp"
#include "Linkedlist.hpp"
#include <string>
#include <vector>
#include <stdio.h>

class HashC{
public:
public:
    HashC();
    HashC(long in_size);
    ~HashC();
    void ins_val(long in_key, string ID);
    void del_val(long in_key);
    void search_val(long in_key);
    void print(long index);
    
private:
    long m;
    vector <Linkedlist> hashT;
};
#endif 
