#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int chooseProd;

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

class CPU :public virtual Products {
	public:
	    int noOfCores;
	    int noOfThreads;
	    string socket;
	    CPU(int cores, int threads, string soc) {
	
	        this->noOfCores = cores;
	        this->noOfThreads = threads;
	        this->socket = soc;
	    }
		

	};
static void showCPUs();
enum Support_for_tehnology
	{
	    OpenGL,
	    DirectX,
	};

class GPU :public virtual Products {
	public:
	
	    string resolution;
	public:
	
	    GPU(string res/*, Support_for_tehnology const technology*/) {
	
	        this->resolution = res;
	
	        /*Support_for_tehnology::DirectX;
	        Support_for_tehnology::OpenGL;*/
	
	    }
		
	};
static void showGPUs();

class APU : public CPU, public GPU {
public:
    APU(int cores, int threads, string soc, string res/*, Support_for_tehnology technology*/) : CPU(cores, threads, soc ), GPU(res) {
        this->noOfCores = cores;
        this->noOfThreads = threads;
        this->socket = soc;
		this->resolution = res;
        /*Support_for_tehnology::DirectX;
        Support_for_tehnology::OpenGL;*/
    }
	
};
void showAPUs();

void Products::showProducts() {
	ofstream file_produse;
	cout << "\n-------------------------PRODUCTS-------------------------" << endl;
	file_produse.open("Produse.txt", ios::in);

	cout << "1.CPU  \n";
	cout << "2.GPU  \n";
	cout << "3.APU  \n";
	cout << "\nChoose product: ";
	cin >> chooseProd;

	switch (chooseProd)
	{
	case 1:
		showCPUs();
		break;
	case 2:
		showGPUs();
		break;

	case 3:
		showAPUs();
		break;
	case 4:
		exit(0);

		break;

	default:
		file_produse << "\n\t\t\t Invalid choice...Please Try Again..";
	}


	Products p;
	p.weight = 2.3;
	p.height = 2.5;
	p.TDP = "v";
	p.nms = 3.6;
	p.memory = "memory1";
	p.clk_frequency = 2.8;


	
	file_produse.close();
}

void showCPUs() {
	ofstream file_CPU;
	cout << "\n-------------------------CPU-------------------------" << endl;
	file_CPU.open("ProduseCPU.txt", ios::in);

	CPU* c = new CPU(2, 4, "soc");
	//Products* c1 = new CPU(2, 4, "soc");
	c->weight = 2.4;
	c->height = 3.6;
	c->TDP = "t";
	c->nms = 3;
	c->memory = "memoryC";
	c->clk_frequency = 2;

	cout << "CPU prod:\n";
	cout << "Cores: " << c->noOfCores << "\n ";
	cout << "Threads: " << c->noOfThreads << "\n ";
	cout << "Socket: " << c->socket << "\n ";
	cout << "Weight: " << c->weight << "\n ";
	cout << "Height: " << c->height << "\n ";
	cout << "TDP: " << c->TDP << "\n ";
	cout << "Nms: " << c->nms << "\n ";
	cout << "Memory: " << c->memory << "\n ";
	cout<< "Clk frequency: " << c->clk_frequency << "\n ";
	file_CPU.close();
}

void showGPUs() {
	ofstream file_GPU;
	cout << "\n-------------------------GPU-------------------------" << endl;
	file_GPU.open("ProduseCPU.txt", ios::in);

	GPU* g = new GPU("res");
	g->weight = 2.45;
	g->height = 3.1;
	g->TDP = "r";
	g->nms = 1;
	g->memory = "memoryG";
	g->clk_frequency = 12;

	cout << "GPU prod:\n";
	cout << "Resolution: " << g->resolution << "\n";
	cout << "Weight: " << g->weight << "\n ";
	cout << "Height: " << g->height << "\n ";
	cout << "TDP: " << g->TDP << "\n ";
	cout << "Nms: " << g->nms << "\n ";
	cout << "Memory: " << g->memory << "\n ";
	cout << "Clk frequency: " << g->clk_frequency << "\n ";
	file_GPU.close();
}
void showAPUs() {
	ofstream file_APU;
	cout << "\n-------------------------APU-------------------------" << endl;
	file_APU.open("ProduseCPU.txt", ios::in);

	APU* a = new APU(2, 4, "soc", "res");
	a->weight = 2.7;
	a->height = 4.6;
	a->TDP = "h";
	a->nms = 5;
	a->memory = "memoryA";
	a->clk_frequency = 22;

	cout << "APU prod:\n";
	cout << "Cores: " << a->noOfCores << "\n ";
	cout << "Threads: " << a->noOfThreads << "\n ";
	cout << "Socket: " << a->socket << "\n ";
	cout << "Resolution: " << a->resolution << "\n";
	cout << "Weight: " << a->weight << "\n ";
	cout << "Height: " << a->height << "\n ";
	cout << "TDP: " << a->TDP << "\n ";
	cout << "Nms: " << a->nms << "\n ";
	cout << "Memory: " << a->memory << "\n ";
	cout << "Clk frequency: " << a->clk_frequency << "\n ";
	file_APU.close();
}
