#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

//class Products {
//public:
//    double weight;
//    double height;
//    string TDP;
//    double nms;
//    string memory;
//    double clk_frequency;
//    Products(double w, double h, string tdp, double nm, string mem, double clk_fr) {
//        weight = w;
//        height = h;
//        TDP = tdp;
//        nms = nm;
//        memory = mem;
//        clk_frequency = clk_fr;
//    }
//    void displayProducts() {
//        cout << weight << height << TDP << nms << memory << clk_frequency;
//    }
//    
//};
//
//
//
//class CPU :public virtual Products {
//public:
//    int noOfCores;
//    int noOfThreads;
//    string socket;
//    CPU(int cores, int threads, string soc) {
//
//        this->noOfCores = cores;
//        this->noOfThreads = threads;
//        this->socket = soc;
//    }
//    void displayCPU() {
//        cout << noOfCores << noOfThreads << socket;
//    }
//};
//enum Support_for_tehnology
//{
//    OpenGL,
//    DirectX,
//};
//class GPU :public virtual Products {
//public:
//
//    string resolution;
//public:
//
//    GPU(string res/*, Support_for_tehnology const technology*/) {
//
//        this->resolution = res;
//
//        /*Support_for_tehnology::DirectX;
//        Support_for_tehnology::OpenGL;*/
//
//    }
//    void displayGPU() {
//        cout << resolution;
//    }
//};
//
//class APU : public CPU, public GPU {
//public:
//    APU(int cores, int threads, string soc, string res/*, Support_for_tehnology technology*/) : CPU(cores, threads, soc ), GPU() {
//        this->noOfCores = cores;
//        this->noOfThreads = threads;
//        this->socket = soc;
//        /*Support_for_tehnology::DirectX;
//        Support_for_tehnology::OpenGL;*/
//    }
//    void displayAPU() {
//        cout << noOfCores << noOfThreads << socket << resolution;
//    }
//};

class Products {
public:

	double weight;
	    double height;
	    string TDP;
	    double nms;
	    string memory;
	    double clk_frequency;
		static void showProducts();
		
};



void Products::showProducts() {
	ofstream file_produse;
	cout << "\n-------------------------PRODUCTS-------------------------" << endl;
	file_produse.open("Produse.txt", ios::in);

	Products p;
	p.weight = 2.3;
	p.height = 2.5;
	p.TDP = "v";
	p.nms = 3.6;
	p.memory = "memory1";
	p.clk_frequency = 2.8;

	//file_produse.write((char*)&p, sizeof(p));
	cout << p.weight << " " << p.height << " " << p.TDP << " " << p.nms << " " << p.memory << " " << p.clk_frequency;
	file_produse.close();
	

}

