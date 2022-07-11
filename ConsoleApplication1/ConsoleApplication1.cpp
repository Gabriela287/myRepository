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
    void viewProducts();
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

void Shop::viewProducts() { //TREBUIE SA INCERC SA ELIMIN VOEW PRODUCTS DIN MENIUL DE BAZA ASA INCAT CAND ACCESEZ sa nu mai trebuisca sa scriu id

    Products::showProducts();
    /*displayProducts();
    displayCPU();
    displayGPU();
    displayAPU();*/
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
    //getch();
    //goto menustart;
    file_menu.close();
}

//void actionsClient();
//void actionsAdministrator();

void Shop::insertUser() {

    system("cls");
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


    file_UserMenu << std::left << std::setw(15) << id << std::left << std::setw(15) << username << std::left << std::setw(15) << password  << std::left << std::setw(15) << roleType << "\n";
   
    file_UserMenu.close();

}







void Shop::displayClientMenu() {
    system("cls");
    
    ofstream file_ClientMenu;
    //int total = 0;
    cout << "\n-------------------------Client Menu-------------------------" << endl;
    file_ClientMenu.open("ClientMenu.txt", ios::app);
    cout << "Client";
    //if (!file_ClientMenu)
    //{
    //    cout << "\n\t\t\tNo Data is Present...";
    //    file_ClientMenu.close();
    //}
    //else
    //{
    //    file_ClientMenu >> id >> username >> password >> roleType;
    //    while (!file_ClientMenu.eof())
    //    {
    //        total++;
    //        cout << "\n\n\t\t\t User id: " << id << endl;
    //        cout << "\t\t\t Username: " << username << endl;
    //        cout << "\t\t\t Password: " << password << endl;
    //        cout << "\t\t\t Role type: " << roleType << endl;
    //        file_ClientMenu >> id >> username >> password >>  roleType;

    //        

    //        

    //    }
    //    if (total == 0)
    //    {
    //        cout << "\n\t\t\tNo Data Is Present...";
    //    }
    //actionsClient();

    
    file_ClientMenu.close();
 }
    


void Shop::displayAdminMenu() {
    ofstream file_AdminMenu;
    // int total = 0;
    cout << "\n-------------------------Administrator Menu-------------------------" << endl;
    file_AdminMenu.open("AdminMenu.txt", ios::app);
    cout << "ADmin";
    //if (!file_AdminMenu)
    //{
    //    cout << "\n\t\t\tNo Data is Present...";
    //    file_AdminMenu.close();
    //}
    //else
    //{
    //    file_AdminMenu >> id >> username >> password >> roleType;
    //    while (!file_AdminMenu.eof())
    //    {
    //        total++;
    //        cout << "\n\n\t\t\t User id: " << id << endl;
    //        cout << "\t\t\t Username: " << username << endl;
    //        cout << "\t\t\t Password: " << password << endl;
    //        cout << "\t\t\t Role type: " << roleType << endl;
    //        file_AdminMenu >> id >> username >> password >> roleType;

    //        //actionsAdministrator();



    //    }
    //    if (total == 0)
    //    {
    //        cout << "\n\t\t\tNo Data Is Present...";
    //    }
    //}
    file_AdminMenu.close();
}

void Shop::modifyUser() {
    cout << "Modify user";
}






    int main() {

    Shop project;
    project.menu();
    
 /*   Products* p =new APU(2,4, "65 Watt", "65");
    APU A_Series_APU(4, 8, "Socket FM2", "1280x960");
    
    Products* cpu1 = new CPU (4, 8, "SOCKET");
    Products* gpu1 = new GPU("1024x728"); */

    //displayProducts();
   /* displayCPU();
    displayGPU();
    displayAPU();*/
    
    Products produse;
    //produse.showProducts();
        

 
        

    return 0;
}

