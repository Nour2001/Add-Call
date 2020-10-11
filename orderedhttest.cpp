#include "HashC.hpp"
#include "Linkedlist.hpp"
#include "Node.hpp"
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

    
    int main() {
    
         HashC table = HashC();
        string cmdline; //entire line
        string command;
          getline(cin, cmdline); //sets cmdline to be the whole line
        long size = 0;   
        long phone_num = 0;    
        char semicolon = '\0';
        long index = 0;
        string ID = "";
       
        while (!cin.eof()) {
                  istringstream iss(cmdline); 
                  iss >> command; //sets comand to be the first string it finds 
            if (command == "exit") {
                break;
            }
            else if (command == "n") {
                iss >> size;
                table = HashC(size);
                cout << "success" << endl;
            }else if(command == "i"){
                iss>>phone_num>>semicolon;
                getline(iss,ID); //iss removes whatever is before ID and gets the rest aka the name of the caller 
                table.ins_val(phone_num, ID);
            }else if (command == "s" ){
                iss>>phone_num;
                table.search_val(phone_num);
            }else if(command == "d"){
                iss>>phone_num;
                table.del_val(phone_num);
            }else if(command =="p"){
                iss>>index;
                table.print(index);
            }
         getline(cin, cmdline);
        }
        
        return 0;
        
    }
   
