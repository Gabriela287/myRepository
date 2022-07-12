#include "ShopProducts.h"
#include "Function_Display_Prod.h"
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
  
    void insertUser();
    //void displayUser();
    void modifyUser();
    void displayClientMenu();
    void displayAdminMenu();
   

   // void displayProducts();
   // void displayCPU();
   // void displayGPU();
   // void displayAPU();
    
};



void viewProducts() { //TREBUIE SA INCERC SA ELIMIN VOEW PRODUCTS DIN MENIUL DE BAZA ASA INCAT CAND ACCESEZ sa nu mai trebuisca sa scriu id

    Products::showProducts();
   
}

void Shop::menu() {
    ofstream file_menu("Menu.txt");
    int choice;
   
    system("cls");
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t |   THE SHOP   |" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t 1. View products" << endl;
    cout << "\t\t\t 2. Insert User" << endl;
    cout << "\t\t\t 3. Display User" << endl;
    cout << "\t\t\t 4. Modify User" << endl;
    cout << "\t\t\t 5. Exit" << endl;

    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\tChoose Option:[1/2/3/4/5]" << endl;
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
        modifyUser();
        break;
    case 4:
        exit(0);
        break;

    default:
        file_menu << "\n\t\t\t Invalid choice...Please Try Again..";
    }
 
    file_menu.close();
}

//void actionsClient();
//void actionsAdministrator();

void Shop::insertUser() {

   // system("cls");
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


   /* file_UserMenu << std::left << std::setw(15) << id << std::left << std::setw(15) << username << std::left << std::setw(15) << password  << std::left << std::setw(15) << roleType << "\n";*/
   
    file_UserMenu.close();

}







void Shop::displayClientMenu() {
    system("cls");
    
    ofstream file_ClientMenu;
    //int total = 0;
    cout << "\n-------------------------Client Menu-------------------------" << endl;
    file_ClientMenu.open("ClientMenu.txt", ios::app);
    cout << "Client";
  
    
    file_ClientMenu.close();
 }
    


void Shop::displayAdminMenu() {
    ofstream file_AdminMenu;
    // int total = 0;
    cout << "\n-------------------------Administrator Menu-------------------------" << endl;
    file_AdminMenu.open("AdminMenu.txt", ios::app);
    cout << "ADmin";
   
    file_AdminMenu.close();
}

void Shop::modifyUser() {
    cout << "Modify user";
}






    int main() {

    Shop project;
    project.menu();
    
    void viewProducts();
    
  
   
        

 
        

    return 0;
}

