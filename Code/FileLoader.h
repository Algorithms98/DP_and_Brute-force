//
// Created by PRINCE NDHLOVU on 10/16/20.
//

#ifndef CODE_FILELOADER_H
#define CODE_FILELOADER_H

#include <fstream>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <sstream>
#include <string>

using namespace std;


class FileLoader {

private:
    unordered_map<int, vector<int>> position_nodes;

public:
    FileLoader();
    unordered_map<int, vector<int>> loadData();

};


#endif //CODE_FILELOADER_H
