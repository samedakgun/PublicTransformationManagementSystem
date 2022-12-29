#include"Data.hpp"
#include "MainPanel.hpp"
#include"Graph.hpp"
#include <iostream>
#include<string.h>
#include"Graph.hpp"
#include"User.hpp"
#include"MainPanel.hpp"


using namespace std;

int main()
{
    Data d1;
    Graph g1(100);
    MainPanel m1(d1,g1);
    return 0;
}
