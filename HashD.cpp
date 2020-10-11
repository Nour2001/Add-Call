#include "HashD.hpp"
#include "Node.hpp"
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

HashD::HashD(){
    m = 0;
    hashT.resize(0);
}
HashD::HashD(long in_size){
    m = in_size;
    hashT.resize(m);
}

HashD::~HashD(){

}

void HashD::ins_val(long in_key, string ID){
    long h=0, h1=0, h2=0, newh=0, counter=0;
    bool test= false;
    Node caller;
    
    caller.set_key(in_key);
    caller.set_value(ID);
  
    h1 = caller.get_key() % m;
    
    if (hashT[h1].get_value() ==  ""){
        hashT[h1].set_value(caller.get_value());
        hashT[h1].set_key(caller.get_key());
        cout<<"success"<<endl;
    }else {
        while(test==false){
            test = false;
            counter++;
            h2 = (long)floor(caller.get_key()/m) % m;
            h = (h1 + counter * h2) % m;
            if (h%2 !=0){
                newh = h+1;
            }else{
                newh=h;

            }
            if(hashT[newh].get_value() ==  ""){
                hashT[newh].set_value(caller.get_value());
                hashT[newh].set_key(caller.get_key());
                test = true;
                cout<<"success"<<endl;
            }else{
                cout<<"no avalible space"<<endl;
            }
            
        }
    }
}

void HashD::search_val(long in_key){
    long h=0, h1=0, h2=0, newh=0, counter=0;
    bool test= false;
    Node caller;
    caller.set_key(in_key);
    
    h1 = caller.get_key() % m;
    
    if (hashT[h1].get_key() ==  0){
        cout<<"not found"<<endl;
    }else{
        
        if(hashT[h1].get_key() ==  in_key){
            cout<<"found "<<hashT[h1].get_value() <<" in "<<h1<<endl;
        }else{
            while(test==false){
                test = false;
                counter++;
                h2 = (long)floor(caller.get_key()/m) % m;
                h = (h1 + counter * h2) % m;
                if (h%2 !=0){
                    newh = h+1;
                }else{
                    newh=h;
                }
                if(hashT[newh].get_key() ==  in_key){
                   cout<<"found "<<hashT[h1].get_value() <<" in "<<newh<<endl;
                    test = true;
                }else{
                }
            }
        }
    }
}

void HashD::del_val(long in_key){
    long h=0, h1=0, h2=0, newh=0, counter=0;
    bool test= false;
    Node caller;
    caller.set_key(in_key);
    
    h1 = caller.get_key() % m;
    
    if (hashT[h1].get_key() ==  0){
        cout<<"not found"<<endl;
    }else{
        
        if(hashT[h1].get_key() ==  in_key){
            hashT[h1].set_key(0);
            hashT[h1].set_value("");
            cout<< "success"<<endl;
        }else{
            while(test==false){
                test = false;
                counter++;
                h2 = (long)floor(caller.get_key()/m) % m;
                h = (h1 + counter * h2) % m;
                if (h%2 !=0){
                    newh = h+1;
                }else{
                    newh=h;
                }
                if(hashT[newh].get_key() ==  in_key){
                    hashT[newh].set_key(0);
                    hashT[newh].set_value("");
                    cout<< "success"<<endl;
                    test = true;
                }else{
                }
            }
        }
    }
    
}

