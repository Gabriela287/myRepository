// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
using namespace std;

class Products {
public:
    double weight;
    double height;
    string TDP;
    double nms;
    string* memory;
    double clk_frequency;
    Products(double w, double  h, string tdp, double nm, string* mem, double clk_fr) {
        weight = w;
        height = h;
        TDP = tdp;
        nms = nm;
        memory = mem;
        clk_frequency = clk_fr;
    }

};


class APU : public Products {
    int noOfCores;
    int noOfThreads;
    string socket;
    string* resolution;
    enum Support_for_technology
    {
        OpenGL,
        DirectX,
    };
    
    APU(int cores, int threads, string soc, string* resol, Support_for_technology OpenGL, Support_for_technology DirectX) {
        noOfCores = cores;
        noOfThreads = threads;
        socket = soc;
        resolution = resol;
        
    }
};
class CPU :public Products  {
    int noOfCores;
    int noOfThreads;
    string socket;
};
class GPU :public Products {
    string* resolution;
    enum Support_for_tehnology
    {
        OpenGL,
        DirectX,
    };
};



int main()
{
    CPU c;
    c.weight = (5);


    return 0;
}

