#pragma once
#include<iostream>
#include<string>
using namespace std;

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
    void displayProducts() {
        cout << weight << height << TDP << nms << memory << clk_frequency;
    }
    
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
    void displayCPU() {
        cout << noOfCores << noOfThreads << socket;
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
    void displayGPU() {
        cout << resolution;
    }
};

class APU : public CPU, public GPU {
public:
    APU(int cores, int threads, string soc, string res/*, Support_for_tehnology technology*/) {
        this->noOfCores = cores;
        this->noOfThreads = threads;
        this->socket = soc;
        /*Support_for_tehnology::DirectX;
        Support_for_tehnology::OpenGL;*/
    }
    void displayAPU() {
        cout << noOfCores << noOfThreads << socket << resolution;
    }
};