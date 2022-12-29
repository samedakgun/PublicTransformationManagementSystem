#ifndef MainPanel_hpp
#define MainPanel_hpp
#include <string.h>
#include <stdio.h>
#include<iostream>
#include"Admin.hpp"
#include"User.hpp"
using namespace std;

class MainPanel
{
private:
    string a="admin";
    string b="admin";
    
public:
    
    MainPanel(Data& d1,Graph& g1);
    ~MainPanel();
    
    
};

#endif /* MainPanel_hpp */
