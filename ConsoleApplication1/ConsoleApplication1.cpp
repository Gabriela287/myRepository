#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

class Shop {
public:

    void menu();
    void viewProducts();
    void insertUser();
    void displayUser();
    void modifyUser();
    void searchUser();
    void deleteUser();
    
};

void Shop::menu() {
menustart:
    int choice;
    char x;
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
        viewProducts();
       /* do
        {
            viewProducts();
            cout << "\n\t\t\t Add another participant(Y,N): ";
            cin >> x;
        } while (x == 'y' || x == 'Y');*/
        break;
    case 2:
        insertUser();
        break;
    case 3:
        displayUser();
        break;
    case 4:
        modifyUser();
        break;
    case 5:
        searchUser();
        break;
    case 6:
        deleteUser();
    case 7:
        exit(0);
        break;

    default:
        cout << "\n\t\t\t Invalid choice...Please Try Again..";
    }
    //getch();
    goto menustart;
}




    //int chooseProducts;
    ////char x;
    //system("cls");
    //cout << "\t\t\t-------------------------------" << endl;
    //cout << "\t\t\t |   PRODUCTS   |" << endl;
    //cout << "\t\t\t-------------------------------" << endl;
    //cout << "\t\t\t 1. View products" << endl;
    //cout << "\t\t\t 2. Insert User" << endl;
    //cout << "\t\t\t 3. Display User" << endl;
    //cout << "\t\t\t 4. Modify User" << endl;
    //cout << "\t\t\t 5. Search User" << endl;
    //cout << "\t\t\t 6. Delete User" << endl;
    //cout << "\t\t\t 7. Exit" << endl;

    //cout << "\t\t\t-------------------------------" << endl;
    //cout << "\t\t\tChoose Option:[1/2/3/4/5/6/7]" << endl;
    //cout << "\t\t\t-------------------------------" << endl;
    //cout << "Enter Your Choose: ";
    //cin >> chooseProducts;

    class Products {
    public:
        double weight;
        double height;
        string TDP;
        double nms;
        string memory;
        double clk_frequency;
        Products(double w, double h, string tdp, double nm, string mem, double clk_fr) {
            weight = w;
            height = h;
            TDP = tdp;
            nms = nm;
            memory = mem;
            clk_frequency = clk_fr;
        }
       /* void viewProducts() {
            Products
        }*/
    };



    class CPU :public virtual Products {
    public:
        int noOfCores;
        int noOfThreads;
        string socket;
        CPU(int cores, int threads, string soc) {
           
            noOfCores = cores;
            noOfThreads = threads;
            socket = soc;
        }
    };
    enum Support_for_tehnology
    {
        OpenGL,
        DirectX,
    };
    class GPU :public virtual Products {
    public:

        string resolution;
    public:
       
        GPU( string res/*, Support_for_tehnology const technology*/) {
            
            resolution = res;
            
            /*Support_for_tehnology::DirectX;
            Support_for_tehnology::OpenGL;*/
            
        }

    };

    class APU : public CPU, public GPU {
    public:
        APU(int cores, int threads, string soc, string res/*, Support_for_tehnology technology*/) {
            noOfCores = cores;
            noOfThreads = threads;
            socket = soc;
            /*Support_for_tehnology::DirectX;
            Support_for_tehnology::OpenGL;*/
        }
    };


    void ProductList() {
        
    }

    int main() {

    Shop project;
    project.menu();
    void ProductsList();
    Products p (5.3, 7.5, "65 Watt", 4.2,"65",34.5);
    APU A_Series_APU(4, 8, "Socket FM2", "1280x960");
    CPU c(4, 8, "SOCKET");
    GPU g("1024x728");

    
    
    
        
    
        

    return 0;
}

