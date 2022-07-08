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
    void displayUser();
    
 
    void modifyUser();
    void searchUser();
    void deleteUser();

    void displayProducts();
    void displayCPU();
    void displayGPU();
    void displayAPU();
    
};

void Shop::menu() {
menustart:
    int choice;
   
    system("cls");
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t |   THE SHOP   |" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\t 1. View products" << endl;
    cout << "\t\t\t 2. Insert User" << endl;
    cout << "\t\t\t 3. Display User" << endl;
    cout << "\t\t\t 4. Modify User" << endl;
    cout << "\t\t\t 5. Search User" << endl;
    cout << "\t\t\t 6. Delete User" << endl;
    cout << "\t\t\t 7. Exit" << endl;

    cout << "\t\t\t-------------------------------" << endl;
    cout << "\t\t\tChoose Option:[1/2/3/4/5/6/7]" << endl;
    cout << "\t\t\t-------------------------------" << endl;
    cout << "Enter Your Choose: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
       // viewProducts();
       ///* do
       // {
       //     viewProducts();
       //     cout << "\n\t\t\t Add another participant(Y,N): ";
       //     cin >> x;
       // } while (x == 'y' || x == 'Y');*/
       // break;
    case 2:
        insertUser();
      /*  if (roleType == 1)
        {
            displayUserClient();
        }
        else if (roleType == 2)
        {
            displayUserAdmin();
        }*/
        break;
  
    case 3:
        modifyUser();
        break;
    case 4:
        searchUser();
        break;
    case 5:
        deleteUser();
    case 6:
        exit(0);
        break;

    default:
        cout << "\n\t\t\t Invalid choice...Please Try Again..";
    }
    //getch();
    goto menustart;
}

void actionsClient();
void actionsAdministrator();

void Shop::insertUser() {

    system("cls");
    fstream file;
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
    file.open("UserMenu.txt", ios::app | ios::out);
    file << std::left << std::setw(15) << id << std::left << std::setw(15) << username << std::left << std::setw(15) << password  << std::left << std::setw(15) << roleType << "\n";
   
    file.close();

}

void Shop::viewProducts() {
   
    displayProducts;
    displayCPU();
    displayGPU();
    displayAPU();
}





void Shop::displayUser() {
    system("cls");
    if (roleType==1)
    { 
    fstream file;
    int total = 0;
    cout << "\n-------------------------Client Menu-------------------------" << endl;
    file.open("UserMenu.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\tNo Data is Present...";
        file.close();
    }
    else
    {
        file >> id >> username >> password >> roleType;
        while (!file.eof())
        {
            total++;
            cout << "\n\n\t\t\t User id: " << id << endl;
            cout << "\t\t\t Username: " << username << endl;
            cout << "\t\t\t Password: " << password << endl;
            cout << "\t\t\t Role type: " << roleType << endl;
            file >> id >> username >> password >>  roleType;

            actionsClient();

            

        }
        if (total == 0)
        {
            cout << "\n\t\t\tNo Data Is Present...";
        }
    }
    file.close();
    }
    else if (roleType==2)
    {
        fstream file;
        int total = 0;
        cout << "\n-------------------------Administrator Menu-------------------------" << endl;
        file.open("UserMenu.txt", ios::in);
        if (!file)
        {
            cout << "\n\t\t\tNo Data is Present...";
            file.close();
        }
        else
        {
            file >> id >> username >> password >> roleType;
            while (!file.eof())
            {
                total++;
                cout << "\n\n\t\t\t User id: " << id << endl;
                cout << "\t\t\t Username: " << username << endl;
                cout << "\t\t\t Password: " << password << endl;
                cout << "\t\t\t Role type: " << roleType << endl;
                file >> id >> username >> password >> roleType;

                actionsAdministrator();



            }
            if (total == 0)
            {
                cout << "\n\t\t\tNo Data Is Present...";
            }
        }
        file.close();
    }
}

void Shop::modifyUser() {

}

void Shop::searchUser() {

}
void Shop::deleteUser() {

}




    int main() {

    Shop project;
    project.menu();
    
    Products* p =new APU(2,4, "65 Watt", "65");
    APU A_Series_APU(4, 8, "Socket FM2", "1280x960");
    
    Products* cpu1 = new CPU (4, 8, "SOCKET");
    Products* gpu1 = new GPU("1024x728"); 

    displayProducts();
    displayCPU();
    displayGPU();
    displayAPU();
    
        
 
        

    return 0;
}

