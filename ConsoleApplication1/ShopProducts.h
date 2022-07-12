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
	cout << "4.BACK \n";
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
	cout << "CPU 1 prod:\n";
	cout << "Cores: " << c->noOfCores << "\n ";
	cout << "Threads: " << c->noOfThreads << "\n ";
	cout << "Socket: " << c->socket << "\n ";
	cout << "Weight: " << c->weight << "\n ";
	cout << "Height: " << c->height << "\n ";
	cout << "TDP: " << c->TDP << "\n ";
	cout << "Nms: " << c->nms << "\n ";
	cout << "Memory: " << c->memory << "\n ";
	cout<< "Clk frequency: " << c->clk_frequency << "\n ";

	CPU* c2 = new CPU(4, 6, "soc2");
	c2->weight = 2.2;
	c2->height = 3.2;
	c2->TDP = "tdp";
	c2->nms = 6;
	c2->memory = "memoryC2";
	c2->clk_frequency = 23;
	cout << "CPU 2 prod:\n";
	cout << "Cores: " << c2->noOfCores << "\n ";
	cout << "Threads: " << c2->noOfThreads << "\n ";
	cout << "Socket: " << c2->socket << "\n ";
	cout << "Weight: " << c2->weight << "\n ";
	cout << "Height: " << c2->height << "\n ";
	cout << "TDP: " << c2->TDP << "\n ";
	cout << "Nms: " << c2->nms << "\n ";
	cout << "Memory: " << c2->memory << "\n ";
	cout << "Clk frequency: " << c2->clk_frequency << "\n ";

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
	cout << "GPU 1 prod:\n";
	cout << "Resolution: " << g->resolution << "\n";
	cout << "Weight: " << g->weight << "\n ";
	cout << "Height: " << g->height << "\n ";
	cout << "TDP: " << g->TDP << "\n ";
	cout << "Nms: " << g->nms << "\n ";
	cout << "Memory: " << g->memory << "\n ";
	cout << "Clk frequency: " << g->clk_frequency << "\n ";

	GPU* g2 = new GPU("res2");
	g2->weight = 2.45;
	g2->height = 3.1;
	g2->TDP = "r";
	g2->nms = 1;
	g2->memory = "memoryG";
	g2->clk_frequency = 12;
	cout << "GPU 2 prod:\n";
	cout << "Resolution: " << g2->resolution << "\n";
	cout << "Weight: " << g2->weight << "\n ";
	cout << "Height: " << g2->height << "\n ";
	cout << "TDP: " << g2->TDP << "\n ";
	cout << "Nms: " << g2->nms << "\n ";
	cout << "Memory: " << g2->memory << "\n ";
	cout << "Clk frequency: " << g2->clk_frequency << "\n ";
	
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
	cout << "APU 1 prod:\n";
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

	APU* a2 = new APU(2, 4, "soc", "res");
	a2->weight = 2.7;
	a2->height = 4.6;
	a2->TDP = "h";
	a2->nms = 5;
	a2->memory = "memoryA";
	a2->clk_frequency = 22;
	cout << "APU 2 prod:\n";
	cout << "Cores: " << a2->noOfCores << "\n ";
	cout << "Threads: " << a2->noOfThreads << "\n ";
	cout << "Socket: " << a2->socket << "\n ";
	cout << "Resolution: " << a2->resolution << "\n";
	cout << "Weight: " << a2->weight << "\n ";
	cout << "Height: " << a2->height << "\n ";
	cout << "TDP: " << a2->TDP << "\n ";
	cout << "Nms: " << a2->nms << "\n ";
	cout << "Memory: " << a2->memory << "\n ";
	cout << "Clk frequency: " << a2->clk_frequency << "\n ";

	file_APU.close();
}
