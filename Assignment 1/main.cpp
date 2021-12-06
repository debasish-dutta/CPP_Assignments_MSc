#include<iostream>
#include <bits/stdc++.h>
#include "include\constructors.h"
#include "include\friend.h"
#include "include\inheritance.h"
#include "include\polymorphism.h"
#include "include\virtual_base_class.h"
#include "include\virtual_functions.h"
#include "include\pure_virtual_function.h"
#include "include\templates.h"

using namespace std;

void menu();
int Constructors();
int FriendClass();
int FriendFunction();
int Types_of_Inheritance();
int VirtualFunction();
int PureVirtualFunction();
int Polymorphism();
int VirtualBaseClass();
int Templates();

int choice = 0;


void menu(){
        do {
        cout << endl << "----------------------------";
        cout << endl << "         Main Menu   " << endl;
        cout << "----------------------------" << endl;
        cout << "\033[1;31mEnter selection, 0 to quit: \033[0m\n" << endl;
        cout << "1. Constructors" << endl;
        cout << "2. Friend Class" << endl;
        cout << "3. Friend Function" << endl;
        cout << "4. Templates" << endl;
        cout << "5. Inheritance" << endl;
        cout << "6. Virtual Function" << endl;
        cout << "7. Pure Virtual Function" << endl;
        cout << "8. Polymorphism" << endl;
        cout << "9. Virtual Base Class" << endl;
        cout << "\n" << endl;
        cout << "Please choose: ";
        
        cin >> choice;

        switch(choice) {
        case 1:
            Constructors();
            break;
        case 2:
            FriendClass();
            break;
        case 3:
            FriendFunction();
            break;
        case 4:
            Templates();
            break;
        case 5:
            Types_of_Inheritance();
            break;
        case 6:
            VirtualFunction();
            break;
        case 7:
            PureVirtualFunction();
            break;
        case 8:
            Polymorphism();
            break;
        case 9:
            VirtualBaseClass();
            break;
        case 0:
            exit(1);
        default:
            cout << "Invalid choice, please try again." << endl;
            break;
       }//End switch
    } while(choice > 10 || choice < 0) ;
    system("PAUSE");
}


int main(int argc, char** argv) 
{
    menu();
    return 0;
}