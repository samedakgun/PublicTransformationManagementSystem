#ifndef Data_hpp
#define Data_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <tuple>
#include"Algo.hpp"
#include"Graph.hpp"

using namespace std;

extern vector<pair<int, int>> Edge;//Edgeleri eklemek ve kaydetmek için kullanacağım
extern vector<tuple<int, int,int>> Station;//Stationların bilgilerini kaydetmek için kullanacağım
extern vector<tuple<int, int,int>> StationofCenter;

class Data
{
public:
    int FindtheStation(int x, int y);//En yakın merkez noktayı bulacak//okey
    int FindCenterPoint(int a,int b);//En yakın Hattı bulur//okey
    void InsertEdge();//okey
    void InsertStation();//okey
    void PrintEdge();//okey
    void PrintStation();//okey
};

#endif 
