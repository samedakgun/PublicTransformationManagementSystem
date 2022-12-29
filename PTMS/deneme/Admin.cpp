#include "Admin.hpp"
#include"User.hpp"
#include <iostream>
#include "User.hpp"
#include "Data.hpp"
#include"Graph.hpp"
#include "Data.hpp"
using namespace std;


Admin::Admin(Data& d1, Graph& g1)
{
    
}
Admin::~Admin()
{
    
}

void Admin::InsertGraph(Graph& g, int x, int y)
{
    /*bool _x=false;
    bool _y=false;
    for (const auto &t : Station)//bu durak varsa
    {
        if(x!=get<0>(t))
        {
            _x=true;
        }
        else
            cout<<x<<" stationu bulunmaktadır"<<endl;
    }
    
    
    for (const auto &t : Station)// bu durak varsa
    {
        if(x!=get<0>(t))
        {
            _y=true;
        }
        else
            cout<<y<<" stationu bulunmamaktadır"<<endl;
    }
    
    if(_x==true&&_y==true)
    {g.addEdge(x, y);}*/
    g.addEdge(x, y);
    
}
void Admin::display_admin(Data& d1, Graph& g1)
{
    cout<<"--------------------------------";
    cout<<"--------------------------------";
    cout<<"Welcome Admin Panel";
    cout<<"--------------------------------";
    cout<<"--------------------------------";
    
    cout<<endl<<endl;
    
    cout<<"1-> Insert station"<<endl
        <<"2-> Insert Edge"<<endl
        <<"Choose your option: "<<endl;
    
    int t;
    cin>>t;
    switch (t) {
        case 1:
        {
            d1.InsertStation();
        }
            break;
            
        case 2:
        {
            cout<<"Type the first edge to add: ";
            int b;
            cin>>b;
            cout<<endl;
            cout<<"Type the second edge to add: ";
            int j;
            cin>>j;
            cout<<endl;
            g1.addEdge(b, j);
            //InsertGraph(g1, b, j);
        }
        
    }
}
