#pragma once
#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int selectC;
int selectG;
int selectA;

int iC1;
int iC2;
int iC3;
int iG1;
int iG2;
int iG3;
int iA1;
int iA2;
int iA3;

int removeItemsFromCart;
void removeItemsFromCartClient();
int itemToRemove;

void ActualCart();

void addCPU() {

	ofstream selectCPU;
	cout << "\n--SELECT CPU PRODUCT--" << endl;
	selectCPU.open("SelectCPU.txt", ios::in);

	cout << "1.CPU1\n";
	cout << "2.CPU2\n";
	cout << "3.CPU3\n";
	cout << "4.BACK\n";
	cout << "Select product ";
	cin >> selectC;
	switch (selectC) {
	case 1:
	{	iC1 = 1;
		showCPU1();
		cout << "Product added! ";
		break;
	}
	case 2:
	{	iC2 = 1;
		showCPU2();
		cout << "Product added! ";
		break;
	}
	case 3:
	{	iC3 = 1;
		showCPU3();
		cout << "Product added! ";
		break;
	}
	case 4: 
	{

		break;
	}
	default:
		selectCPU << "\n\t\t\t Invalid choice...Please Try Again..";

}

	cartSelect();
	//actionsClient();
}
void addGPU() {
	ofstream selectGPU;
	cout << "\n--SELECT GPU PRODUCT--" << endl;
	selectGPU.open("SelectGPU.txt", ios::in);

	cout << "1.GPU1\n";
	cout << "2.GPU2\n";
	cout << "3.GPU3\n";
	cout << "4.BACK\n";
	cout << "Select product ";
	cin >> selectG;
	switch (selectG) {
	case 1:
	{	iG1 = 1;
		showGPU1();
		cout << "Product added! ";
		break;
	}
	case 2:
	{
		iG2 = 1;
		showGPU2();
		cout << "Product added! ";
		break;
	}
	case 3:
	{
		iG3 = 1;
		showGPU3();
		cout << "Product added! ";
		break;
	}
	case 4:
	{

		break;
	}
	default:
		selectGPU << "\n\t\t\t Invalid choice...Please Try Again..";

	}

	cartSelect();
	//actionsClient();
}
void addAPU() {
	ofstream selectAPU;
	cout << "\n--SELECT APU PRODUCT--" << endl;
	selectAPU.open("SelectAPU.txt", ios::in);

	cout << "1.APU1\n";
	cout << "2.APU2\n";
	cout << "3.APU3\n";
	cout << "4.BACK\n";
	cout << "Select product ";
	cin >> selectA;
	switch (selectA) {
	case 1:
	{
		iA1 = 1;
		showAPU1();
		cout << "Product added! ";
		break;
	}
	case 2:
	{
		iA2 = 1;
		showAPU2();
		cout << "Product added! ";
		break;
	}
	case 3:
	{
		iA3 = 1;
		showAPU3();
		cout << "Product added! ";
		break;
	}
	case 4:
	{

		break;
	}
	default:
		selectAPU << "\n\t\t\t Invalid choice...Please Try Again..";

	}

	cartSelect();
	//actionsClient();
}


void ActualCart() {
	if (iC1 == 1)
		showCPU1();
	cout << "\n";
	if (iC2 == 2)
		showCPU2();
	cout << "\n";
	if (iC3 == 1)
		showCPU3();
	cout << "\n";

	if (iG1 == 1)
		showGPU1();
	cout << "\n";
	if (iG2 == 1)
		showGPU2();
	cout << "\n";
	if (iG3 == 1)
		showGPU3();
	cout << "\n";

	if (iA1 == 1)
		showAPU1();
	cout << "\n";
	if (iA2 == 1)
		showAPU2();
	cout << "\n";
	if (iA3 == 1)
		showAPU3();
	cout << "\n";


}

void displayActualCart() {
	ofstream displayActualCart;
	cout << "\n---------------------YOUR CART--------------------- " << endl;
	displayActualCart.open("Actual cart.txt", ios::app);

	ActualCart();

	cout << "DO YOU WANT TO REMOVE ANY ITEMS FROM CART? \n 1.YES \n 2.NO";
	cin >> removeItemsFromCart;
	switch (removeItemsFromCart)
	{
	case 1: 
	{
		removeItemsFromCartClient();
		
		
		break;
	}
	case 2:
	{
		cartSelect();
		break;
	}
	}
}

void removeItemsFromCartClient() {
	ofstream removeItmesFromCartCLient;
	removeItmesFromCartCLient.open("Remove items from cart client", ios::app);
	ActualCart();

	cout << "Select which item you want to remove "<<endl;
	

}