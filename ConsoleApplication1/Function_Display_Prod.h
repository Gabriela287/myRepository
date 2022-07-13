#pragma once
#include<iostream>
#include<fstream>
using namespace std;

int choiceOfClient;
int choiceOfAdmin;
int choiceAddToCart;
int choiceUpdateItems;
void cartSelect();
void prodSelectAddOrRemove();
void convertClient();

void addCPU();
void addGPU();
void addAPU();

int iC4;
int iG4;




void actionsClient() {
	ofstream file_ClientOptions;
	cout << "\n-------------------------CHOOSE AN OPTION-------------------------" << endl;
	file_ClientOptions.open("Client page.txt", ios::app);
	
	cout << "1.ADD OR REMOVE ITMENS FROM CART";
	cout << "\n2.BACK\n";
	cin >> choiceOfClient;
	switch (choiceOfClient) {
	case 1:
	{cartSelect();
	actionsClient();
	 }
		break;
	case 2:
		
		break;
	default:
		file_ClientOptions << "\n\t\t\t Invalid choice...Please Try Again..";
	}
}

void actionsAdministrator() {
	ofstream file_AdminOptions;
	cout << "\n-------------------------CHOOSE AN OPTION-------------------------" << endl;
	file_AdminOptions.open("Admin page.txt", ios::app);

	cout << "1.ADD OR REMOVE PRODUCTS FOR SELLING";
	cout << "\n2.CONVERT A CLIENT TO ADMIN ROLE";
	cout << "\n3.BACK\n";
	cin >> choiceOfAdmin;
	switch (choiceOfAdmin) {
	case 1:
		prodSelectAddOrRemove();
		break;
	case 2:
		convertClient();
		break;
	case 3:
		break;
	default:
		file_AdminOptions << "\n\t\t\t Invalid choice...Please Try Again..";
	}
}

void cartSelect() {
	ofstream cart;
	cout << "\n---------------------SELECT A PRODUCT--------------------- "<<endl;
	cart.open("Cart with products.txt", ios::app);

	cout << "1.ADD CPU\n";
	cout << "2.ADD GPU\n";
	cout << "3.ADD APU\n";
	cout << "4.BACK\n";
	cin >> choiceAddToCart;
	switch (choiceAddToCart) {
	case 1:
	{
		addCPU();

	}
		break;
	case 2:
		addGPU();
		
		break;

	case 3:
		addAPU();
		
		break;

	case 4:

		break;
	default:
		cart << "Invalid choice, please try again. ";
	}
}

void prodSelectAddOrRemove() {
	ofstream productsUpdate;
	cout << "\n---------------------SELECT A PRODUCT--------------------- " << endl;
	productsUpdate.open("Products update.txt", ios::app);

	cout << "Available new products: \n";
	cout << "Select item\n";
	cout << "1.CPU4\n";
	cout << "2.GPU4\n";
	cout << "3.BACK\n";
	cin >> choiceUpdateItems;
	switch (choiceUpdateItems) {
	case 1:
	{
		iC4 = 1;
		newCPU4();
		prodSelectAddOrRemove();
		break;
	}
	case 2: 
	{
		iG4 = 1;
		newGPU4();
		prodSelectAddOrRemove();
		break;
	}
	case 3:
	{
		break;
	}
	default:
		productsUpdate << "\n\t\t\t Invalid choice...Please Try Again..";

	}

	/*if (iC4 == 1) {
		Products::showProducts();
	}*/

}

void newProdCart() {
	if (iC4 == 1)
	{
		newCPU4();
	}
	if (iG4 == 1)
	{
		newGPU4();
	}
}


void convertClient() {
	/*ofstream convertClientToAdmin("Convert client to admin.txt");
	Shop::clientLogin();*/
	
}


