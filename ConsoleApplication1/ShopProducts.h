#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int chooseProd;
string y;
void showCPUs();
void showCPU1();
void showCPU2();
void showCPU3();

void showGPUs();
void showGPU1();
void showGPU2();
void showGPU3();

void showAPUs();
void showAPU1();
void showAPU2();
void showAPU3();

void newCPU4();
void newGPU4();

void newProdCart();

//int iC4;
//int iG4;
//void prodSelectAddOrRemove();
//int choiceUpdateItems;

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


void Products::showProducts() {
	ofstream file_produse;
	cout << "\n-------------------------PRODUCTS-------------------------" << endl;
	file_produse.open("Produse.txt", ios::in);

	cout << "1.CPU  \n";
	cout << "2.GPU  \n";
	cout << "3.APU  \n";
	cout << "4.New added products\n";
	cout << "5.BACK \n";
	
	cout << "\nChoose product: ";
	cin >> chooseProd;

	switch (chooseProd)
	{
	case 1:
		showCPUs();
		showProducts();
		
		break;
	case 2:
		showGPUs();
		showProducts();
		break;

	case 3:
		showAPUs();
		showProducts();
		break;
	case 4:
	{
		newProdCart();
		break;
	}
	case 5:

		break;

	default:
		file_produse << "\n\t\t\t Invalid choice...Please Try Again..";
	}


	Products p;
	p.weight = 2.3;
	p.height = 2.5;
	p.TDP = "v";
	p.nms = 3.6;
	p.memory = "memory";
	p.clk_frequency = 2.8;


	
	file_produse.close();
}

void showCPUs() {
	ofstream file_CPU;
	cout << "\n-------------------------CPU-------------------------" << endl;
	file_CPU.open("ProduseCPU.txt", ios::in);

	showCPU1();

	showCPU2();

	showCPU3();
	

	file_CPU.close();
}

void showGPUs() {
	ofstream file_GPU;
	cout << "\n-------------------------GPU-------------------------" << endl;
	file_GPU.open("ProduseCPU.txt", ios::in);

	showGPU1();

	showGPU2();
	
	showGPU3();

	file_GPU.close();

}
void showAPUs() {
	ofstream file_APU;
	cout << "\n-------------------------APU-------------------------" << endl;
	file_APU.open("ProduseCPU.txt", ios::in);

	showAPU1();
	
	showAPU2();
	
	showAPU3();
	

	file_APU.close();
}


void showCPU1() {
	CPU* c = new CPU(6, 12, "Socket AM4"); 
	//Products* c1 = new CPU(2, 4, "soc");
	c->weight = 0.905;
	c->height = 3.98;
	c->TDP = "65W";
	c->nms = 7;
	c->memory = "DDR4-3200 MHz";
	c->clk_frequency = 3.7;
	cout << "AMD Ryzen 5 5600X:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << c->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << c->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << c->socket << "\n ";
	cout << "\t\t\t\t" << "Weight: " << c->weight <<" lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << c->height<<" cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << c->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << c->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << c->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << c->clk_frequency<<" up to 4.6 GHz" << "\n ";
}
void showCPU2() {
	CPU* c2 = new CPU(8, 16, "Socket AM4");
	c2->weight = 0.175;
	c2->height = 3.98;
	c2->TDP = "105W";
	c2->nms = 7;
	c2->memory = "DDR4-3200 MHz";
	c2->clk_frequency = 3.9;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Ryzen 7 5800X:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << c2->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << c2->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << c2->socket << "\n ";
	cout << "\t\t\t\t" << "Weight: " << c2->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << c2->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << c2->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << c2->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << c2->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << c2->clk_frequency << " up to 4.7 GHz" << "\n ";
}
void showCPU3() {
	CPU* c3 = new CPU(4, 6, "Socket FP6");
	c3->weight = 4.20;
	c3->height = 13.4;
	c3->TDP = "15 W";
	c3->nms = 7;
	c3->memory = "DDR4-3200 MHz";
	c3->clk_frequency = 2.1;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Ryzen 5 5500U:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << c3->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << c3->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << c3->socket  << "\n ";
	cout << "\t\t\t\t" << "Weight: " << c3->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << c3->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << c3->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << c3->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << c3->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << c3->clk_frequency << " up to 4 GHz" << "\n ";
}

void showGPU1() {
	GPU* g = new GPU("1920x1080");
	g->weight = 1.35;
	g->height = 4;
	g->TDP = "160W";
	g->nms = 7;
	g->memory = "GDDR5 8GB";
	g->clk_frequency = 1897;
	cout << "AMD Radeon RX 6600:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Resolution: " << g->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << g->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << g->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << g->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << g->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << g->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << g->clk_frequency << " MHz" << "\n ";
}
void showGPU2() {
	GPU* g2 = new GPU("2560x1440");
	g2->weight = 3,8;
	g2->height = 24.1;
	g2->TDP = "185W";
	g2->nms = 14;
	g2->memory = "GDDR5 8GB";
	g2->clk_frequency = 1744;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Radeon RX 580:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Resolution: " << g2->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << g2->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << g2->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << g2->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << g2->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << g2->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << g2->clk_frequency << " MHz" << "\n ";
}
void showGPU3() {
	GPU* g3 = new GPU("3840x2160");
	g3->weight = 3.31;
	g3->height = 17;
	g3->TDP = "335W";
	g3->nms = 7;
	g3->memory = "GDDR6 16 GB";
	g3->clk_frequency = 1925;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Radeon RX 6950 XT:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Resolution: " << g3->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << g3->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << g3->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << g3->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << g3->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << g3->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << g3->clk_frequency << " MHz" << "\n ";
}

void showAPU1() {
	APU* a = new APU(64, 128, "sWRX8", "3840x2160");
	a->weight = 0.77;
	a->height = 7.79;
	a->TDP = "280W";
	a->nms = 12;
	a->memory = "DDR4-3200";
	a->clk_frequency = 2.7;
	cout << "AMD Ryzen Threadripper PRO 5995WX:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << a->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << a->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << a->socket << "\n ";
	cout << "\t\t\t\t" << "Resolution: " << a->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << a->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << a->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << a->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << a->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << a->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << a->clk_frequency <<" GHZ" << "\n ";
}
void showAPU2() {
	APU* a2 = new APU(8, 16, "FP7", "2560x1440");
	a2->weight = 0.23;
	a2->height = 6.24;
	a2->TDP = "45W";
	a2->nms = 5;
	a2->memory = "DDR5-4800";
	a2->clk_frequency = 3.3;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Ryzen 9 6980HX:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << a2->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << a2->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << a2->socket << "\n ";
	cout << "\t\t\t\t" << "Resolution: " << a2->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << a2->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << a2->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << a2->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << a2->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << a2->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << a2->clk_frequency << " GHz" << "\n ";
}
void showAPU3() {
	APU* a3 = new APU(32, 64, "sWRX8", "2560x1440");
	a3->weight = 2.7;
	a3->height = 4.6;
	a3->TDP = "280W";
	a3->nms = 7;
	a3->memory = "DDR4";
	a3->clk_frequency = 3.2;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD RyzenThreadripper PRO 3975WX:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << a3->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << a3->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << a3->socket << "\n ";
	cout << "\t\t\t\t" << "Resolution: " << a3->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << a3->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << a3->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << a3->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << a3->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << a3->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << a3->clk_frequency << " GHz" << "\n ";
}



void newCPU4() {
	CPU* c4 = new CPU(12, 24, "Socket AM4");
	c4->weight = 0.175;
	c4->height = 3.98;
	c4->TDP = "105 W";
	c4->nms = 12;
	c4->memory = "DDR4-3200 MHz";
	c4->clk_frequency = 3.7;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Ryzen 9 5900X:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Cores: " << c4->noOfCores << "\n ";
	cout << "\t\t\t\t" << "Threads: " << c4->noOfThreads << "\n ";
	cout << "\t\t\t\t" << "Socket: " << c4->socket << "\n ";
	cout << "\t\t\t\t" << "Weight: " << c4->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << c4->height <<" cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << c4->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << c4->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << c4->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << c4->clk_frequency <<" up to 4.8 GHz" << "\n ";
}

void newGPU4() {
	GPU* g4 = new GPU("3840x2160");
	g4->weight = 5.2;
	g4->height = 12;
	g4->TDP = "300W";
	g4->nms = 7;
	g4->memory = "GDDR6 16 GB";
	g4->clk_frequency = 1825;
	cout << "\n-----------------------------------------------------" << endl;
	cout << "AMD Radeon RX 6800 XT:\n";
	cout << "\n";
	cout << "\t\t\t\t" << "Resolution: " << g4->resolution << "\n";
	cout << "\t\t\t\t" << "Weight: " << g4->weight << " lbs" << "\n ";
	cout << "\t\t\t\t" << "Height: " << g4->height << " cm" << "\n ";
	cout << "\t\t\t\t" << "TDP: " << g4->TDP << "\n ";
	cout << "\t\t\t\t" << "Nms: " << g4->nms << "\n ";
	cout << "\t\t\t\t" << "Memory: " << g4->memory << "\n ";
	cout << "\t\t\t\t" << "Clk frequency: " << g4->clk_frequency << " MHz" << "\n ";
}

