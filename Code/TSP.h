//
// Created by PRINCE NDHLOVU on 10/16/20.
//

#ifndef CODE_TSP_H
#define CODE_TSP_H

#include <chrono>
#include <iostream>
#include "HamiltonianCircuit.h"
#include "Algorithm.h"

class TSP: public Algorithm {

private:
    std::chrono::high_resolution_clock::time_point begin, end;
    chrono::duration<double> time;
    int algo;

public:
    TSP();
    TSP* Select(int);
    void Execute();

};


#endif //CODE_TSP_H
