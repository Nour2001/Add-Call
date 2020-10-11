#include "Node.hpp"
#include <string>
#include <iostream>
using namespace std;

Node::Node(){
    key = 0;
    value = "";
    next= nullptr;
}
Node::Node(long in_key, string in_value){
    key = in_key;
    value = in_value;
    next= nullptr;

}
Node::Node(long in_key, string in_value, Node* pointer){
    key = in_key;
    value = in_value;
    next= nullptr;

}

Node::~Node(){
    
}

long Node::get_key(){
    return key;
}
void Node::set_key( long in_key){
    key = in_key;
}
string Node::get_value(){
    return value;
}
void Node::set_value(string in_value){
    value = in_value;
}
Node* Node::get_next(){
    return next;
    
}
void Node::set_next(Node* pointnext){
     next= pointnext;
}
