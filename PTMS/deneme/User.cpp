#include "User.hpp"
#include<iostream>
#include<string.h>
#include"Data.hpp"
#include"Algo.hpp"
#include"Graph.hpp"
#include"MainPanel.hpp"
#include "Admin.hpp"
using namespace std;
#include<list>

User::User(Graph& g,Data& d1)
{
    int x,y;
    int s,a;
    cout<<endl<<endl<<"WELCOME THE USER PANEL"<<endl<<endl;
    cout<<"Enter start x Cordinant: ";
    cin>>x;
    cout<<endl<<"Enter enter y Cordinant: ";
    cin>>y;
    cout<<endl<<endl;
    
    cout<<"Enter end x Cordinant: ";
    cin>>s;
    cout<<endl<<"Enter end y Cordinant: ";
    cin>>a;
    cout<<endl<<endl;
    
    
    cout<<"Walk to the station-->"<<d1.FindtheStation(x, y)<<endl;
    g.printAllPaths(d1.FindCenterPoint(x, y),d1.FindCenterPoint(s, a));
    cout<<endl;
    cout<<"get off at the stop here:"<<d1.FindtheStation(s, a)<<endl;
    cout<<endl;
    
    
    
}
User::~User()
{
    
}



