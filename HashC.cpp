#include "HashC.hpp"
#include "Linkedlist.hpp"
#include "Node.hpp"
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

HashC::HashC(){
    m=0;
    hashT.resize(0);
}
HashC::HashC(long in_size){
    m = in_size;
    hashT.resize(m);
    
}

HashC::~HashC(){
    
}
void HashC::ins_val(long in_key, string ID){
    Node caller;
    caller.set_key(in_key);
    caller.set_value(ID);
    int h1=0;
    h1 = caller.get_key() % m;
    hashT[h1].addtoList(caller.get_key(),caller.get_value());
    

}

void HashC::del_val(long in_key){
    Node caller;
    caller.set_key(in_key);
    int h1=0;
    h1 = caller.get_key() % m;
   hashT[h1].removefromList(in_key);
}

void HashC::search_val(long in_key){
    Node caller;
    caller.set_key(in_key);
    int h1=0;
    h1 = caller.get_key() % m;
    hashT[h1].searchlist(in_key, h1);
   
}

void HashC::print(long index){
   hashT[index].printL();
}



// double check the n
