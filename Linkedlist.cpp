#include "Linkedlist.hpp"
#include "Node.hpp"
#include <string>
#include <iostream>

using namespace std;

Linkedlist::Linkedlist(){
    head=NULL;
}
Linkedlist::~Linkedlist(){
   
}
void Linkedlist::addtoList(long in_key, string in_value){ 
  Node* caller = new Node(in_key, in_value, NULL);
    Node* current; 
    
    if (head == NULL || (head)->get_key() > caller->get_key()) {
        caller->set_next(head);
        head = caller;
        cout<<"success"<<endl;
        return; 
    } 
    else { 
        current = head; 
        if(caller->get_key() == current->get_key()){
          cout<<"failure"<<endl; 
          return;
        }
        while (current->get_next() != NULL && current->get_next()->get_key() < caller->get_key()) {
           if(caller->get_key() == current->get_key()){
            cout<<"failure"<<endl;
            return;
           }
               current = current->get_next();
        } 
        
        caller->set_next(current->get_next());
        current->set_next(caller);
       cout<<"success"<<endl;
    } 
} 

Node* Linkedlist::get_head(){
    return head; 

}

void Linkedlist::removefromList(long in_key){

    Node* curr= head;
    Node* temp= head;

    while(curr->get_next() !=NULL && curr->get_key() != in_key){
        temp = curr;
      curr=curr->get_next();
    }
    if(curr->get_key()!= in_key){
      cout<<"failure"<<endl;
      return;
    }
    if(curr->get_next()== NULL){
      head=NULL;
     
        cout<<"success"<<endl;
    }
  else{
    Node* delptr = curr;
    curr = curr->get_next();
      temp->set_next(curr);
      if(delptr==head){
          head=head->get_next();
          temp = NULL;
          cout<<"success"<<endl;
          
      }
 }

}
void Linkedlist::searchlist(long in_key, int index){
    Node* curr= head;
    if (curr!= NULL){
        while (curr != NULL){
          if(curr->get_key() == in_key){
            cout<<"found "<<curr->get_value()<<" in "<<index<<endl;
            return;
          }
        curr = curr -> get_next();
        } 
    }
  cout<<"not found"<<endl;
}

void Linkedlist::printL(){
   Node* temp = head;
   if(temp == NULL){
     return;
   }
   while (temp != NULL){
    cout<<temp->get_key() <<" ";
      temp = temp->get_next();
    }
    cout<<endl;
}
