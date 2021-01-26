#include <iostream>
#include "TSP.h"
#include "SelectAlgo.h"

using namespace std;

int main() {

    enum alg_list{SP=1};
    enum method{Dynamic=1, BruteForce};

    Algorithm* algorithm = SelectAlgo::Technique(SP);
    algorithm->Select(Dynamic)->Execute();
    algorithm->Select(BruteForce)->Execute();

    return 0;
}
