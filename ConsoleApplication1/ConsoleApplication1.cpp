#include "ShopProducts.h"
#include "Function_Display_Prod.h"
#include "Cart.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>


using namespace std;
int x;

class Shop {
public:
    string id, username, password;
    int roleType;
public:

    void menu();
    void viewProducts();
    void insertUser();
    void displayClientMenu();
    void displayAdminMenu();
   
};



void Shop::viewProducts() { 

    Products::showProducts();
    menu();
   
}


void Shop::menu() {
    
    ofstream file_menu("Menu.txt");
    int choice;
   
   
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t |   THE SHOP   |" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t 1. View products" << endl;
    cout << "\t\t\t 2. Insert User" << endl;
    cout << "\t\t\t 3. Exit" << endl;

    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\tChoose Option:[1/2/3]" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "Enter Your Choose: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
       viewProducts();
     
    case 2:
        insertUser();
     
        break;
  
    case 3:
        exit(0);
        break;

    default:
        file_menu << "\n\t\t\t Invalid choice...Please Try Again..";
    }
 
    file_menu.close();
}

void actionsClient();
void actionsAdministrator();

void Shop::insertUser() {


    ofstream file_UserMenu;
    file_UserMenu.open("UserMenu.txt", ios::app | ios::out);
    cout << "\n------------------------------------------------------------------------------------------------------------------------";
    cout << "\n-------------------------------------------------Add User Details------------------------------------------------" << endl;
    cout << "\t\t\tEnter User id: ";
    cin >> id;
    cout << "\t\t\tEnter User username: ";
    cin >> username;
    cout << "\t\t\tEnter User password: ";
    cin >> password;
    cout << "\t\t\tEnter User roleType: ";
    cin >> roleType;
    
    if (roleType == 1){
        displayClientMenu();
    }
    else if (roleType == 2) {
        displayAdminMenu();
    }
    file_UserMenu.close();

}


void Shop::displayClientMenu() {
   // system("cls");
    ofstream file_ClientMenu;
    cout << "\n-------------------------Client Menu-------------------------" << endl;
    file_ClientMenu.open("ClientMenu.txt", ios::app);
    cout << "Client";
    actionsClient();

    displayActualCart();
    menu();
 

    file_ClientMenu.close();
 }
    

void Shop::displayAdminMenu() {
    ofstream file_AdminMenu;
    cout << "\n-------------------------Administrator Menu-------------------------" << endl;
    file_AdminMenu.open("AdminMenu.txt", ios::app);
    cout << "ADmin";
    actionsAdministrator();
    menu();

    file_AdminMenu.close();
}


    int main() {
    Shop project;
    project.menu();
   
    
    return 0;
}

