//
// Created by PRINCE NDHLOVU on 10/16/20.
//

#include "FileLoader.h"

FileLoader::FileLoader() = default;

//reading in the positions.txt file
unordered_map<int, vector<int> > FileLoader::loadData() {

    ifstream positionFile("/Users/princendhlovu/Desktop/lab-3-dynamic-programming-Algorithms98/Data/Graph/positions.txt");

    if(!positionFile.is_open()){
        cout << "Could not open position file in FileLoader.cpp \n";
        return position_nodes;
    }
    vector<int> data, temp_data;
    string line, temp;

    while(!positionFile.eof()){

        getline(positionFile, line);
        stringstream ss(line);

        while(ss){
            if(!getline(ss, temp, ',')){
                break;
            }
            int put = stoi(temp);
            data.push_back(put);
        }

        for(int j = 1; j < 4; j++){
            temp_data.push_back(data[j]);
        }

        position_nodes.insert(make_pair(data[0]-1, temp_data));
       // position_nodes[data[0]-1] = temp_data;
        temp_data.clear();
        data.clear();
    }
    positionFile.close();
    return position_nodes;
}

