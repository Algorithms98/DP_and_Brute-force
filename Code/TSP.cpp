//
// Created by PRINCE NDHLOVU on 10/16/20.
//

#include "TSP.h"

TSP::TSP() {

}

TSP* TSP::Select(int num) {
    algo = num;
    return this;
}

void TSP::Execute() {

    HamiltonianCircuit pathObj;

    begin = chrono::high_resolution_clock::now();

    switch(algo){
        case 1:
            pathObj.Dynamic();
            break;
        case 2:
            pathObj.BruteForce();
            break;
        default:
            cout << "Not a valid int \n";
    }

    end = chrono::high_resolution_clock::now();
    time = chrono::duration_cast<std::chrono::duration<double>>(end - begin);
    cout << "Execution time: " << time.count() << endl;
    cout << endl;

}
