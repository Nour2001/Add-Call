#ifndef Node_hpp
#define Node_hpp
#include <string>
using namespace std;

class Node{

public:
    Node();
    Node(long in_key, string in_value);
    Node(long in_key, string in_value, Node* pointer);
    ~Node();
    long get_key();
    void set_key(long in_key);
    string get_value();
    void set_value(string in_value);
    Node* get_next();
    void set_next(Node* pointnext);
private:
    Node* next;
    long key;
    string value;
};

#endif

