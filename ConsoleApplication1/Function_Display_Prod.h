#pragma once
#include<iostream>
#include<fstream>
using namespace std;

int choiceOfClient;
int choiceOfAdmin;
int choiceAddToCart;
void cartSelect();
void prodSelectAddOrRemove();
void convertClient();

void addCPU();
void addGPU();
void addAPU();


void actionsClient() {
	ofstream file_ClientOptions;
	cout << "\n-------------------------CHOOSE AN OPTION-------------------------" << endl;
	file_ClientOptions.open("Cart.txt", ios::app);
	
	cout << "1.ADD OR REMOVE ITMENS FROM CART";
	cout << "\n2.BACK\n";
	cin >> choiceOfClient;
	switch (choiceOfClient) {
	case 1:
		cartSelect();
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
	file_AdminOptions.open("Cart.txt", ios::app);

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
	cout << "Select a product: ";
	cout << "1.CPU\n";
	cout << "2.GPU\n";
	cout << "3.APU\n";
	cout << "4.BACK\n";
	switch (choiceAddToCart) {
	case 1:
		addCPU();
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
		cout << "Invalid choice, please try again. ";
	}
}

void prodSelectAddOrRemove() {
	cout << "Add or remove prod";
}
void convertClient() {
	cout << "Convert client";
}