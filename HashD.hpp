#ifndef HashD_hpp
#define HashD_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Node.hpp"

using namespace std;
class HashD{
public:
    HashD();
    HashD(long in_size);
    ~HashD();
    void ins_val(long in_key, string ID);
    void del_val(long in_key);
    void search_val(long in_key);
private:
    long m;
    vector <Node> hashT;
};

#endif
